#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        char arr[n + 1];
        scanf("%s", arr);
        int a = 0,len=n;
        while (arr[a] + arr[n - 1 - a] == ('0' + '1') && a+1<=n/2) 
        {
            len = len - 2;
            a++;
        }
        printf("%d\n",len);
    }
    return 0;
}