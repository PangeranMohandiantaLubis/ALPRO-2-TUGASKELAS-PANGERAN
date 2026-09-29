#include <stdio.h>

int main(void)
{
    /* sizeof menghasilkan size_t; di-cast ke unsigned long agar %lu aman di semua compiler */
    printf("int    : %lu byte\n", (unsigned long)sizeof(int));
    printf("float  : %lu byte\n", (unsigned long)sizeof(float));
    printf("double : %lu byte\n", (unsigned long)sizeof(double));
    printf("char   : %lu byte\n", (unsigned long)sizeof(char));

    return 0;
}