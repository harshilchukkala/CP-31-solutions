#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+c==2*b)
        {
            printf("YES\n");
            continue;
        }
        if(a+c>2*b)
        {
            if((a+c)%(2*b)==0)
            {
                printf("YES\n");
                continue;
            }
            else
            {
                printf("NO\n");
                continue;
            }
        }
        if(a+c<2*b)
        {
            if((2*b-c)%a==0 || (2*b-a)%c==0)
            {
                printf("YES\n");
                continue;
            }
            else
            {
                printf("NO\n");
                continue;
            }
        }
    }
    return 0;
}