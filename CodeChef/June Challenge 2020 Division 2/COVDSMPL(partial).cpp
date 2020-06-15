#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,m,n,p,x,y,r1,r2,c1,c2,ar[66][66];
    scanf("%d",&t);
    while(t--){
        memset(ar,0,sizeof(ar));
        scanf("%d %d",&n,&p);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("1 %d %d %d %d\n",i,j,i,j);
                fflush(stdout);
                scanf("%d",&x);
                ar[i][j]=x;
            }
        }
        printf("2\n");
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("%d ",ar[i][j]);
            }
            printf("\n");
        }
        fflush(stdout);
        scanf("%d",&x);
    }

    return 0;
}
