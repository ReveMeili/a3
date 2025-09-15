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
    std::cout<< "Array printed:\n[";
    for (int i= 0; i<size; i++ ){
        std::cout<<array[i]; 
        if (i<size-1) std::cout<< ", ";
    }
    std::cout<< "]\n";
}

template <typename T>
void reverse_array(T array[], int size){
    T low,high;
    for (int i= 0; i< (size/2); i++ ){
        low=array[i];
        high=array[size-1-i];

        array[i]=high;
        array[size-1-i]=low;

    }
}

#endif