/*
 * Challenge found on Facebook
 *
 * What will be the output of the program?
 * [A] y=20
 * [B] x=0
 * [C] x=10
 * [D] x=1
 */
#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    if (!(!x) && x)
        printf("x = %d\n", x);
    else
        printf("y = %d\n", y);
    return 0;
}
