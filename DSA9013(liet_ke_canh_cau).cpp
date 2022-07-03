#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>v[],int j,int b[]){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i++){
        if(b[v[j][i]] != 1) dfs(v,v[j][i],b);
    }
}
void creat(vector<pair<int,int>>p,int k,int n,int start,int h,int b[]){
    vector<int>v[1005];
    for(int i = 0;i < n;i ++ ){
        if(i != k){
            v[p[i].first].push_back(p[i].second);
            v[p[i].second].push_back(p[i].first);
        }
    }
    int end =0 ;
    for(int i=1;i <= h;i ++ ){
        if(b[i] != 1){
            end++;
            dfs(v,i,b);
        }
    }
    if(end > start) cout << p[k].first << " "<<p[k].second <<" ";
}
int main(){
    int k; cin >> k;
 while(k--){
    int n,m; cin >> n >> m;
    int b[1005];
    memset(b,0,sizeof(b));
    vector<int>v[1005];
    vector<pair<int,int>>p;
    for(int i = 1;i <= m;i ++ ){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        p.push_back({x,y});
    }
    int start=0;
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 0){
            start++;
            dfs(v,i,b);
        }
    }
    for(int i = 0;i < p.size();i ++){
        memset(b,0,sizeof(b));
        creat(p,i,p.size(),start,n,b);
    }
    cout <<endl;
 }
    //for(int i =0;i < s.size();i++) cout << s[i].first <<" "<<s[i].second<<endl;
}