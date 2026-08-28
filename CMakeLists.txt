cmake_minimum_required(VERSION 3.27)
project(AP_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(test/include
        src/include)

add_executable(AP_2_test
        test/include/catch.hpp
        test/test.cpp
        test/testWarehouse.cpp
        src/employee.cpp
        src/pallet.cpp
        src/shelf.cpp
        src/warehouse.cpp
        src/include/IContainer.hpp)

add_executable(AP_2_main
        main.cpp
        src/employee.cpp
        src/pallet.cpp
        src/shelf.cpp
        src/warehouse.cpp
        src/include/IContainer.hpp)
