#include <stdio.h>

int count(int start,int end,int len,int digits[])
{
    int count=0;
    int k=0;
    for(int i=0;i<len;i++)
    {
        if(digits[i]==end && k!=1)
        {
            k=1;
        }
        else if(digits[i]!=start && k==1)
        {
            count++;
        }
        else if(digits[i]==start && k==1) break;
    }
    return count;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld", &n);
        int digits[20]={0};
        long long int num=n;
        int len=0;
        while(num!=0)
        {
            digits[len]=num%10;
            num /= 10;
            len++;
        }
        int min=50;
        int count1=count(0,0,len,digits);
        if(count1<min) min=count1;
        // int count2=count(2,5,len,digits);
        // if(count2<min) min=count2;
        // int count3=count(5,0,len,digits);
        // if(count3<min) min=count3;
        // int count4=count(7,5,len,digits);
        // if(count4<min) min=count4;
        // printf("%d\n",min);
    }
    return 0;
}