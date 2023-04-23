#include <iostream>
#include <string>

// Ternary Operators

static int s_Level = 1; // define s_ for Static classes (convention)
static int s_Speed = 2;

int main()
{
    // This
    if (s_Level > 5)
        s_Speed = 10;
    else
        s_Speed = 5;

    // And this are the same
    s_Speed = s_Level > 5 ? 10 : 5;
    // Explanation: variable = if (variable > 5) then 10 : else 5
                 // variable = condition ? ifTrue : ifFalse

    /////////////

    std::string rank = s_Level > 10 ? "Master" : "Beginner";

    std::string otherRank;

    if (s_Level > 10)
        otherRank = "Master";
    else
        otherRank = "Beginner";

    /////////////

    // you can put more conditions too
    // if it is getting harder to read, prefer to use if/else statements
    s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5; // if level is 15 (result: 15), if level is 8 (result: 10), if level is 2 (result: 5)
    s_Speed = s_Level > 5 && s_Level > 10 ? 15 : 10; // using AND operator

    return 0;
}
