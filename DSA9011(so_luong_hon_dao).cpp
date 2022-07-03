#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int b[505][505];
int c[]={-1,0,1,-1,1,-1,0,1};
int h[]={-1,-1,-1,0,0,1,1,1};
void dfs(int i,int j,int n,int m){
    b[i][j] =1;
    for(int l = 0;l < 8;l ++){
        int i1 = i+h[l];
        int j1 = j+c[l];
        if(b[i1][j1] == 0 && a[i1][j1] == 1 && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <=m){
            dfs(i1,j1,n,m);
        }
    }
}
int main(){
    int x,n,m;
   cin >> x;
   while(x--){
       cin >> n >> m;
       vector<int>v[1005];
       memset(b,0,sizeof(b));
       for(int i = 1;i <= n;i ++){
           for(int j =1;j <= m;j++){
               cin >> a[i][j];
           }
       }
       int cn =0;
       for(int i = 1;i <= n;i ++){
           for(int j = 1;j <= m;j ++){
               if(b[i][j] == 0 && a[i][j] == 1){
                   cn++;
                   dfs(i,j,n,m);
               }
           }
       }
        cout << cn <<endl;
   }
}