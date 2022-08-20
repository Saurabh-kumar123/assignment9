#include<stdio.h>
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     switch(n>0)
     {
     case 1:
          printf("%d",-n);
          break;
     case 0:
          switch(n<0)
          {
     case 1:
          printf("%d",-n);
          break;
     case 0:
          printf("%d",n);
          break;

          }break;
     }
     return 0;
}
