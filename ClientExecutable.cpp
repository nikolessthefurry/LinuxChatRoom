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
  std::cout << "Please input an IP to connect to [IPv4]: ";

  std::string connection_ip = {};

  std::cin >> connection_ip;

  std::cout << "Will attempt to connect to the IP [" << connection_ip << "] as a client" << std::endl;
}