#include <stdio.h>

int use(int a,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int digits=0;
        int dup=n;
        while(dup!=0)
        {
            dup=dup/10;
            digits++;
        }
        int top=n/(use(10,digits-1));
        printf("%d\n",9*(digits-1)+top);
    }
    return 0;
}