#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

// #include as little as possible


// Avoid Defining Macros, Especially in Headers

// Class name should use PascalCase
class ExampleClass
{
public:
    ExampleClass();

    // Declare All Public Destructors as Virtual
    virtual ~ExampleClass();

    // Class member and local variable names should use camelCase
    void myMethod(int parameterValue);

    int getValue() const;

    // type names should use PascalCase
    typedef unsigned char  Example1ByteType;
    typedef unsigned short Example2ByteType;

private:
    // Class member names may be preceded by an m_ prefix to indicate that they are a member of a class.
    // This is useful to differentiate between the use of local and member variables in methods.
    int m_memberVariable;

   // Values within enumerations should use all capital letters. 
   // For compound names, an underscore should be used between each word or abbreviation
    enum ExampleEnum
    {
        FIRST_VALUE,
        SECOND_VALUE,
        THIRD_VALUE
    };

   // static variable name should use all capital letters. 
   // For compound names, an underscore should be used between each word or abbreviation
    static const int EXAMPLE_CONSTANT = 42;
    static const int ANOTHER_CONSTANT = 23;

};

#endif
