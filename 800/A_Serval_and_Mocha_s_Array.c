#include <stdio.h>

int gcd(int a,int b)
{
    if(b>a)
    {
        int t=a;
        a=b;
        b=t;
    }
    while(a%b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return b;
}

int maxprime(int arr[],int n)
{
    int r[n*(n-1)/2];
    int a=0;
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            r[a]=gcd(arr[i],arr[j]);
            a++;
        }
    }
    int min=r[0];
    for(int i=0;i<n*(n-1)/2;i++)
    {
        if(r[i]<min) min=r[i];
    }
    return min;
}

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
        int r=maxprime(arr,n);
        if(r==1 || r==2)
        {
            printf("YES\n");
            continue;
        }
        if(r>2)
        {
            printf("NO\n");
            continue;
        }
    }
    return 0;
}