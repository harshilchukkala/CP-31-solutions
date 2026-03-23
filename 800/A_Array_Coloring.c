#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,o=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1) o++;
        }
        if(o%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
    