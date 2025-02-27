#include <stdio.h>
#include <string.h>
#include <ctype.h>

void compare(char str[], char com[])
{
    if (strcmp(str, com) == 0)
    {
        printf("Both Strings are Equal\n\n");
    }
    else
    {
        printf("Both Strings are not Equal\n\n");
    }
}

int main()
{
    char str[256], com[100];
    printf("Enter a String: ");
    scanf("%[^\n]s", str);
    getchar();
    printf("\nEnter String to Compare: ");
    scanf("%s", com);
    compare(str, com);
}