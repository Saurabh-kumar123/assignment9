#include<stdio.h>
int main()
{
    int n;
    printf("enter a year\n");
    scanf("%d",&n);
    switch(n%100==0)
    {
        case 1:
        switch(n%400==0)
        {
            case 1:
            printf("This year is leap year\n");
            break;
            case 0:
            printf("This year is not leap year\n");
            break;
        } break;
        case 0:
        switch(n%4==0)
        {
            case 1:
            printf("This year is leap year\n");
            break;
            case 0:
            printf("This year is not leap year\n");
        }
    }
    return 0;
}