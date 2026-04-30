cmake_minimum_required(VERSION 3.16)

project(PositiveNegativeZero LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PositiveNegativeZero main.cpp)

include(GNUInstallDirs)
install(TARGETS PositiveNegativeZero
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
