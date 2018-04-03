/*
 * Challenge from a failed interview
 *
 * What will be printed
 *
 * [A] The value 8086
 * [B] The address of the variable
 * [C] Depends on the compiler
 * [D] A compile time error
 */
#include <stdio.h>

int main()
{
    int numbr;
    numbr = 08086;
    printf("%d\n", &numbr);
    return -1;
}
