#include <stdio.h>
int main()
{
    int s;
    int k;
    int e;
    int m;
    printf("===GRADE CARD===");
    printf("input School number(8 digits) : ");
    scanf("%d",&s);
    printf("input Korean Score: ");
    scanf("%d",&k);
    printf("input English Score: ");
    scanf("%d",&e);
    printf("input Mathmatic Score: ");
    scanf("%d",&m);

    printf("\n\n===========Result===========\n");
     printf("school number  :   %08d\n",s);
     printf("\n Kor score  :   %3d",k);
     printf("\n Eng score  :   %3d",e);
     printf("\n Mat score  :   %3d",m);
}