#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[0],m=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<min) min=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==min) m++;
        }
        if(m==n)
        {
            printf("-1\n");
            continue;
        }
        printf("%d %d\n",m,n-m);
        for(int i=0;i<m;i++)
        {
            printf("%d ",min);
        }
        printf("\n");
        for(int i=0;i<n;i++)
        {
            if(a[i]!=min)
            {
                printf("%d ",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
    