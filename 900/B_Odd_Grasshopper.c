#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int x,n;
        scanf("%lld %lld",&x,&n);
        int left=n%4;
        long long int done=n/4;
        done=done*4;
        if(left==0)
        {
            printf("%lld\n",x);
            continue;
        }
        if(x%2!=0)
        {
            if(left==1)
            {
                printf("%lld\n",x+done+1);
                continue;
            }
            if(left==2)
            {
                printf("%lld\n",x-1);
                continue;
            }
            if(left==3)
            {
                printf("%lld\n",x-4-done);
                continue;
            }
        }
        if(x%2==0)
        {
            if(left==1)
            {
                printf("%lld\n",x-done-1);
                continue;
            }
            if(left==2)
            {
                printf("%lld\n",x+1);
                continue;
            }
            if(left==3)
            {
                printf("%lld\n",x+4+done);
                continue;
            }
        }
    }
    return 0;
}