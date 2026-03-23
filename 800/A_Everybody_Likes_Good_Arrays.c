#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int e=0;
        int anse=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                if(e>1) anse=anse+e-1;
                e=0;
            }
            if(arr[i]%2==0) e++;
        }
        if(e>1) anse=anse+e-1;
        int o=0;
        int anso=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                if(o>1) anso=anso+o-1;
                o=0;
            }
            if(arr[i]%2==1) o++;
        }
        if(o>1) anso=anso+o-1;
        printf("%d\n",anse+anso);
    }
    return 0;
}