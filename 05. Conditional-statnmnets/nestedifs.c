#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char token;
    printf("Press a single Key: \n> ");
    scanf("%c", &token);

    if (token >= '0' && token <= '9')
    {
        printf("You pressed a Num Key!");
    }
    else if (token >= 'a' && token <= 'z')
    {
        printf("You pressed a LowerCase.");
    }
    else if (token >= 'A' && token <= 'Z')
    {
        printf("You pressed a UpperCase.");
    }
    else
    {
        printf("Invalid Input!");
    }

    return 0;
}