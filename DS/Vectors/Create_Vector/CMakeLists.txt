cmake_minimum_required(VERSION 3.16)

project(Create_Vector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Create_Vector main.cpp)

include(GNUInstallDirs)
install(TARGETS Create_Vector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
