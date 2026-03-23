#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld",&n);
        scanf("%lld",&k);
        if(n%2==0) printf("YES\n");
        else if(k%2==0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
