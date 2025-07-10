#include <stdio.h>
#include "safe_input.h"
int main(void)
{
    char name[100];

    printf("Enter your name: ");
    // scanf("%99s", name);  // reads up to 99 non-space characters
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s! Welcome to Piscine.\n", name);

    return 0;
}

