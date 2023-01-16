# UDP Packet Geneators
UDP Flood program for LINUX PLATFORM!
# Overview
![image](https://user-images.githubusercontent.com/108812246/212614784-cdba5fae-f1da-49fe-b9e6-7a94a2be7493.png)
![image](https://user-images.githubusercontent.com/108812246/212615094-57dc9b00-7f86-43ca-a4bf-d18601f32dbb.png)
# How did work?
This program will send too many packet to server.
# WARNING
This Program is for experiment or down own device I DIDN'T MAKE IT FOR ATTACK GAME SERVER!
# How to install
* For Linux and Android (Termux)
* INSTALL WITH WGET (x86_64, AARCH64, ARMv7l ONLY)
```
wget https://github.com/RandomLadyBoyGuy/UDP-Packets-Overload/releases/download/1.0.1/udpflood-$(uname -m)
chmod +x udpflood-$(uname -m)
./udpflood-$(uname -m)
```
* For Windows 10
Use WSL 1 or 2 (You can use linux install script)
* For Windows 8.1 and older
You can use virtual machine to run this like vmware, virtualbox and install linux on it!
# How to building (for custom build, other arch, other platform)
**Due** to we cannot prebuild for **all platform** or make prebuild **stable** and **support** for all device, we recommended **YOU** build with **YOURSELF!**
* requirements: ```glibc clang pstreams```
* for cross build, please install build toolchin for aarch64 too.
* Build with makefile
```
// cross build (x86_64 ONLY)
make cross
// build to own cpu arch
make ownarch
// clean build
make clean
// run program after build
make run
```
**NOTICE:** After Building your file will been located at `./out` and file format will be like `udpflood-(cpuarch)-(platform)` example: `udpflood-x86_64-GNU_Linux` or `udpflood-aarch64-Android`  
