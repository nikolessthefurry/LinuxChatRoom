////////////////////////////////////////////////////////////////////////////////
/// @file Server.cpp
/// @author nikolessthefurry (nikolessthefurry@gmail.com)
/// @brief 
/// @version 0.1
/// @date 2025-12-10
/// 
/// @copyright Copyright (c) 2025
/// 
////////////////////////////////////////////////////////////////////////////////

#include "Server.h"
#include <cstdio>

namespace Networking
{
  ////////////////////////////////////////////////////////////////////////////////
  Server::Server() : m_socket()
  {
    /// Establish the server's address.
    m_server_address.sin_family = AF_INET;
    m_server_address.sin_addr.s_addr = htonl(INADDR_ANY);
    m_server_address.sin_port = htons(DEFAULT_SERVER_PORT_TO_USE);

    /// Bind the socket.
    bind(m_socket.get_fd(), reinterpret_cast<sockaddr *>(&m_server_address), sizeof(m_server_address));

    /// Listen for connections.
    listen(m_socket.get_fd(), MAX_NUMBER_OF_CLIENTS);
    
    /// Infinite loop - Intended to continue until notes to power off.
    /// @todo Implement power off.
    for (;;)
    {
      sockaddr_in client_addr = {};
      char buffer[168] = {};
      accept(m_socket.get_fd(), reinterpret_cast<sockaddr *>(&client_addr), reinterpret_cast<socklen_t *>(sizeof(client_addr)));
      printf("Connection from %s:%d!", inet_ntop(AF_INET, &client_addr.sin_addr, buffer, sizeof(buffer)), ntohs(client_addr.sin_port));
    }
  }

  ////////////////////////////////////////////////////////////////////////////////
  Server::~Server()
  {
  }
} 