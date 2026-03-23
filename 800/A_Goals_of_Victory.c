#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            sum=sum+arr[i];
        }
        sum=-sum;
        printf("%d\n",sum);
    }
    return 0;
}
    