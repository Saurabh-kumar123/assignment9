#include<stdio.h>
int main()
{
     int n;
     float amount=0,sum=0;
     printf("enter a electricity unit\n");
     scanf("%d",&n);
     switch(n<=50)
     {
     case 1:
          amount=n*0.5;
          break;
     case 0:
          switch(n<=150)
          {
          case 1:
               amount=25+(n-50)*0.75;
               break;
          case 0:
               switch(n<=250)
               {
               case 1:
                    amount=100+(n-150)*1.20;
                    break;
               case 0 :
                    switch(n>250)
                    {
                         case 1:
                    amount=220+(n-250)*1.50;
                    }break;
               }break;

          }break;
     }
     sum=amount+(amount*20/100);
     printf("Total payable amount is %f",sum);
     return 0;
}
