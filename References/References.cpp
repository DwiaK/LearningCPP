#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int value)
{
    value++;
}

void pointerIncrement(int* value)
{
    // increment the address
    (*value)++; // dereference the pointer and then increment the pointer dereferenced (*value) <- dereference
}

void referenceIncrement(int& value)
{
    value++;
}

int main()
{
    // References

    int a = 5;
    //int& ref = a;
    
    //ref = 2; // if print A it will be 2 because the reference of A changed
    
    //LOG(ref);

    // Testing
    Increment(a); // it is just copying A to increment and doing nothing.
    LOG(a);

    // If I pass a memory address of 'A' variable located in main function,
    // I can affect the variable by referrence or pointer, and not making a copy of it in the function

    // by pointer
    pointerIncrement(&a); // instead of passing just the A variable, I pass the reference of A here
    LOG(a);

    // by Reference
    referenceIncrement(a);
    LOG(a);

    std::cin.get();
}