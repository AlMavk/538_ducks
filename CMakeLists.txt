
cmake_minimum_required(VERSION 3.10)

project(Blockchain)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} account.c digest.c main.c sign.c utils.c)