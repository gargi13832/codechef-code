#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,y,k,i,flag=0;
    cin>>t;
    while(t--){
        flag = 0;
        cin>>n>>k>>x>>y;
        if(y>n)
            cout<<"NO\n";
        else{
            for(i=0;i<(n);i++){
                if((x+k)%n==y){
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
                x = (x+k)%n;
            }
        }
        if(flag==0)
            cout<<"NO\n";
    }
    return 0;
}
