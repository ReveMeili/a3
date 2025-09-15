//include/reverse.hpp
//declare generic versions so main.cpp work as expected

#ifndef REVERSE_H
#define REVERSE_H
#pragma once

#include <iostream>

template <typename T>   
    void print_array (const T array[], int size);//why const?

template <typename T>       
    void reverse_array (T array[], int size);

#include "reverse.ipp"
#endif