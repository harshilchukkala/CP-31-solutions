#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int sum=0,n,q,l,r,k;
        scanf("%d %d",&n,&q);
        int arr[n],fq[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
            sum=sum+arr[i];
            fq[i]=sum;
        }
        while(q--)
        {
            scanf("%d %d %d",&l,&r,&k);
            int summ=fq[n-1]-(fq[r-1]-fq[l-2])+k*(r-l+1);
            if(summ%2==0) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}