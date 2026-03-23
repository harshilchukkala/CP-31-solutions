#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+1];
        arr[n]=1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int c=0,max=0;
        for(int i=0;i<n+1;i++)
        {
            if(arr[i]==1)
            {
                if(max<c) max=c;
                c=0;
            }
            if(arr[i]==0)
            {
                c++;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
