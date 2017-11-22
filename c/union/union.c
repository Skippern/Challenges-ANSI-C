/*
 * Shared on Facebook
 *
 * What is the output of the program?
 *
 * [A] 12, 12, 12
 * [B] 112, 1, 12
 * [C] 32, 1, 12
 * [D] -64, 1, 12
 */
 #include <stdio.h>

 int main()
 {
     int i = 4, j = 8;
     printf("%d, %d, %d\n", i|j&j|i, i|j&j|i, i^j);
     return 0;
 }
