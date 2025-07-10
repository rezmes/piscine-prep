// #include <stdio.h>

// int main(void)
// {
//     printf("Hello, Piscine!\n");
//     return 0;
// }
#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", name);  // reads up to 99 non-space characters

    printf("Hello, %s! Welcome to Piscine.\n", name);

    return 0;
}
