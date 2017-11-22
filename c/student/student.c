/*
 * Shared on facebook as a challenge
 *
 * What does the code print
 *
 * [A] h
 * [B] i
 * [C] e
 * [D] y
 */
#include <stdio.h>
struct student
{
    char a[5];
};

int main()
{
    struct student s[] = { "hi", "hey"};
    printf("%c", s[0].a[1]);
    return 0;
}
