#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
    using namespace std::string_literals;

    std::string name0 = "DwiaK"s + " hello!";

    // multiline string
    const char* example = R"(Line 1
Line 2
Line 3
Line 4)"; 

    // or
    const char* ex = "Line 1\n"
        "Line 2\n"
        "Line 3\n";

    const char* name = u8"DwiaK";
    const wchar_t* name2 = L"DwiaK";
    
    const char16_t* name3 = u"DwiaK";
    const char32_t* name5 = U"DwiaK";

    return 0;
}