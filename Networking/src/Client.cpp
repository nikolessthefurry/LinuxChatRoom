////////////////////////////////////////////////////////////////////////////////
/// @file Client.cpp
/// @author nikolessthefurry (nikolessthefurry@gmail.com)
/// @brief 
/// @version 0.1
/// @date 2025-12-10
/// 
/// @copyright Copyright (c) 2025
/// 
////////////////////////////////////////////////////////////////////////////////

#include "Client.h"

namespace Networking
{
  ////////////////////////////////////////////////////////////////////////////////
  Client::Client(sockaddr_in &server_to_connect_to) : m_socket()
  {
    connect_to_server(server_to_connect_to);
  }

  ////////////////////////////////////////////////////////////////////////////////
  Client::~Client()
  {
  }

  ////////////////////////////////////////////////////////////////////////////////
  bool Client::connect_to_server(sockaddr_in &address)
  {
    /// Establish default return value.
    bool rval = true;

    /// Attempt to connect to the socket. If it fails...
    if (connect(m_socket.get_fd(), reinterpret_cast<sockaddr *>(&address), sizeof(address)) < 0)
    {
      /// ... set rval to false.
      rval = false;
    }

    /// Return rval.
    return rval;
  }
}