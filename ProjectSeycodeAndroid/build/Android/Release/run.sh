#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "SeyCode"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "SeyCode.apk" \
    --package=com.apps.seycode \
    --activity=SeyCode \
    --sym-dir="SeyCode/app/src/main/.uno" \
    "$@"
