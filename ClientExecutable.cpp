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

#include "Client.h"

#include <iostream>
#include <cstdint>
#include <memory>

////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
  std::cout << "Please input an IP to connect to [IPv4]: ";

  std::string connection_ip = {};

  std::cin >> connection_ip;

  sockaddr_in server_to_connect_to = {};

  server_to_connect_to.sin_port = htons(Networking::DEFAULT_SERVER_PORT_TO_USE);

  server_to_connect_to.sin_family = AF_INET;

  if (1 != inet_pton(AF_INET, connection_ip.c_str(), &server_to_connect_to.sin_addr))
  {
    /// Error.
    std::cout << "Error! Incorrect input for the server to connect to." << std::endl;
    return 1;
  }

  std::cout << "Will attempt to connect to the IP [" << connection_ip << "] as a client" << std::endl;

  std::unique_ptr<Networking::Client> client_ptr = std::make_unique<Networking::Client>(server_to_connect_to);

  return 0;
}
