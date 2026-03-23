#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n;
        scanf("%d",&n);
        if(n%3==0) printf("Second\n");
        else printf("First\n");
    }
    return 0;
}