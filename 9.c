#include<stdio.h>
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     switch(n%2==0)
     {
     case 1:
          printf("upper nearest odd number %d",++n);
          break;
     case 0:
          printf("%d",n);
     }
     return 0;
}
