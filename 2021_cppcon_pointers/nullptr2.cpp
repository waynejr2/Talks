// @file nullptr2.cpp
// g++ -std=c++17 nullptr2.cpp -o prog
#include <iostream>

int main(){
    // Initialize px
    int* px= nullptr; // 'nullptr' is the modern C++ way
                      // Note: We could also assign to
                      //        NULL or 0, but that is more
                      //        of a C-style.
    if(nullptr != px){
        std::cout << "What happens here? " << *px << std::endl;
    }      
        
    return 0;
}


