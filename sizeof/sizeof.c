/*
 * Shared on facebook as a challenge
 *
 * What will it print?
 *
 * [A] x is 97
 * [B] x is 99
 * [C] x is 98
 * [D] Runtime error
 *
 **
 * It gives a compiler warning, so you might want to compile with
 *  -Wunevaluated-expression flag in gcc
 */
#include <stdio.h>

int main() {
    int x = 97;
    int y = sizeof(x++);
    printf("x is %d\n", x);
    return 0;
}
