#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,min;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        arr[i]=abs(t);
    }
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    printf("%d",min);
    return 0;
}