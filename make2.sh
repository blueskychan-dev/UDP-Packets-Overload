#!/bin/bash

if [[ -f "module/linux.cpp" ]]
then
    echo "OK!"
    exit
fi
echo "NO"
echo "File not found! exit...."
killall make