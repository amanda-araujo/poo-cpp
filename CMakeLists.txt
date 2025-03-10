cmake_minimum_required(VERSION 3.16)
project(poo_c__)

set(CMAKE_CXX_STANDARD 20)

add_executable(poo_c__ main.cpp
        classes.cpp
        classes.h
        constructors.cpp
        animal-class.cpp
        encapsulation.cpp
        inheritance.cpp
        inheritance_multiple.cpp
        inheritance_diamond.cpp
        protected_specifier.cpp
        polymorphism.cpp)
add_executable(classes classes.cpp)
add_executable(constructors constructors.cpp)
add_executable(animal-class animal-class.cpp)
add_executable(encapsulation encapsulation.cpp)
add_executable(inheritance inheritance.cpp)
add_executable(inheritance_multiple inheritance_multiple.cpp)
add_executable(inheritance_diamond inheritance_diamond.cpp)
add_executable(protected_specifier protected_specifier.cpp)
add_executable(polymorphism polymorphism.cpp)
