#include <stdio.h>

void func()
{
    int n;
    scanf("%d",&n);
    char cell[n+1];
    scanf("%s",cell);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(cell[i]=='#')
        {
            c=0;
        }
        if(cell[i]=='.')
        {
            c++;
        }
        if(c>=3)
        {
            printf("2\n");
            return;
        }
    }
    c=0;
    for(int i=0;i<n;i++)
    {
        if(cell[i]=='.')
        {
            c++;
        }
    }
    printf("%d\n",c);
    return;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        func();
    }
    return 0;
}
