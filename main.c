#include "main.h"

int main()
{
    int len;
    int len2;

    char *s = NULL;

    len = _printf("%s\n", "abcdllll");
    // len2 = printf("%vvllo", s);

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    return (0);
}