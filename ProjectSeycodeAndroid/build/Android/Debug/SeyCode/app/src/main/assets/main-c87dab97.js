// Required Variables
var Observable = require("FuseJS/Observable");
var md5        = require("scripts/md5.js");

// Ascii Tables
var asciiTableChars = {"!": 1, "\"": 2, "#": 3, "$": 4, "~": 5, "%": 6, "&": 7, "'": 8, "(": 9, ")": 10,
                       "*": 11, "+": 12, ",": 13, "-": 14, ".": 15, "/": 16, "0": 17, "1": 18, "2": 19, "3": 20,
                       "4": 21, "5": 22, "6": 23, "7": 24, "8": 25, "9": 26, ":": 27, ";": 28, "<": 29, "=": 30,
                       ">": 31, "?": 32, "@": 33, "A": 34, "B": 35, "C": 36, "D": 37, "E": 38, "F": 39, "G": 40,
                       "H": 41, "I": 42, "J": 43, "K": 44, "L": 45, "M": 46, "N": 47, "O": 48, "P": 49, "Q": 50,
                       "R": 51, "S": 52, "T": 53, "U": 54, "V": 55, "W": 56 ,"X": 57, "Y": 58, "Z": 59, "[": 60,
                       "\\": 61, "]": 62, "^": 63, "_": 64, "`": 65, "a": 66, "b": 67, "c": 68, "d": 69, "e": 70,
                       "f": 71, "g": 72, "h": 73, "i": 74, "j": 75, "k": 76, "l": 77, "m": 78, "n": 79, "o": 80,
                       "p": 81, "q": 82, "r": 83, "s": 84, "t": 85, "u": 86, "v": 87, "w": 88, "x": 89, "y": 90,
                       "z": 91, "{": 92, "|": 93, "}": 94, " ": 95};
var asciiTableValues = {30: "=", 55: "V", 75: "j", 2: "\"", 41: "H", 21: "4", 20: "3", 56: "W", 38: "E", 36: "C",
                        17: "0", 46: "M", 7: "&", 67: "b", 91: "z", 74: "i", 73: "h", 43: "J", 45: "L", 58: "Y",
                        26: "9", 60: "[", 84: "s", 48: "O", 22: "5", 19: "2", 3: "#", 93: "|", 40: "G", 6: "%",
                        16: "/", 61: "\\", 69: "d", 76: "k", 68: "c", 4: "$", 83: "r", 82: "q", 65: "`", 85: "t",
                        24: "7", 66: "a", 39: "F", 80: "o", 88: "w", 78: "m", 70: "e", 71: "f", 34: "A", 44: "K",
                        31: ">", 94: "}", 81: "p", 72: "g", 89: "x", 57: "X", 23: "6", 53: "T", 52: "S", 12: "+",
                        63: "^", 47: "N", 32: "?", 50: "Q", 29: "<", 79: "n", 42: "I", 28: ";", 59: "Z", 10: ")",
                        14: "-", 86: "u", 35: "B", 15: ".", 90: "y", 87: "v", 13: ",", 54: "U", 1: "!", 92: "{",
                        18: "1", 25: "8", 27: ":", 49: "P", 33: "@", 77: "l", 37: "D", 9: "(", 95: " ", 5: "~", 64: "_",
                        62: "]", 11: "*", 8: "'", 51: "R"};
var debug           = false;

// Variables for encoding
var key1Encode      = Observable("");
var key2Encode      = Observable("");
var checkboxChecked = Observable(true);
var encodeError     = Observable("");
var plainTextEncode = Observable("");
var encodedText     = Observable("");
// Variables for decoding
var key1Decode      = Observable("");
var key2Decode      = Observable("");
var decodeError     = Observable("");
var plainTextDecode = Observable("");
var decodedText     = Observable("");

