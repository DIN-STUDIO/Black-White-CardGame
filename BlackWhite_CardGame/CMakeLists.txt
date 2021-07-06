# cmake_minimum_required(VERSION <specify CMake version here>)
project(BlackWhite_CardGame)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

add_executable(BlackWhite_CardGame main.cpp Card/Card.cpp Card/Card.h Player/Player.cpp Player/Player.h Game/Game.cpp Game/Game.h)