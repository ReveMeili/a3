//include/reverse.ipp
//define generic version so main.cpp work as expected

/*// myclass.ipp
template <typename T>
void MyClass::doSomething() {
    // Implementation
}*/
#ifndef REVERSE_IPP
#define REVERSE_IPP
#include <iostream>

template <typename T>
void print_array(const T array[], int size){
    std::cout<< "[";//open brackets
    for (int i= 0; i<size; i++ ){//goes through each value in the array to print
        std::cout<<array[i]; 
        if (i<size-1) std::cout<< ", "; //doesnt print extra , for the last value
    }
    std::cout<< "]";//closes brackets
}

template <typename T>
void reverse_array(T array[], int size){
    T low,high;//takes the opposite values like last and first, 2nd to last and 2nd etc.
    for (int i= 0; i< (size/2); i++ ){//goes through half the size of the array since we r taking both sides
        low=array[i];//stores lower end
        high=array[size-1-i];//stores higher array element

        //switches them to reverse the array
        array[i]=high;
        array[size-1-i]=low;

    }
}

#endif