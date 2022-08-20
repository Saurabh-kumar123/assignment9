#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
{    int n;
    printf("\nenter your choice\n\n");
    printf("1. Good\n2. Better\n3. Best\n4. exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nGood\n");
        break;
        case 2:
        printf("\nBetter\n");
        break;
        case 3:
        printf("\nBest\n");
        break;
        case 4:
        exit(0);
        default:
        printf("envalid choice");
    }
}
return 0;
}
