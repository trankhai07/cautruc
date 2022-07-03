#include<bits/stdc++.h>
using namespace std;
int kt =0;
void dfs(vector<int>v[],int b[],int j,int par){
    b[j]=1;
   for(int i = 0;i < v[j].size();i ++){
       if(b[v[j][i]] != 1){
           dfs(v,b,v[j][i],j);
       }
       else if(b[v[j][i]] == 1 && v[j][i] != par) kt =1;  // khi chạy thì phần đỉnh đã đc kiểm tra mà khác phần cha của gốc thì có chu trình 
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
        int b[1005] ;memset(b,0,sizeof(b));
        for(int i = 1;i <= n;i ++){
        if(b[i] == 0){
           dfs(v,b,i,0);
            if(kt == 1){
               cout << "YES\n"; 
               break;
            } 
        }
        }
       if( kt == 0) cout <<"NO\n";
         kt =0;
    }
    return 0;
}