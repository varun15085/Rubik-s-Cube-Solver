cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp Generic_rubics_cube_solver.cpp Generic_rubics_cube_solver.h RubiksCube3d.cpp BFSSolver.h RubicksCube1d.cpp DFSSolver.h)
