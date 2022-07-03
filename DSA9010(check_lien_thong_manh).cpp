#include<bits/stdc++.h>
using namespace std;
int cn =1;
void dfs(int j,vector<int>v[],int b[]){
    b[j]=1;
    for(int i = 0;i < v[j].size();i ++){
        if(b[v[j][i]] == 0)  {
            cn++;
           dfs(v[j][i],v,b); 
        }
        
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i = 1;i <= m;i ++){
            int k,h;
            cin >> k >> h;
            v[k].push_back(h);
           // v[h].push_back(k);
        }
        int kt=0;
        int b[1005];
      for(int i = 1;i <= n;i ++){
           memset(b,0,sizeof(b)); cn=1;
           dfs(i,v,b);
         if(cn != n){
             cout <<"NO\n"; kt=1;
             break;
         }
       }
      if(kt ==0 ) cout <<"YES\n";
    }
}