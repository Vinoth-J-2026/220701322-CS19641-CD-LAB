#include <stdio.h>
#include <string.h>
#include <ctype.h>
int fun(char str[], int i)
{
    char temp[100];
    int t = i, x = 0;
    while (isalpha(str[t]))
    {
        temp[x++] = str[t++];
    }
    temp[x] = '\0';
    if (strcmp(temp, "int") == 0 || strcmp(temp, "float") == 0 || strcmp(temp, "char") == 0 || strcmp(temp, "bool") == 0 || strcmp(temp, "printf") == 0 || strcmp(temp, "scanf") == 0)
    {
        printf("%s is keyword\n", temp);
        t++;
        return t - 1;
    }

    return i;
}
int main()
{
    char str[100];
    printf("Enter code:");
    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        i = fun(str, i);
        if (str[i] == '(')
        {
            while (str[i] != ')')
                i++;
            i++;
        }
        if (isalnum(str[i]))
        {
            while (isalnum(str[i]) || str[i] == '_')
            {
                printf("%c", str[i]);
                i++;
            }
            printf(" is identifier\n");
        }
        switch (str[i])
        {
        case ',':
        case ';':
            printf("%c is a delimiter\n", str[i]);
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '&':
        case '|':
        case '=':
            printf("%c is a operator\n", str[i]);
            break;
        default:
            break;
        }
    }
}