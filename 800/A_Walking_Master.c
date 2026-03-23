#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(d-b<0)
        {
            printf("-1\n");
            continue;
        }
        else if(a+(d-b)-c<0)
        {
            printf("-1\n");
            continue;
        }
        else printf("%d\n",d-b+a+(d-b)-c);
    }
    return 0;
}