cmake_minimum_required(VERSION 3.16)

project(Square-of-number LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Square-of-number main.cpp)

include(GNUInstallDirs)
install(TARGETS Square-of-number
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
