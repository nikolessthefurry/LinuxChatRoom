cmake_minimum_required(VERSION 3.28)

set(NetworkLibrary "NetworkLibrary")

set(SRC ../src)
set(INC ../include)

# find packages

# find header & source
# file(GLOB_RECURSE HEADER "include/*.h")
# file(GLOB_RECURSE SOURCE "src/*.cpp")

add_library(${NetworkLibrary} STATIC
${SRC}/Client.cpp
${SRC}/Socket.cpp
)

# includes
target_include_directories(${NetworkLibrary} PUBLIC
  ${INC}
)
# install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

# source_group("Header include" FILES ${HEADER})
# source_group("Source src"     FILES ${SOURCE})

# link libraries
#target_link_libraries(${PROJECT_NAME} ${SOME_LIB})