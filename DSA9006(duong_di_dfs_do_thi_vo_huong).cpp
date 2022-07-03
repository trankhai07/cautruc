#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>t[],int u,int v,int check[],int c[]){
    check[u] =1;
    if(u == v){
       return ;
    }
    for(int i = 0;i < t[u].size();i ++){
        if(check[t[u][i]] == 0){
            c[t[u][i]] = u;
            dfs(t,t[u][i],v,check,c);
        }
    }
}
void output(int c[],int u,int v){
     if(c[v] == 0) cout <<"-1\n";
     else {
         vector<int>re;
         while(u != v){
             re.push_back(v);
             v = c[v];
         }
         reverse(re.begin(),re.end());
         cout << u <<" ";
         for(int i =0;i < re.size();i ++) cout << re[i] <<" ";
         cout << endl;
     }
}
int main(){
    int x,n,m,u,v;
    cin >> x;
    while(x--){
        cin >> n >> m >> u >> v;
        vector<int>t[1005];
        int c[1005];
        int check[1005];memset(check,0,sizeof(check));
        memset(c,0,sizeof(c));
        for(int i = 1;i <= m;i ++){
            int k,h;
            cin >> k >> h;
            t[k].push_back(h);
            t[h].push_back(k);
        }
        dfs(t,u,v,check,c);
         output(c,u,v);
    }
}