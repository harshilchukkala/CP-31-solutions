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
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        int c=1,ans=0;
        while(c!=0)
        {
            c=0;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]>=arr[i+1]) 
                {
                    arr[i]/=2;
                    c++;
                    ans++;
                }
            }
            if(arr[0]==0 && arr[1]==0)
            {
                ans=-1;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}