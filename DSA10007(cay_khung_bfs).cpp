#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vt;
void bfs(int j,vector<int>v[],int b[]){
   queue<int>q;
   b[j]=1;
   q.push(j);
   while(q.empty() != 1){
       int x = q.front(); q.pop();
       for(int i = 0;i < v[x].size();i ++){
           if(b[v[x][i]] == 0 ){
               b[v[x][i]] = 1;
               vt.push_back({x,v[x][i]});
               q.push(v[x][i]);
           }
       }
   }
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >> n >> m >> z;
        vector<int>v[1005];
        for(int i = 1;i <= m ;i ++ ){
           int k,h; cin  >> k >> h;
           v[k].push_back(h);
           v[h].push_back(k);
        }
        int b[n+1]; memset(b,0,sizeof(b));
        bfs(z,v,b);
        if(vt.size() != n-1) cout << "-1\n";
        else {
            for(int i = 0;i < vt.size();i ++) cout << vt[i].first << " " <<vt[i].second << endl;
        }
        vt.clear();
    }
    return 0;
}