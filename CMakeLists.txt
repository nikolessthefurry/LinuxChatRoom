cmake_minimum_required(VERSION 3.28)

project(LinuxChatRoom)

set(ClientTarget "ClientExecutable")
set(ServerTarget "ServerExecutable")

# find packages


# # includes
# include_directories(
#   include
# )

add_subdirectory(Networking/build)

# find header & source
# file(GLOB_RECURSE HEADER "include/*.h")
# file(GLOB_RECURSE SOURCE "src/*.cpp")

add_executable(${ClientTarget}
ClientExecutable.cpp
)

add_executable(${ServerTarget}
ServerExecutable.cpp
)


target_link_libraries(${ClientTarget}
  NetworkLibrary
)

target_link_libraries(${ServerTarget}
  NetworkLibrary
)

# install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

# source_group("Header include" FILES ${HEADER})
# source_group("Source src"     FILES ${SOURCE})

# link libraries
#target_link_libraries(${PROJECT_NAME} ${SOME_LIB})