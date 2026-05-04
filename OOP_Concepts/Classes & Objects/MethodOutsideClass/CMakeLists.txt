cmake_minimum_required(VERSION 3.16)

project(MethodOutsideClass LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MethodOutsideClass main.cpp)

include(GNUInstallDirs)
install(TARGETS MethodOutsideClass
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
