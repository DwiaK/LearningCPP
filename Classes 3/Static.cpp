
// Kinda like "private" variable in a class (Linker won't see it in a global scope)
// it works when you put it into a header file and import to 2 different classes, but I can't define two variables with the
// same name.

static int s_Variable = 5;

void Function()
{

}