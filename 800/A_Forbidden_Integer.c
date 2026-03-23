#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x;
        scanf("%d %d %d",&n,&k,&x);
        if(k==1)
        {
            printf("NO\n");
            continue;
        }
        if(k==2 && x==1)
        {
            if(n%2==0)
            {
                printf("YES\n");
                printf("%d\n",n/2);
                for(int i=0;i<n;i=i+2)
                {
                    printf("2 ");
                }
                printf("\n");
                continue;
            }
            else
            {
                printf("NO\n");
                continue;
            }
        }
        if(x>=2)
        {
            printf("YES\n");
            printf("%d\n",n);
            for(int i=0;i<n;i++)
            {
                printf("1 ");
            }
            printf("\n");
            continue;
        }
        if(k>2 && x==1)
        {
            if(n%2==0)
            {
                printf("YES\n");
                printf("%d\n",n/2);
                for(int i=0;i<n;i=i+2)
                {
                    printf("2 ");
                }
                printf("\n");
                continue;
            }
            if(n%2==1)
            {
                printf("YES\n");
                printf("%d\n",n/2);
                for(int i=0;i<n-4;i=i+2)
                {
                    printf("2 ");
                }
                printf("3");
                printf("\n");
                continue;
            }
        }
    }
    return 0;
}
    