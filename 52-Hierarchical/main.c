#include <stdio.h>

int main()
{
    extern int main_LibSecond();
    extern int main_LibFirst();

    main_LibFirst();
    main_LibSecond();

    printf("Hello, world from LIB!\n");
    return 1;
}