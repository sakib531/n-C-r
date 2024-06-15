#include<stdio.h>
int fac(int t)
{
    int x=1;
    for(int j=1;j<=t;j++)
    {
       x=x*j;
    }
return x;
}
int cal(int n, int r)
{
    int cal=fac(n)/(fac(r)*fac(n-r));
return cal;
}

int main()
{
    int n,r;
    printf("Enter the value of n & r:\n");
    scanf("%i %i",&n,&r);
    printf("The value is:",n,r);
    printf("%i",cal(n,r));
return 0;
}
