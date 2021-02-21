#include <stdio.h>
int fun(int a, int b)
{
    int division=a/b;
    return division;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0)
    {
         printf("abe bewkoof tujhe pta nhi h kya ...\nki denominator n 0 nhi honi chahiye ..");
    }
    else
    {
        int division=fun(a,b);
        printf("%d",division);
    }
    return 0;
}
