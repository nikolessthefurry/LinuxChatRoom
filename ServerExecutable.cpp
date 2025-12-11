////////////////////////////////////////////////////////////////////////////////
/// @file ClientExecutable.cpp
/// @author nikolessthefurry (nikolessthefurry@gmail.com)
/// @brief 
/// @version 0.1
/// @date 2025-12-10
/// 
/// @copyright Copyright (c) 2025
/// 
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdint>

////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
  std::cout << "Please input an IP to host a server on [IPv4]: ";

  std::string connection_ip = {};

  std::cin >> connection_ip;

  std::cout << "Hosting a server on the IP [" << connection_ip << "]" << std::endl;
}