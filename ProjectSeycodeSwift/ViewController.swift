//
//  ViewController.swift
//  SeyCodeAPP
//
//  Created by Yannick Retlaw on 30.04.16.
//  Copyright (c) 2016 Yannick Retlaw. All rights reserved.
//
// Sorry for my bad comment and my terrible variables names..

import UIKit
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBOutlet var encodeDecode: UIView!
    @IBOutlet weak var key1: UITextField!
    @IBOutlet weak var key2: UITextField!
    @IBOutlet weak var test: UITextView!
    @IBOutlet weak var verText: UITextView!
    @IBOutlet weak var statusBar: UILabel!
    @IBOutlet weak var codeButton: UIButton!
    
    var firstEncode = true
    @IBAction func firstEncodeSwitch(sender: AnyObject) {
        
        if firstEncode == true{
            firstEncode = false
        }else{
            firstEncode = true
        }
    }
    
    // Ascii Table to get ascii values
    let charInAscii = ["!" : 1, "\"" : 2, "#" : 3, "$" : 4, "~" : 5, "%" : 6, "&" : 7, "'" : 8, "(" : 9, ")" : 10, "*" : 11, "+" : 12, "," : 13, "-" : 14, "." : 15, "/" : 16, "0" : 17, "1" : 18, "2" : 19, "3" : 20, "4" : 21, "5" : 22, "6" : 23, "7" : 24, "8" : 25, "9" : 26, ":" : 27, ";" : 28, "<" : 29, "=" : 30, ">" : 31, "?" : 32, "@" : 33, "A" : 34, "B" : 35, "C" : 36, "D" : 37, "E" : 38, "F" : 39, "G" : 40, "H" : 41, "I" : 42, "J" : 43, "K" : 44, "L" : 45, "M" : 46, "N" : 47, "O" : 48, "P" : 49, "Q" : 50, "R" : 51, "S" : 52, "T" : 53, "U" : 54, "V" : 55, "W" : 56 ,"X" : 57, "Y" : 58, "Z" : 59, "[" : 60, "\\" : 61, "]" : 62, "^" : 63, "_" : 64, "`" : 65, "a" : 66, "b" : 67, "c" : 68, "d" : 69, "e" : 70, "f" : 71, "g" : 72, "h" : 73, "i" : 74, "j" : 75, "k" : 76, "l" : 77, "m" : 78, "n" : 79, "o" : 80, "p" : 81, "q" : 82, "r" : 83, "s" : 84, "t" : 85, "u" : 86, "v" : 87, "w" : 88, "x" : 89, "y" : 90, "z" : 91, "{" : 92, "|" : 93, "}" : 94, " ": 95]//, "ä": 96, "ö": 97, "ü": 98, "ß": 99, "Ä": 100, "Ö": 101, "Ü": 95]
    
    let asciiInChar = [1 : "!", 2 : "\"", 3 : "#", 4 : "$", 5 : "~", 6 : "%", 7 : "&", 8 : "'", 9 : "(", 10 : ")", 11 : "*", 12 : "+", 13 : ",", 14 : "-", 15 : ".", 16 : "/", 17 : "0", 18 : "1", 19 : "2", 20 : "3", 21 : "4", 22 : "5", 23 : "6", 24 : "7", 25 : "8", 26 : "9", 27 : ":", 28 : ";", 29 : "<", 30 : "=", 31 : ">", 32 : "?", 33 : "@", 34 : "A", 35 : "B", 36 : "C", 37 : "D", 38 : "E", 39 : "F", 40 : "G", 41 : "H", 42 : "I", 43 : "J", 44 : "K", 45 : "L", 46 : "M", 47 : "N", 48 : "O", 49 : "P", 50 : "Q", 51 : "R", 52 : "S", 53 : "T", 54 : "U", 55 : "V", 56 : "W", 57 : "X" ,58 : "Y", 59 : "Z", 60 : "[", 61 : "\\", 62 : "]", 63 : "^", 64 : "_", 65 : "`", 66 : "a", 67 : "b", 68 : "c", 69 : "d", 70 : "e", 71 : "f", 72 : "g", 73 : "h", 74 : "i", 75 : "j", 76 : "k", 77 : "l", 78 : "m", 79 : "n", 80 : "o", 81 : "p", 82 : "q", 83 : "r", 84 : "s", 85 : "t", 86 : "u", 87 : "v", 88 : "w", 89 : "x", 90 : "y", 91 : "z", 92 : "{", 93 : "|", 94 : "}", 95 : " "]//, 96 : "ä", 97 : "ö", 98 : "ü", 99 : "ß", 100 : "Ä", 101 : "Ö", 95 : "Ü"]
    
    //var for tabs
    var iforswitch = true
    
    //fuctions
    
    func getAsciifrom(char:String) ->Int{
        print("Eingegebener Buchstabe \(char)")
        
        let value = charInAscii[char]
        if value == nil {
            
         statusBar.text = "String \(char) cannot encode!"
        return 0
        }
        print("ascii wert ist \(value)")
        return value!
    }
    
    func getCharfrom(ascii:Int) ->String{
        print("Eingegebener Ascii Wert ist \(ascii)")
        
        let zeich = asciiInChar[ascii]
        if zeich == nil{
            statusBar.text = "Cannot decode!"
        }
        print("Davon Buchstabe ist \(zeich)")
        return zeich!
    }
    
    
    
        func digest(string: String) -> String? {
            
            guard let data = string.dataUsingEncoding(NSUTF8StringEncoding) else { return nil }
            
            var digest = [UInt8](count: Int(CC_MD5_DIGEST_LENGTH), repeatedValue: 0)
            
            CC_MD5(data.bytes, CC_LONG(data.length), &digest)
            
            return (0..<Int(CC_MD5_DIGEST_LENGTH)).reduce("") { $0 + String(format: "%02x", digest[$1]) }
        }
    
    
    //Button
    @IBAction func codeButton(sender: AnyObject) {
        
        //Check whether something is in the text fields
        if key1.text == "" || key2.text == "" || test.text == "" {
            statusBar.text = "Please enter Keys and Text!"
        }else{
        
        
        //get values from textfields
        let key1text = key1.text!.characters.map { String($0) }
        let testtext = test.text!.characters.map { String($0) }
        var key2text = key2.text!.characters.map { String($0) }
        
        //Check how many chars
        var counter = 0
        for _ in testtext{
                counter += 1
                print("Counter für text: \(counter)")
            }
            
        //Check how many chars in key1
        var counterkey1 = 0
        for _ in key1text{
                counterkey1 += 1
                print("Counter für key1: \(counterkey1)")
            }
            
        //Check how many chars in key2
        var counterkey2 = 0
        for _ in key2text{
                counterkey2 += 1
                print("Counter für key2: \(counterkey2)")

            }
            
            
        
        var fertigerTextString = ""
        var key1for = 0
        var key2for = 0
        var kennung1 = true
        var kennung2 = true
            
            
        //Check tabbar value
        if iforswitch == true{
            
            //If Switch activated hash with md5
            if firstEncode == false {
                let md5text = digest(key2.text!)
                key2.text = md5text
                key2text = md5text!.characters.map { String($0) }
                
                counterkey2 = 0
                for _ in key2text{
                    counterkey2 += 1
                    print("Counter für key2 nach md5: \(counterkey2)")
                    print(md5text)
                    
                }
            
            
            }
            
            print("encrypt")
            print(" ")
            //Loop for encode
            for imdex in 0 ..< counter {
                print("imdex: \(imdex)")
        
                //kennung
                kennung1 = true
                kennung2 = true
                if key2for == counterkey2 {
                    print("zweiter key überschreitet max")
                    key2for = 0
                    kennung2 = false
                }
                
                if key1for == counterkey1 {
                    print("erster key überschreitet max")
                    key1for = 0
                    kennung1 = false
                }
                
                //Get chars from Arrows
                let firt = "\(testtext[imdex])"
                let key1firt = "\(key1text[key1for])"
                let key2firt = "\(key2text[key2for])"
                
                if kennung1 == true{
                    key1for += 1
                }
                
                if kennung2 == true{
                    key2for += 1
                }
            
            
            
            
        
        
                //get asciivalue of chars
                let vor = getAsciifrom(firt)
                let key1vor = getAsciifrom(key1firt)
                let key2vor = getAsciifrom(key2firt)
                
                
                
                print("Buchstabe von Text: \(firt) an ist Stelle \(imdex + 1). Davon Ascii wert ist \(vor)")
                print("Buchstabe von Key1: \(key1firt) an ist Stelle \(imdex + 1). Davon Ascii wert ist \(key1vor)")
                print("Buchstabe von Text: \(key2firt) an ist Stelle \(imdex + 1). Davon Ascii wert ist \(key2vor)")
                
                
                if key1vor == 0 || key2vor == 0 || vor == 0 {
                    
                    verText.text = nil
                }else{
                    
                    var encodeAsciivalue = key1vor + key2vor + vor
                    print("(Encode)vor der if abfrage \(encodeAsciivalue)")
            
                    //Prüfen ob es Overloads gab.
                    if encodeAsciivalue > 95 && encodeAsciivalue <= 190{
                        encodeAsciivalue = encodeAsciivalue - 95
                        print("erster fall")
                    }else if encodeAsciivalue > 190 {
                        encodeAsciivalue = encodeAsciivalue - 190
                        print("2. ter fall")
                    }
                    
                    print("(Encode)nach der if abfrage \(encodeAsciivalue)")
                    
                    let vertext = getCharfrom(encodeAsciivalue)
                    
                    print("Zeichen \(vertext) kamm beim durchlauf \(imdex) raus")
                    fertigerTextString = fertigerTextString + vertext
                    
                    
                    verText.text = fertigerTextString
                }
            }
            print("Fertig verschlüsselter Text ist \(fertigerTextString)")
        }else{
                
                print("decrypt")
                print(" ")
                //decode
                for imdex in 0 ..< counter {
                    
                    kennung1 = true
                    kennung2 = true
                    
                    if key2for == counterkey2 {
                        print("zweiter key überschreitet max")
                        key2for = 0
                        kennung2 = false
                    }
                    
                    
                    if key1for == counterkey1 {
                        print("erster key überschreitet max")
                        key1for = 0
                        kennung1 = false
                    }
                    
                    //erstes zeichen
                    let firt = "\(testtext[imdex])"
                    let key1firt = "\(key1text[key1for])"
                    let key2firt = "\(key2text[key2for])"
                    print("key 1 ist an der stelle \(key1for) und  key 2 an \(key2for) und text an \(imdex)")
                    
                    
                    if kennung1 == true{
                        key1for += 1
                                            }
                    if kennung2 == true {
                        key2for += 1
                    }
                    
                    
        
                    let key1vor = getAsciifrom(key1firt)
                    let key2vor = getAsciifrom(key2firt)
                    let vor = getAsciifrom(firt)
                    
                    
                    
                    if key1vor == 0 || key2vor == 0 || vor == 0 {
                        verText.text = nil
                    }else{
                        
                        
                        
                        print("vor der if abfrage \(vor)")
                        var decodedAsciiValue = vor - key1vor - key2vor
                    
                        if decodedAsciiValue <= -95 {
                            decodedAsciiValue += 190
                        }
                        
                        if decodedAsciiValue <= 0 {
                            decodedAsciiValue += 95
                        }
                        
                        
                        
                        let vertext = getCharfrom(decodedAsciiValue)
                        print(vertext)
                        fertigerTextString = fertigerTextString + vertext
                        
                        //Put encrypted in textField
                        verText.text = fertigerTextString
                
                
                        
                
                
                    }
            }
        }
        }
        
    }
    //decode encode switch
    
    @IBAction func encodeDecode(sender: AnyObject) {
        
        if iforswitch == true{
            codeButton.setTitle("decode", forState: .Normal)
            statusBar.text = "decode"
            iforswitch = false
        }else{
            codeButton.setTitle("encode", forState: .Normal)
            statusBar.text = "encode"
            iforswitch = true
        }
        
        
   }
        
       
   
    
    }
    




