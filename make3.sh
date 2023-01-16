#!/bin/bash

if [[ -f "module/sentpacket.cpp" ]]
then
    echo "OK!"
    exit
fi
echo "NO"
echo "File not found! exit...."
killall make