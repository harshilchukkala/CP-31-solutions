#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        char str[n+1];
        scanf("%s",str);
        if(n-k==1)
        {
            printf("YES\n");
            continue;
        }
        int unique[26];
        for(int i=0;i<26;i++)
        {
            unique[i]=0;
        }
        for(int i=0;i<26;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(str[j]=='a'+i)
                {
                    count++;
                }
            }
            unique[i]=count;
        }
        int a=0;
        for(int i=0;i<26;i++)
        {
            while(unique[i]>=2)
            {
                a=a+2;
                unique[i]=unique[i]-2;
            }
        }
        if((n-k)%2==0)
        {
            if(a>=n-k) printf("YES\n");
            else printf("NO\n");
            continue;\
        }
        if((n-k)%2==1)
        {
            if(a+1>=n-k) printf("YES\n");
            else printf("NO\n");
            continue;
        }
    }
}