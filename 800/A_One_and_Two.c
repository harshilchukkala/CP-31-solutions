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
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2) k++;
        }
        if(k%2==1)
        {
            printf("-1\n");
            continue;
        }
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==2) p++;
            if(p==k/2)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}