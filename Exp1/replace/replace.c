#include <stdio.h>
#include <string.h>
#include <ctype.h>
void replace(char s1[])
{
    char r, nc;
    printf("\nEnter a character to replace:");
    scanf(" %c", &r);
    printf("Enter replacement character:");
    scanf(" %c", &nc);
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == r)
        {
            s1[i] = nc;
        }
    }
    printf("The New String is %s\n", s1);
}
int main()
{
    char rep[100];
    printf("\nEnter a new string:");
    scanf("%[^\n]s", rep);
    replace(rep);
}
