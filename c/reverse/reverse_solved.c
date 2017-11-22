/*
 * Challenge from Facebook
 *
 * Comment your answer
 *
 * How to get the reverse output
 */
#include <stdio.h>
int main()
{
    int *p, i;
    static int x[5] = {5, 9, 6, 3, 7};
    i = 0;
    p = -x;
    printf("Element value Addresses\n\n");
    while(i<5)
    {
        printf("x[%d] %d \n", i, *p);
        i++;
        p++;
    }
    return 0;
}
