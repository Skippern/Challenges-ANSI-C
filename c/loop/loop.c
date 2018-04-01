/*
 * What happens
 * [A] Infinite call to main
 * [B] Run time error
 * [C] Varies
 * [D] main is called twice
 */
#include <stdio.h>

void main()
{
    static int x;
    if (x++ > 2)
        main();
}
