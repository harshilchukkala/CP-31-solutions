#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        long long int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int sum=b;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]>a-1)
            {
                sum=sum+a-1;
            }
            else
            {
                sum=sum+arr[i];
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}