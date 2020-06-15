#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,m,n,p,x,y;
    scanf("%d",&n);
    int l=1,r=n;
    while(true){
        char c,cc;
        int mid=l+(r-l)/2;
        printf("%d\n",mid);
        fflush(stdout);
        cin>>c;
        if(c=='E') return 0;
        printf("%d\n",mid);
        fflush(stdout);
        cin>>cc;
        if(c==cc){
            if(c=='G') l=mid+1;
            else r=mid-1;
        }
        else{
            int ck=-1;
            char c1,c2;
            while(true){
                printf("%d\n",mid);
                fflush(stdout);
                cin>>c1;
                printf("%d\n",mid);
                fflush(stdout);
                cin>>c2;
                if(c!=c1){
                    ck=2;
                    break;
                }
                else if(cc!=c2){
                    ck=1;
                    break;
                }
            }
            if(ck==1){
                if(c=='G') l=mid+1;
                else r=mid-1;
            }
            else{
                if(cc=='G') l=mid+1;
                else r=mid-1;
            }
        }
    }

    return 0;
}
