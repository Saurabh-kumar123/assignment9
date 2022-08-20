#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(1)
{
    printf("\nenter a days number in a week\n0. exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("coding practice");
        break;
        case 2:
        printf("book reading");
        break;
        case 3:
        printf("assignment solving");
        break;
        case 4:
        printf("speaking practice");
        break;
        case 5:
        printf("playing football");
        break;
        case 6:
        printf("running practice");
        break;
        case 7:
        printf("college course reading");
        break;
        case 0:
        printf("Thank you sirG----");
        exit(0);
        default:
        printf("invalid choice");
    }
}
    return 0;
}