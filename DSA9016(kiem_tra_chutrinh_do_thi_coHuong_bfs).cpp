#include<bits/stdc++.h>
using namespace std;
int cn =0;
void  dfs(vector<int>v[],int j,int b[]){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i ++){
        if(b[v[j][i]] == 0){
            dfs(v,v[j][i],b);
        }
        else if(b[v[j][i]] == 1 ) cn =1;
    }
    b[j] =2;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i = 1;i <= m; i ++){
            int k,h;  cin >> k >> h;
            v[k].push_back(h);
          //  v[h].push_back(k);
        }
        int b[1005]; memset(b,0,sizeof(b)); cn =0;
        for(int i = 1;i <= n;i ++){   
           if(b[i] == 0){
               dfs(v,i,b);
               if(cn == 1){
                   cout << "YES\n";break;
               } 
           }
        }
        
        if(cn == 0)cout << "NO\n";
         }
         return 0;
    }