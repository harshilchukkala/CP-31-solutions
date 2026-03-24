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
        int max=0,min=1000;
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]<min) min=arr[i];
            if(arr[i]>max)  max=arr[i];
        }
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        int ans=arr[n-1]-arr[0];
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]-arr[i+1]>ans) ans=arr[i]-arr[i+1];
        }
        if(max-arr[0]>ans) ans=max-arr[0];
        if(arr[n-1]-min>ans) ans=arr[n-1]-min;
        printf("%d\n",ans);
    }
    return 0;
}