#include<bits/stdc++.h>
using namespace std;
void dfs(int j,vector<int>v[],int b[]){
    b[j]=1;
    for(int i = 0;i < v[j].size();i ++){
        if(b[v[j][i]] == 0) dfs(v[j][i],v,b);
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
            v[h].push_back(k);
        }
        int b[1005],cn=0;memset(b,0,sizeof(b));
        for(int i = 1;i <= n;i ++){
          if(b[i] == 0){
               cn ++;
              dfs(i,v,b);
          }
        }
        cout << cn <<endl;
    }
}