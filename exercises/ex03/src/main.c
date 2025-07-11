#include <stdio.h>
#include <string.h>
int main(void)
{
    // int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    char *names[] = {"alice", "bob", "reza", "david"};
    int size = sizeof(names) / sizeof(names[0]);


    char target[100];
    printf("Enter a name: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = 0; // Remove newline character if present
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(names[i], target)==0)
        // if (names[i] == target) // This will not work as expected, use strcmp for string comparison
        // if (strncmp(names[i], target, sizeof(target)) == 0) // This is also incorrect for string comparison
                {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Found!\n");
    else
        printf("Not found.\n");

    return 0;
}
// This program prompts the user to enter a number and checks if that number is present in a predefined array of integers.
// It uses a simple linear search algorithm to find the number. If the number is found, it prints "Found!", otherwise it prints "Not found.".
// The program demonstrates basic input handling and array traversal in C.
// The array contains a mix of numbers, and the user can test the program with different inputs to see if it correctly identifies whether the number is present in the array.
// The program is straightforward and serves as a good exercise for understanding arrays and loops in C.
// The code is structured to be simple and easy to understand, making it suitable for beginners learning C programming.
// The program can be compiled and run in a C environment, and it will prompt the user for input, making it interactive.
// The program can be extended or modified to include more complex data structures or search algorithms as the user becomes more comfortable with C programming.
// The program is a good starting point for learning about arrays, loops, and user input in C.

