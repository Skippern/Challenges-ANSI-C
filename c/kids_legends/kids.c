#include <stdio.h>

main()
{
    int i,j;
    printf("\nThe pattern is \n");
    for (i=0; i <= 4; i++)
    {
        for (j=0; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n")
    }
}
