#include <iostream>
#include <string>

void PrintString(const std::string& eString)
{
    std::cout << eString << std::endl;
}

int main()
{
    const char* name = "DwiaK";

    std::cout << name << std::endl;

    //name[2] = 'a';

    /////

    char name2[6] = { 'D', 'w', 'i', 'a', 'K', 0 };
    char name2Same[6] = { 'D', 'w', 'i', 'a', 'K', '\0' };

    std::cout << name2 << std::endl;
    std::cout << name2Same << std::endl;


    //////////
    
    std::string myName = "DwiaK";
    char* s;
    // can use c instructions
    // strlen(s), strcpy(s) -> string lenght, string copy (with pointer)
    myName.size();


    std::cout << myName << std::endl;

    // Concat
    std::string nameConcat = "DwiaK"; // + "testing";
    nameConcat += "testing";

    std::cout << nameConcat << std::endl;

    // Finding text in a string
    std::string findingText = "Hello World!";
    bool contains = findingText.find("World") != std::string::npos; // position of world

    return 0;
}