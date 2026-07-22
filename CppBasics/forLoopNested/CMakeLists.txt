cmake_minimum_required(VERSION 3.16)

project(forLoopNested LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(forLoopNested main.cpp)

include(GNUInstallDirs)
install(TARGETS forLoopNested
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
