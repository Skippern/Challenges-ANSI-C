/*
 * Challenge from facebook
 *
 * What will be the output of the program?
 *
 * [A] k == 1 is TRUE
 * [B] 1 == 1 is TRUE
 * [C] 1 == 1 is FALSE
 * [D] k == 1 is FALSE
 */
#include <stdio.h>
int main()
{
    int k=1;
    printf("%d == 1 is %s\n", k, k==1?"TRUE":"FALSE");
    return 0;
}
