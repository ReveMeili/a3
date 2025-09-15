//include/reverse.hpp
//declare generic versions so main.cpp work as expected

#ifndef REVERSE_H
#define REVERSE_H
#pragma once

#include <iostream>
//prints the array
template <typename T>   
    void print_array (const T array[], int size);//const to not modify contents
//reverses the array
template <typename T>       
    void reverse_array (T array[], int size);

#include "reverse.ipp"
#endif