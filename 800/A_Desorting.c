#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[1]-a[0];
        for(int i=1;i<n-1;i++)
        {
            if(a[i+1]-a[i]<min) min=a[i+1]-a[i];
        }
        if(min<0)
        {
            printf("0\n");
            continue;
        }
        int ans=0;
        while(min>=0)
        {
            min=min-2;
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
    