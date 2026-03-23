#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if(n-a-b>1)
        {
            printf("YES\n");
        }
        else
        {
            if(a==n && b==n) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}