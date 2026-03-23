#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        
        if(c%2==0)
        {
            if(a==b) printf("Second\n");
            if(a<b) printf("Second\n");
            if(a>b) printf("First\n");
        }
        if(c%2==1)
        {
            if(a==b) printf("First\n");
            if(a<b) printf("Second\n");
            if(a>b) printf("First\n");
        }
    }
    return 0;
}
    