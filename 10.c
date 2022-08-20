#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c;
     float x=0,n,s,r;
     printf("enter a quadratic equation\n");
     printf("\nenter a value of a: ");
     scanf("%d",&a);
     printf("\nenter a value of b: ");
     scanf("%d",&b);
     printf("\nenter a value of c: ");
     scanf("%d",&c);
     x=b*b-4*a*c;
     switch(x>0)
     {
     case 1:
          n=sqrt(b*b-4*a*c);
          s=(-b+n)/(2*a);
          printf("%f ",s);
          r=(-b-n)/(2*a);
          printf("%f ",r);
          break;
     case 0:
          switch(x<0)
          {
       case 1:
              n=sqrt(4*a*c-b*b);
               s=(-b+n)/(2*a);
               printf("%f ",s);
               r=(-b-n)/(2*a);
               printf("%f ",r);
               break;
       case 0:
          switch(x==0)
          {
          case 1:
               n=-b/2*a;
               printf("%f ",n);
               break;
          }break;

     }break;

}
return 0;
}
