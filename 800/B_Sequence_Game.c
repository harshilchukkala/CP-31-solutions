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
        int ans[2*n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<2*n;i++)
        {
            ans[i]=0;
        }
        int a=0;
        ans[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]!=1)
            {
                a++;
                ans[i+a-1]=1;
            }
            ans[i+a]=arr[i];
        }
        int num=0;
        for(int i=0;i<2*n;i++)
        {
            if(ans[i]!=0)
            {
                num++;
            }
        }
        printf("%d\n",num);
        for(int i=0;i<num;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
    