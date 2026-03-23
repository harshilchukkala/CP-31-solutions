#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(n==1)
        {
            printf("YES\n");
            printf("%d",arr[0]);
            continue;
        }
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[n-1-i]=arr[i];
        }
        if(ans[0]==ans[n-1])
        {
            printf("NO\n");
            continue;
        }
        int t=ans[1];
        ans[1]=ans[n-1];
        ans[n-1]=t;
        printf("YES\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
    return 0;
}