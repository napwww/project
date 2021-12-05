#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int n;
    int i;
    for(i = 0;i <5;i++)
    {
        n = rand();
        if(n > 6 || n < 1)
        {
            i--;
        }
        else if(n <= 6 && n>=1)
        {
            printf("%d",n);
        }
    }
    return 0;
}