#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a;
        int d[40005]={0};
        for(int i = 1;i <= n;i ++){
          cin >> a;
           d[a]=1;
           for(int j = m; j >= a;j --){
               if(d[j-a] == 1) d[j] =1;
           }
        }
        if(d[m] == 1) cout <<"YES\n";
        else cout << "NO\n";
    }
}