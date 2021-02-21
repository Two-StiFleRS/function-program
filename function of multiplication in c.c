#include <stdio.h>
int fun(int a, int b)
{
    int multiplication=a*b;
    return multiplication;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int multiplication=fun(a,b);
    printf("%d",multiplication);
    return 0;
}
