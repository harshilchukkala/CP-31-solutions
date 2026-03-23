#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,k;
        scanf("%d %d", &n,&k);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        qsort(arr, n, sizeof(int), cmp);
        int c=1,max=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i+1]-arr[i])<=k) c++;
            else{
                if(c>max) max=c;
                c=1;
            }
        }
        if(c>max) max=c;
        printf("%d\n",n-max);
    }
    return 0;
}