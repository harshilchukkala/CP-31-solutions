#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,x;
        scanf("%d",&n);
        scanf("%d",&x);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max=arr[0];
        for(int i=0;i<n-1;i++)
        {
            int c;
            c=arr[i+1]-arr[i];
            if(c>max) max=c;
        }
        if(max>2*(x-arr[n-1])) printf("%d\n",max);
        else printf("%d\n",2*(x-arr[n-1]));
    }
    return 0;
}