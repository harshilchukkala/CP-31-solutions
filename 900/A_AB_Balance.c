#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char arr[101];
        scanf("%s",arr);
        int len=strlen(arr);
        char c=arr[0];
        int change=0;
        for(int i=0;i<len;i++)
        {
            if(arr[i]==c) continue;
            else
            {
                c=arr[i];
                change++;
            }
        }
        if(change%2!=0)
        {
            if(arr[len-1]=='a')
            {
                arr[len-1]='b';
            }
            else arr[len-1]='a';
        }
        printf("%s\n",arr);
    }
    return 0;
}