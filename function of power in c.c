#include <stdio.h>
int fun(int a, int b)
{
    int power=1;

    if(b>=0)
    {
        for(int i=1;i<=b;i++)
       {
            power*=a;
       }
    }
    else
    {

        for(int i=1;i<=(-b);i++)
        {
            power*=a;
        }
    }
    return power;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int power=fun(a,b);
    if(b>=0)
    {
    printf("%d",power);
    }
    else
    printf("the value of %d rasie to power %d will be 1/%d",a,b,power);
    return 0;
}
