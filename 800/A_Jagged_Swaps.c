#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(arr[0]==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
    