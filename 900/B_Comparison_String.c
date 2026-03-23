#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        char string[n+1];
        scanf("%s",string);
        int c1=0,c2=0,max1=-1,max2=-1;
        for(int i=0;i<n;i++)
        {
            if(string[i]=='<')
            {
                c1++;
            }
            else
            {
                if(c1>max1) max1=c1;
                c1=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(string[i]=='>')
            {
                c2++;
            }
            else
            {
                if(c2>max2) max2=c2;
                c2=0;
            }
        }
        if(c1>max1) max1=c1;
        if(c2>max2) max2=c2;
        
        if(max1>max2) printf("%d\n",max1+1);
        else printf("%d\n",max2+1);
    }
    return 0;
}