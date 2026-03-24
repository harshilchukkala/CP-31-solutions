#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int ans=0,c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]==0)
            {
                if(c>0) ans++;
                c=0;
            }
            else c++;
        }
        if(c>0) ans++;
        if(ans>2) ans=2;
        printf("%d\n",ans);
    }
    return 0;
}