#include <stdio.h>
#include "safe_input.h"

int main(void)
{
    char name[100];

    printf("Enter your full name: ");
    read_line(name, sizeof(name));

    printf("Hi %s, how old are you? ", name);
    int age = read_int();

    printf("Great, %s. You are %d years old.\n", name, age);
    return 0;
}
// This code uses the safe_input.h header to read a full name and age from the user.
// It includes the necessary functions to safely read input, avoiding buffer overflows.
// The program prompts the user for their full name and age, then prints a greeting with the
// provided information. The read_line function reads a line of input safely, and read_int
// reads an integer input, ensuring that the input is handled correctly without risking
// buffer overflows or invalid input formats.