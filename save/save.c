/*
 * Challenge from facebook
 *
 * What will be the content of 'file.c' after executing the following program?
 *
 * [A] B
 * [B] A\nB
 * [C] B\nB
 * [D] Error in opening file 'file.c'
 */
#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    fp1=fopen("file.c","w");
    fp2=fopen("file.c","w");
    fputc('A',fp1);
    fputc('B',fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
