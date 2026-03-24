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
        int max=0,min=1000,maxindex=0,minindex=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i]<min)
            {
                min=arr[i];
                maxindex=i;
            }
            if(arr[i]>max)
            {
                max=arr[i];
                minindex=i;
            }
        }
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        int ans=arr[n-1]-arr[0];
        if(max-arr[0]>ans) ans=max-arr[0];
        if(arr[n-1]-min>ans) ans=arr[n-1]-min;
        if(maxindex-minindex==1 || maxindex-minindex==-1) ans=max-min;
        printf("%d\n",ans);
    }
    return 0;
}