#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,k;
        scanf("%d %d",&x,&k);
        if(x%k!=0)
        {
            printf("1\n%d\n",x);
        }
        if(x%k==0)
        {
            printf("2\n%d 1\n",x-1);
        }
    }
    return 0;
} 