#include <stdio.h>

void try(void){
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
    return;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--){
        try();
    }
    return 0;
}