function encode() {

    // Clear encodeError and encodedText
    encodeError.value = "";
    encodedText.value = "";

    // Check if checkbox was checked
    if(checkboxChecked.value) {
        // key2 will be hashed with md5
        key2Encode.value = md5(key2Encode.value);
    }

    if(debug) debug_log(key2Encode.value);

    if(key1Encode.value == "" || plainTextEncode.value == "") {
        encodeError.value = "Please fill in all fields.";
    } else {

        // Necessary variables
        var key1Length       = key1Encode.value.length;
        var key2Length       = key2Encode.value.length;
        var plainTextLength  = plainTextEncode.value.length;
        var key1for          = 0;
        var key2for          = 0;
        var key1limitReached = false;
        var key2limitReached = false;

        for(var i = 0; i < plainTextLength; i++) {

            key1limitReached = false;
            key2limitReached = false;

            // Check for overloading
            if(key1for == key1Length) {
                key1for          = 0;
                key1limitReached = true;
                if(debug) debug_log("Key 1 limit reached");
            }

            if(key2for == key2Length) {
                key2for          = 0;
                key2limitReached = true;
                if(debug) debug_log("Key 2 limit reached");
            }

            // Get current character
            var key1Character                = key1Encode.value.charAt(key1for);
            var key2Character                = key2Encode.value.charAt(key2for);
            var plainTextCharacter           = plainTextEncode.value.charAt(i);
            // Get Ascii values
            var asciiValueKey1Character      = asciiTableChars[key1Character];
            var asciiValueKey2Character      = asciiTableChars[key2Character];
            var asciiValuePlainTextCharacter = asciiTableChars[plainTextCharacter];

            if(debug) {
                debug_log("Value of plainText (" + plainTextCharacter + ") #" + i + ": " + asciiValuePlainTextCharacter);
                debug_log("Value of key1 (" + key1Character + ") #" + i + ": " + asciiValueKey1Character);
                debug_log("Value of key2 (" + key2Character + ") #" + i + ": " + asciiValueKey2Character);
            }

            // Check if one or both keys was reset
            if(key1limitReached == false) {
                key1for++;
            }

            if(key2limitReached == false) {
                key2for++;
            }

            var encodedAsciiValue = asciiValuePlainTextCharacter + asciiValueKey1Character + asciiValueKey2Character;

            if(encodedAsciiValue > 190) {
                encodedAsciiValue -= 190;
            }

            if(encodedAsciiValue > 95 && encodedAsciiValue <= 190) {
                encodedAsciiValue -= 95;
            }

            if(debug) debug_log("= " + encodedAsciiValue);

            encodedText.value += asciiTableValues[encodedAsciiValue];

        }
        if(debug) {
            debug_log("Key 1: " + key1Encode.value);
            debug_log("Key 2: " + key2Encode.value);
            debug_log("EncodedText: " + encodedText.value);
        }

    }

}

function decode() {

    // Clear Variables
    decodeError.value = "";
    decodedText.value = "";

    // Check if fields are empty
    if(key1Decode.value == "" || key2Decode.value == "" || plainTextDecode.value == "") {
        // Set Error Message
        decodeError.value = "Please fill in all fields.";

    } else {

        var key1Length       = key1Decode.value.length;
        var key2Length       = key2Decode.value.length;
        var plainTextLength  = plainTextDecode.value.length;
        var key1for          = 0;
        var key2for          = 0;
        var key1limitReached = false;
        var key2limitReached = false;

        for(var i = 0; i < plainTextLength; i++) {
            key1limitReached = false;
            key2limitReached = false;

            // Check for overloading
            if(key1for == key1Length) {
                key1for          = 0;
                key1limitReached = true;
                if(debug) debug_log("Key 1 limit reached");
            }

            if(key2for == key2Length) {
                key2for          = 0;
                key2limitReached = true;
                if(debug) debug_log("Key 2 limit reached");
            }

            // Get current character
            var key1Character                = key1Decode.value.charAt(key1for);
            var key2Character                = key2Decode.value.charAt(key2for);
            var plainTextCharacter           = plainTextDecode.value.charAt(i);
            // Get Ascii values
            var asciiValueKey1Character      = asciiTableChars[key1Character];
            var asciiValueKey2Character      = asciiTableChars[key2Character];
            var asciiValuePlainTextCharacter = asciiTableChars[plainTextCharacter];

            if(debug) {
                debug_log("Value of plainText (" + plainTextCharacter + ") #" + i + ": " + asciiValuePlainTextCharacter);
                debug_log("Value of key1 (" + key1Character + ") #" + i + ": " + asciiValueKey1Character);
                debug_log("Value of key2 (" + key2Character + ") #" + i + ": " + asciiValueKey2Character);
            }

            // Check if one or both keys was reset
            if(key1limitReached == false) {
                key1for++;
            }

            if(key2limitReached == false) {
                key2for++;
            }

            var decodedAsciiValue = asciiValuePlainTextCharacter - asciiValueKey1Character - asciiValueKey2Character;

            if(decodedAsciiValue <= -95) {
                decodedAsciiValue += 190;
            }

            if(decodedAsciiValue <= 0) {
                decodedAsciiValue += 95;
            }

            if(debug) debug_log("= " + decodedAsciiValue);

            decodedText.value += asciiTableValues[decodedAsciiValue];

        }

    }
}

module.exports = {
    // Encode Variables
    key1Encode: key1Encode,
    key2Encode: key2Encode,
    checkboxChecked: checkboxChecked,
    encodeError: encodeError,
    plainTextEncode: plainTextEncode,
    encodedText: encodedText,
    encode: encode,
    // Decode Variables
    key1Decode: key1Decode,
    key2Decode: key2Decode,
    decodeError: decodeError,
    decodedText: decodedText,
    plainTextDecode: plainTextDecode,
    decode: decode
}
