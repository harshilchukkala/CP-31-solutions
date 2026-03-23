#include <stdio.h>

long long int sumtill(long long int n)
{
    return (n*(n+1))/2;
}
int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n,k,x;
        scanf("%lld %lld %lld",&n,&k,&x);
        if(x>=sumtill(k) && x<=sumtill(n)-sumtill(n-k)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}