#include <stdio.h>
#include <string.h>
#include <ctype.h>
void countChr(char str[], int c[])
{
    printf("\nThe count of characters in the string are:\n");
    for (int i = 0; i < strlen(str); i++)
    {
        c[(int)(tolower(str[i]))-96 - 1]++;
    }
    for (int j = 0; j < 26; j++)
    {
        printf("%c: %d\t", 'a' + j, c[j]);
    }
}
int main()
{
    char str[256];
    int count[26] = {0};
    printf("Enter String: ");
    scanf("%[^\n]s", str);
    countChr(str, count);
}