#include "safe_input.h"

void read_line(char *buffer, size_t size)
{
    if (fgets(buffer, size, stdin))
    {
        size_t len = strcspn(buffer, "\n");
        buffer[len] = '\0';
    }
}

int read_int(void)
{
    char buffer[64];
    read_line(buffer, sizeof(buffer));
    return atoi(buffer);
}

float read_float(void)
{
    char buffer[64];
    read_line(buffer, sizeof(buffer));
    return atof(buffer);
}
