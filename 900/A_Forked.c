#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,xki,yki,xqi,yqi;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&xki,&yki);
        scanf("%d %d",&xqi,&yqi);

        int xk[8],yk[8],xq[8],yq[8];
        int offx[8]={a,b,-b,-a,-a,-b,b,a};
        int offy[8]={b,a,a,b,-b,-a,-a,-b};

        int ans=0;
        for(int i=0;i<8;i++)
        {
            xk[i]=xki+offx[i];
            yk[i]=yki+offy[i];
            for(int j=0;j<8;j++)
            {
                xq[j]=xqi+offx[j];
                yq[j]=yqi+offy[j];
                if(xk[i]==xq[j] && yk[i]==yq[j]) ans++;
            }
        }
        if(a==b)
        {
            printf("%d\n",ans/4);
            continue;
        }
        printf("%d\n",ans);
    }
}