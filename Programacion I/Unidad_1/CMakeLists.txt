cmake_minimum_required(VERSION 3.30)
project(Unidad_1)

set(CMAKE_CXX_STANDARD 20)s

foreach(i RANGE 1 16)
    add_executable(Ejercicio_${i} "Ejercicio ${i}/Ejercicio_${i}.cpp")
endforeach()