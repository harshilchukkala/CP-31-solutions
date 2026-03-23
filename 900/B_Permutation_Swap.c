#include <stdio.h>

int gcd(int a,int b){ return b ? gcd(b, a % b) : a; }

int gcdarr(int n,int arr[])
{
    int r=gcd(arr[0],arr[1]);
    for (int i = 2; i < n; i++)
    {
        r=gcd(r,arr[i]);
    }
    return r;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n],diff[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            diff[i]=abs(arr[i]-i-1);
        }
        printf("%d\n",gcdarr(n,diff));
    }
    return 0;
}