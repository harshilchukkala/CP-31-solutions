#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ans=0;
        char tar[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                scanf(" %c",&tar[i][j]);
            }
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(tar[i][j]=='X') ans++;
            }
        }
        for(int i=1;i<9;i++)
        {
            for(int j=1;j<9;j++)
            {
                if(tar[i][j]=='X') ans++;
            }
        }
        for(int i=2;i<8;i++)
        {
            for(int j=2;j<8;j++)
            {
                if(tar[i][j]=='X') ans++;
            }
        }
        for(int i=3;i<7;i++)
        {
            for(int j=3;j<7;j++)
            {
                if(tar[i][j]=='X') ans++;
            }
        }
        for(int i=4;i<6;i++)
        {
            for(int j=4;j<6;j++)
            {
                if(tar[i][j]=='X') ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}