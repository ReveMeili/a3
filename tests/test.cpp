//test.cpp
// you may write array comparison function to compare true/actual and expected use in test cases to see if the array is in reverse or not.

//test case for print_array() is not required 
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "reverse.hpp"
//#include "reverse.ipp"
#include <cstring>
#include <cassert>
#include <iostream>

TEST_CASE("testing int", "[int test]"){
int ai[]{1, 2, 3, 4};
    int ni = sizeof(ai) / sizeof(ai[0]); // compute size of array
    std::cout << "ai: "; 
    print_array<int>(ai, ni);
    reverse_array<int>(ai, ni);
    std::cout << "ai: "; 
    print_array<int>(ai, ni);

   
    int ai_expected[]{4, 3, 2, 1};
    for (int i = 0; i < 4; i++) assert(ai[i] == ai_expected[i]);
}

TEST_CASE("testing double", "[double test]"){
    double ad[] = {1.5, 2.5, 3.5, 4.5};
    int nd = sizeof(ad) / sizeof(ad[0]); // compute size of array
    std::cout << "ad: "; 
    print_array<double>(ad, nd);
    reverse_array<double>(ad, nd); 
    std::cout << "ad: "; 
    print_array<double>(ad, nd);

    double ad_expected[]{4.5, 3.5, 2.5, 1.5};
    for (int i = 0; i < 4; i++) assert(ad[i] == ad_expected[i]);
}

TEST_CASE("testing char", "[char test]"){
    char letters[] = {'E','C','E','3','5','1','4'};
    int nc = sizeof(letters) / sizeof(letters[0]); // compute size of array
    std::cout << "letters: "; 
    print_array<char>(letters, nc);
    reverse_array<char>(letters, nc);
    std::cout << "letters: "; 
    print_array<char>(letters, nc);

    char letters_expected[]{'4','1','5','3','E','C','E'};
    for (int i = 0; i < 7; i++) assert(letters[i] == letters_expected[i]);
}

TEST_CASE("testing c-string", "[c-string test]"){
    char word[] = "meow";
    std::cout << "cstr: " << word << "\n";
    int nw = std::strlen(word); // compute size of string (exclude '\0')
    reverse_array<char>(word, nw);
    std::cout << "cstr: " << word << "\n";

    assert(std::string(word) == "woem");
}

TEST_CASE("testing odd", "[odd test]"){

}
