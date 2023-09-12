cmake_minimum_required(VERSION 3.14)

project(Core_Qt_Modules LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Network Sql)

add_executable(Core_Qt_Modules
  main.cpp
)
target_link_libraries(Core_Qt_Modules Qt6::Core Qt6::Network Qt6::Sql)

install(TARGETS Core_Qt_Modules
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
