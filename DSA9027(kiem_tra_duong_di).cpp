#include<bits/stdc++.h>
using namespace std;
int kt =0;
void dfs(vector<int>v[],int a,int b,int c[]){
    c[a] = 1;
    if(a == b){
        kt =1; return ;
    }
    for(int i = 0;i < v[a].size();i ++){
      if(c[v[a][i]] == 0) dfs(v,v[a][i],b,c);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        vector<int>v[1000];
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= m;i ++ ){
        int x,y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
     int k,c[1005],a,b; cin >> k;
     while(k--){
          cin >> a >> b;
         memset(c,0,sizeof(c));
         dfs(v,a,b,c);
         if(kt == 1) cout << "YES\n";
          else cout << "NO\n";
          kt =0; 
     }
    }
}