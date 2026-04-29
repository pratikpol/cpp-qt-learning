cmake_minimum_required(VERSION 3.16)

project(Add_Two_Numbers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Add_Two_Numbers main.cpp)

include(GNUInstallDirs)
install(TARGETS Add_Two_Numbers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
