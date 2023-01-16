#!/bin/bash

arch=$(uname -m)
if [[ $arch == x86_64* ]]; then
    exit
   elif [[ $arch == * ]]; then
   echo "YOUR CPU IS NOT x86_64!"
    killall make
    exit
fi
