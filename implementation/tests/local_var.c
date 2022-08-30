// tests transforming macros that expand to local variables (hygiene)

#include <stdio.h>

#define X x

int main()
{
    int x;
    x;

    printf("%d\n",
        // Should not transform
        X
    );

    return 0;
}
