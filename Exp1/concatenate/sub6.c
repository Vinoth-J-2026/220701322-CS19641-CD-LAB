#include <stdio.h>
#include <string.h>
#include <ctype.h>

void concat(char s1[], char s2[])
{
    printf("The concatenated string is %s\n", strcat(s1, s2));
}

int main()
{
    char s1[100], s2[100];
    printf("\nEnter String 1:");
    scanf("%s", s1);
    printf("\nEnter String 2:");
    scanf("%s", s2);
    concat(s1, s2);
}