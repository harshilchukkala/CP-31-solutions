#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int max,min;
        if(n%2==1 || n==2)
        {
            printf("-1\n");
            continue;
        }
        max=n/4;
        min=(n+5)/6;
        printf("%lld %lld\n",min,max);
    }
    return 0;
}