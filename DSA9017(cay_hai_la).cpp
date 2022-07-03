#include<bits/stdc++.h>
using namespace std;
int cn =0;
void  dfs(vector<int>v[],int j,int b[],int p){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i ++){
        if(b[v[j][i]] != 1){
            dfs(v,v[j][i],b,j);
        }
        else if(v[j][i] != p ) cn =1;
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n ;
        vector<int>v[1005];
        for(int i = 1;i <= n-1; i ++){
            int k,h;  cin >> k >> h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
        int b[1005]; memset(b,0,sizeof(b)); cn =0;
        for(int i = 1;i <= n;i ++){   
           if(b[i] != 1){
               dfs(v,i,b,0);
           }
        }
        
        if(cn == 0)cout << "YES\n";
        else cout <<"NO\n";
         }
         return 0;
    }