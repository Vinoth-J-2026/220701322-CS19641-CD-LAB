#include <stdio.h>
#include <string.h>
#include <ctype.h>
void upperCase(char str[], int l)
{
    printf("Uppercase string: ");
    for (int i = 0; i < l; i++)
    {
        printf("%c", toupper(str[i]));
    }
}
int main()
{
    char str[256];
    printf("Enter a String: ");
    scanf("%[^\n]s", str);
    int l = strlen(str);
    upperCase(str, l);
}