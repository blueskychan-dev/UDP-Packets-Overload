#include <stdio.h>
#include </usr/include/pstreams/pstream.h>
#include <linux/version.h>
#include <sys/utsname.h>
#include <iostream>
// Cross Build is shit, that why pstreams path is full //

/*
 Checking Linux Kernel information
 Thanks code from ryanwoodsmall
 Modify by: randomladyboyguy (me)
 */
class linux_kernel{
  public:
  void kernelversion(){
 int maj = LINUX_VERSION_CODE >> 16;
  int min = ( LINUX_VERSION_CODE - ( maj << 16 ) ) >> 8;
  int pat = LINUX_VERSION_CODE - ( maj << 16 ) - ( min << 8 );
  struct utsname unamedata;


  uname(&unamedata);
  printf("Kernel Version: %s\n", unamedata.release);

  }
  void kernelarch(){
    // Get data from uname for ez //
      redi::ipstream proc("uname -m", redi::pstreams::pstdout | redi::pstreams::pstderr);
  std::string line;
  // read child's stdout
  while (std::getline(proc.out(), line))
    std::cout << "Kernel Architecture: " << line << '\n';
  // if reading stdout stopped at EOF then reset the state:
  if (proc.eof() && proc.fail())
    proc.clear();
  // read child's stderr
  while (std::getline(proc.err(), line))
    std::cout << "Kernel Architecture: " << line << '\n';
  }
  void kernelos(){
    // Get data from uname for ez //
      redi::ipstream proc("uname -o", redi::pstreams::pstdout | redi::pstreams::pstderr);
  std::string line;
  // read child's stdout
  while (std::getline(proc.out(), line))
    std::cout << "Platform: " << line << '\n';
  // if reading stdout stopped at EOF then reset the state:
  if (proc.eof() && proc.fail())
    proc.clear();
  // read child's stderr
  while (std::getline(proc.err(), line))
    std::cout << "Platform: " << line << '\n';
  }
};
