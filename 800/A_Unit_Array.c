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
        int a=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1) a++;
        }
        while(n<2*a || a%2!=0)
        {
            a--;
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
