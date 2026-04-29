cmake_minimum_required(VERSION 3.16)

project(Even-or-odd LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Even-or-odd main.cpp)

include(GNUInstallDirs)
install(TARGETS Even-or-odd
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
