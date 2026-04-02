#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        long long int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] == 1)
                one++;
            if (arr[i] == 0)
                zero++;
        }
        long long result = one * (1LL << zero);
        printf("%lld\n", result);
    }
    return 0;
}