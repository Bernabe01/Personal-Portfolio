cmake_minimum_required(VERSION 4.0)
project(cspc_440_project_The_Midterm_Alternative_Project_RISC_V_Numeric_Ops_Simulator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cspc_440_project_The_Midterm_Alternative_Project_RISC_V_Numeric_Ops_Simulator
        twosComplement.cpp
        twosComplement.h
        tester_1.cpp)
