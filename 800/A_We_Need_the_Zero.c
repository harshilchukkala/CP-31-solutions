#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &arr[i]);
        }
        int total = 0;
        for (int i = 0; i < n; i++) 
        {
            total = total ^ arr[i];
        }
        if (n % 2 == 1)
        {
            printf("%d\n", total);
        }
        else if (n % 2 == 0 && total == 0) 
        {
            printf("0\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}