#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vt;
void dfs(int j,vector<int>v[],int b[]){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i ++ ){
        if(b[v[j][i]] == 0){
            vt.push_back({j,v[j][i]});
            dfs(v[j][i],v,b);
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
        dfs(z,v,b);
        if(vt.size() != n-1) cout << "-1\n";
        else {
            for(int i = 0;i < vt.size();i ++) cout << vt[i].first << " " <<vt[i].second << endl;
        }
        vt.clear();
    }
    return 0;
}