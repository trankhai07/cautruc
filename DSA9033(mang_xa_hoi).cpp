#include<bits/stdc++.h>
using namespace std;
int b[100005];
vector<int>v[100005];
void dfs(int b[],vector<int>v[],int j){
  b[j] =1;
  for(int i = 0;i < v[j].size();i ++){
      if(b[v[j][i]] != 1) dfs(b,v,v[j][i]);
  }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >>n >> m; 
        for(int i= 1;i <= n;i ++) v[i].clear();
        for(int i = 1;i <= m;i ++){
            int k,h;
            cin >> k >> h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
        int kt =0; memset(b,0,sizeof(b));
        dfs(b,v,1);
        for(int i = 1;i <= n;i ++){
            if(b[i] != 1){
                cout <<"NO\n"; kt =1;
                 break;
            }
        }
     if(kt == 0) cout <<"YES\n";
    }
}