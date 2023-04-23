#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    // Pointers
    // it's just an anddress (integer that holds an address)

    // nullptr == Null pointer
    // void* ptr = nullptr;

    int var = 8; // normal integer that has a memory address
    int* ptr = &var; // has the memory address of var

    LOG(var); // output: 8

    // dereference the pointer
    *ptr = 10;

    LOG(var); // output: 10


    // Allocate some memory with a certain size
    // char -> 1 byte
    char* buffer = new char[8]; // allocate 8 bytes of memory
    memset(buffer, 0, 8); // pointer, value, size (sets the value 0 to all 8 bytes of memory)

    char** ptr = &buffer; // double pointer (points to a pointer) -> getting address of buffer (pointer with de buffer address stored)
    
    delete[] buffer;

    std::cin.get();
}