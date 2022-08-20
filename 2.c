#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n,a,b;
    while(1)
    {
         system("cls");
    printf("\n1. Add\n2. Sub\n3. mul\n4. div\n5. exit\n");
    printf("\n enter you choice\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
            printf("enter a two number\n");
            scanf("%d%d",&a,&b);
            printf("sum is %d",a+b);
            break;
       case 2:
            printf("enter a two number\n");
            scanf("%d%d",&a,&b);
            printf("diffrence is %d",a-b);
            break;
        case 3:
            printf("enter a two number\n");
            scanf("%d%d",&a,&b);
            printf("mul is %d",a*b);
            break;
        case 4:
            printf("enter a two number\n");
            scanf("%d%d",&a,&b);
            printf("div is %d",a/b);
            break;
        case 5:
             printf("------Thank you------\n");
             printf("press any key to exit program.....");
             getch();
          exit(0);
        default:
          printf("invalid choice");
    }//  switch
    getch();
    } //loop
    return 0;
}
