#include <stdio.h>
int main()
{
    int year;
    printf("Enter year = ");
    scanf("%d",&year);
    int t = 0;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("This is leap year.");
            }
            else
            {
                printf("This is not leap year.");
            }
        }
        else
        {
            printf("This is leap year.");
        }
    }
    else
    {
        printf("This is not leap year.");
    }
    return 0;
}
