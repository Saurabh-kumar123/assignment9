#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int n,a,b,c;
    while(1)
{
     system("cls");
    printf("\n1. isosecles triangle\n2. right angle triangle\n3. equilateral triangle\n4. exit\n");
    printf("\nenter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                 printf("enter 3 sides  length of triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a==b&&a!=c||b==c&&b!=a||c==a&&c!=b)
                 printf("This triangle is isosecles");
                 else
                 printf("This triangle is not isosecles");
                 break;
        case 2:
                 printf("enter 3 sides length of triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
                 printf("This triangle is right angle triangle");
                 else
                 printf("This is not right angle triangle");
                 break;
        case 3:
                 printf("enter 3 sides length of triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a==b&&b==c&&c==a)
                 printf("This triangle is equilateral triangle");
                 else
                 printf("This is not equilateral triangle");
                 break;
        default:
                 printf("invalid choice");
        case 4:
                 printf("Thank you----");
        exit(0);
    }
    getch();
}

return 0;

}
