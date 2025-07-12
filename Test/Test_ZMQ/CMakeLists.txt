cmake_minimum_required(VERSION 3.10)
project(ZeroMQApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(ZeroMQ CONFIG REQUIRED)
find_package(cppzmq CONFIG REQUIRED)

add_executable(server server.cpp)
add_executable(client client.cpp)

target_link_libraries(ZeroMQApp PRIVATE ZeroMQ cppzmq)