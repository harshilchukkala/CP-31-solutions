#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,s1,a,ans=0;
        scanf("%d %d",&x1,&s1);

        char *x,*s,*l;
        x=malloc(x1+1);
        s=malloc(s1+1);
        a=x1+1;
        scanf("%s",x);
        scanf("%s",s);
        l=strstr(x,s);

        while(l == NULL){
            char *temp;
            temp=malloc(a);
            strcpy(temp,x);
            x=realloc(x,2*a*sizeof(char));
            a=a*2;
            strcat(x,temp);
            ans++;
            free(temp);
            l=strstr(x,s);
            if(ans>5)
            {
                printf("-1\n");
                break;
            }
        }
        if(ans>5)
        {
            continue;
        }
        printf("%d\n",ans);
        free(x);
        free(s);
    }
    return 0;
}