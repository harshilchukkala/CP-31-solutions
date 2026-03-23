#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int q=0;q<t;q++)
    {
        int n;
        scanf("%d",&n);
        int arr[n],random[n];
        for(int i=0;i<n;i++)
        {
            random[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        random[0]=arr[0];
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==random[j])
                {
                    count++;
                }
            }
            if(count==0)
            {
                random[i]=arr[i];
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(random[i]!=0)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("Yes\n");
            continue;
        }
        if(c==2)
        {
            int p=0;
            for(int i=0;i<n;i++)
            {
                if(random[0]==arr[i])
                {
                    p++;
                }
            }
            if(n%2==0 && p==n/2)
            {
                printf("Yes\n");
                continue;
            }
            if(n%2==1 && (p==(n+1)/2 || p==(n-1)/2))
            {
                printf("Yes\n");
                continue;
            }
            else
            {
                printf("No\n");
                continue;
            }
        }
        else printf("No\n");
    }
    return 0;
}