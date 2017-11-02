/*
 * Shared on Facebook
 *
 * What will be the result of this?
 *
 * [A] 20
 * [B] 0
 * [C] Gabage Value
 * [D] Error
 */
#include <stdio.h>

int main()
{
    extern int a;
    printf("%d\n", a);
    return 0;
}
int a = 20;
