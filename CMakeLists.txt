cmake_minimum_required(VERSION 3.28)

project(LinuxChatRoom)

set(ClientTarget "ClientExecutable")
set(ServerTarget "ServerExecutable")

# find packages


# includes
include_directories(".")

add_subdirectory(Networking/build)

add_executable(${ClientTarget}
ClientExecutable.cpp
)

add_executable(${ServerTarget}
ServerExecutable.cpp
)

target_link_libraries(${ClientTarget} PUBLIC
  NetworkLibrary
)

target_link_libraries(${ServerTarget} PUBLIC
  NetworkLibrary
)

# install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

# source_group("Header include" FILES ${HEADER})
# source_group("Source src"     FILES ${SOURCE})

# link libraries
#target_link_libraries(${PROJECT_NAME} ${SOME_LIB})