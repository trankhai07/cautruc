#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>v[],int j,int t,int b[],int c[]){
      b[j]=1;
    if(j == t) return;
    for(int i = 0;i < v[j].size();i++){
        if(b[v[j][i]] == 0){
            c[v[j][i]] = j;
            dfs(v,v[j][i],t,b,c);
        } 
    }
}
void output(int c[],int s,int t){
    vector<int>ct;
    if(c[t] == 0) cout <<"-1";
    else{
        while(s != t){
            ct.push_back(t);
            t = c[t];
        }
        ct.push_back(s);
        reverse(ct.begin(),ct.end());
        for(int i = 0;i < ct.size();i ++) cout << ct[i] <<" ";
    }
}
int main(){
    int x,n,m,s,t;
    cin >> x;
    while(x--){
        cin >> n >>m >> s >>t;
        vector<int>v[1005];
        int b[n+1],c[n+1];
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i = 1;i <= m;i ++ ){
            int k,y; cin >> k >> y;
           v[k].push_back(y);
        }
       dfs(v,s,t,b,c);
       output(c,s,t);
       cout << endl;
    }
    return 0;
}