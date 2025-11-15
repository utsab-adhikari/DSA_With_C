// WAP to Find Length of String using Pointer.
#include <stdio.h>
int stringLength(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = stringLength(str);
    printf("Length of the string: %d\n", len);

    return 0;
}