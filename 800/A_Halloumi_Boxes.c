#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int k,n;
        scanf("%d",&n);
        scanf("%d",&k);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(k>=2)
        {
            printf("YES\n");
        }
        if(k==1)
        {
            int count=0;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1]) count++;
            }
            if(count==0) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
    