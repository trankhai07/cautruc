#include<bits/stdc++.h>
using namespace std;
int num= INT_MAX;
void dijkstra(int st,vector<pair<int ,int>>v[],int n){
    vector<int>path(1005,num);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>qe;
    qe.push({st,0});
    path[st] = 0;
    while(qe.empty() != 1){
        pair<int,int>pa = qe.top(); qe.pop();
        int v1 = pa.second;
        int u1 = pa.first;
        for(int i = 0;i < v[u1].size();i ++){
            int u2 = v[u1][i].first;
            int v2 = v[u1][i].second;
            if(path[u2] > path[u1]+v2 ){
                path[u2] = path[u1]+v2;
                qe.push({u2,path[u2]});
            }
        }
    }
    for(int i = 1;i <= n;i ++) cout << i << " " << path[i]<<endl;
}
 int a[105][105];
int main(){
  
        vector<pair<int,int>>v[1005];
        int n,t;
        cin >> n >> t;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                cin >> a[i][j];
            if(a[i][j] != 0){
                v[i].push_back({j,a[i][j]});
            }
            }
        }
       dijkstra(t,v,n);
      // cout << endl;
}