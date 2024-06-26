//  C Style Guide

//  1. Names

// Define, macro and const
#define SCREAMING_SNAKE_DEFINE
#define SCREAMING_SNAKE(MACRO)
const char SCREAMING_SNAKE_CONST;

// Function
void lower_snake_function(U8 lowerCamelParam) {
    //Local variable
    F32 lowerCamelLocalVariable;
}

// Type
typedef struct {
    U64 lowerCamelVariable;
} UpperCamelType;

// Interface and function pointer
typedef struct {
    void (*function_pointer_func)() function_pointer_variable;
} IUpperCamelInterfaceType;


// 2. Hidden type (data encapsulation)

// External header file:
typedef struct HiddenType *HiddenType;

// Internal header file / source file:
struct HiddenType {
    U8  some;
    F32 *internalFields;
};

