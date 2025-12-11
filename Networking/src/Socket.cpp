////////////////////////////////////////////////////////////////////////////////
///
/// @file Socket.cpp
/// @author nikolessthefurry (nikolessthefurry@gmail.com)
/// @brief 
/// @version 0.1
/// @date 2025-12-10
/// 
/// @copyright Copyright (c) 2025
/// 
////////////////////////////////////////////////////////////////////////////////

#include "Socket.h"

namespace Networking
{
  Socket::Socket(const int32_t family, const int32_t type, const int32_t protocol) : 
    m_socket_fd(socket(family, type, protocol)), m_connected(false)
  {
  }

  Socket::~Socket()
  {
  }
  
} // namespace Socket
