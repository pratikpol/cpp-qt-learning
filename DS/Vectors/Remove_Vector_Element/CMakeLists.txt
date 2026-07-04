cmake_minimum_required(VERSION 3.16)

project(Remove_Vector_Element LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Remove_Vector_Element main.cpp)

include(GNUInstallDirs)
install(TARGETS Remove_Vector_Element
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
