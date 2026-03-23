#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if(n%2==0)
        {
            printf("2\n1 %d\n1 %d\n",n,n);
        }
        else
        {
            printf("4\n1 %d\n1 %d\n%d %d\n%d %d\n",n-1,n-1,n-1,n,n-1,n);
        }
    }
    return 0;
}