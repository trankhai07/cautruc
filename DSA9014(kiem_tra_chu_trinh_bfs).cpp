#include<bits/stdc++.h>
using namespace std;
int cn =0;
void bfs(vector<int>v[],int b[],int j){
    b[j] =1;
    queue<int>q;
    q.push(j);
    int pa[1005]={0};
    while(q.empty() != 1){
        int x = q.front(); q.pop();
        for(int i = 0;i < v[x].size();i ++){
            if(b[v[x][i]] == 0){
                b[v[x][i]] = 1;
                pa[v[x][i]] =x;
                q.push(v[x][i]);
            }
            else if(v[x][i] != pa[x]){
                cn =1;
            } 
        }
    }
}
int main(){
  int x,n,m;
  cin >> x;
  while(x--){
      cin >> n >>m;
      vector<int>v[n+1];
      int b[n+1]; cn=0;
      memset(b,0,sizeof(b));
      for(int i = 1;i <= m;i ++){
          int k,h;
          cin >> k >> h;
          v[k].push_back(h);
          v[h].push_back(k);
      }
      for(int i = 1;i <= n;i ++){
          if(b[i] == 0) {
              bfs(v,b,i);
              if(cn == 1){
                  cout <<"YES\n";
                  break;
              }
          }
      }
      if(cn == 0) cout << "NO\n";
  }
}