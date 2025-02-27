#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeSpaces(char str[], int l)
{
    int j = 0;
    char temp[l + 1];
    for (int i = 0; i < l; i++)
    {
        if (str[i] != ' ')
            temp[j++] = str[i];
    }
    temp[j] = '\0';
    printf("String without Space: %s\n", temp);
}
int main()
{
    char str[256];
    printf("Enter String with Space: ");
    scanf("%[^\n]s", str);
    removeSpaces(str, strlen(str));
}