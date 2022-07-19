#include <stdio.h>

int main()
{
    int number;
    float height;

    printf("number");
    scanf("%1d", &number);
    printf("height");
    scanf("%f", &height);

    printf("\n\n========Result========\n");
    printf("1.  Number  :   %-6d\n",number);
    printf("2.  Height  :   %f5.2f",height);

}