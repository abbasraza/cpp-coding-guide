// #include as little as possible

#include "ExampleClass.h"

static const int EXAMPLE_CONSTANT = 42;

// Avoid Defining Macros, Especially in Headers
// macro name should use all capital letters. 
// For compound names, an underscore should be used between each word or abbreviation
#define THIS_IS_AN_EXAMPLE_MACRO 1001


ExampleClass::ExampleClass()
{
}

ExampleClass::~ExampleClass()
{
}

void ExampleClass::myMethod(int parameterValue)
{

    // The opening parenthesis following a conditional statement should be preceded by one space.
    // No spaces should be used following the opening parenthesis or preceding the closing parenthesis.
    if (0 < parameterValue)
    {
        m_memberVariable = parameterValue;
    }
}

int ExampleClass::getValue() const
{ // Brace placement should follow the Allman style

    return m_memberVariable;
}
