#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct str{
    ll r,g,b;
}st[4004];

int main(){
    ll a,c=0,ct=0,m,n,i,j,k,x=0,y,sm=0,R=0,G=0,B=0;
    scanf("%lld",&n);
    string s;
    scanf("%lld",&n);
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='R') R++;
        if(s[i]=='G') G++;
        if(s[i]=='B') B++;
    }
    for(i=0;i<n;i++){
        if(s[i]=='R') R--;
        if(s[i]=='G') G--;
        if(s[i]=='B') B--;
        st[i].r=R;
        st[i].g=G;
        st[i].b=B;
    }
//    for(i=0;i<n;i++) cout<<st[i].r<<' '<<st[i].g<<' '<<st[i].b<<"\n";
    for(i=1;i<n-1;i++){
        for(j=0;j<i;j++){
            if(s[i]=='R'){
                if(s[j]=='G'){
                    sm+=st[i].b;
                    if(s[i+i-j]=='B') sm--;
                }
                if(s[j]=='B'){
                    sm+=st[i].g;
                    if(s[i+i-j]=='G') sm--;
                }
            }

            if(s[i]=='G'){
                if(s[j]=='R'){
                    sm+=st[i].b;
                    if(s[i+i-j]=='B') sm--;
                }
                if(s[j]=='B'){
                    sm+=st[i].r;
                    if(s[i+i-j]=='R') sm--;
                }
            }

            if(s[i]=='B'){
                if(s[j]=='G'){
                    sm+=st[i].r;
                    if(s[i+i-j]=='R') sm--;
                }
                if(s[j]=='R'){
                    sm+=st[i].g;
                    if(s[i+i-j]=='G') sm--;
                }
            }
        }
    }
    printf("%lld\n",sm);

    return 0;
}
