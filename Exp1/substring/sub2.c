#include <stdio.h>
#include <string.h>

int main()
{
    char str[256], sub[100];
    printf("Enter a String: ");
    scanf(" %[^\n]", str);
    printf("\n\nEnter Substring to search: ");
    scanf("%s", sub);
    char *pos = strstr(str, sub);
    if (pos != NULL)
    {
        printf("Substring found at index: %ld\n", pos - str);
    }
    else
    {
        printf("Substring not found\n");
    }

    return 0;
}
