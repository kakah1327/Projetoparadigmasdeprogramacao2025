cmake_minimum_required(VERSION 3.30)
project(Ap1_Part2)

set(CMAKE_CXX_STANDARD 20)


# Incluir o diretório "include" para que os cabeçalhos sejam encontrados
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(Ap1_Part2 main.cpp
        include/trigonometria.hpp
        include/vetores.hpp
        include/matrizes.hpp
        src/trigonometria.cpp
        src/vetores.cpp
        src/matrizes.cpp
)
