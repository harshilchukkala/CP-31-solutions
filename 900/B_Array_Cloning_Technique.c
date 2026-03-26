#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
        int c=arr[0];
        int count=0,max=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==c) count++;
            if(arr[i]!=c)
            {
                c=arr[i];
                if(count>max) max=count;
                count=1;
            }
        }
        if(count>max) max=count;
        int fill=n-max;
        int k=0;
        while(n-max>0)
        {
            max=max*2;
            k++;
        }
        printf("%d\n",fill+k);
    }
    return 0;
}