#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld", &n);
        int max=1;
        while(n%max==0)
        {
            max++;
        }
        printf("%d\n",max-1);
    }
    return 0;
}