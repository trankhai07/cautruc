#include<bits/stdc++.h>
using namespace std;
int c[1005][1005];
void floyd(int n,int m ){
    for(int k = 1; k <= n; k++)
      for(int i = 1;i <= n;i ++)
         for(int j =1;j <= n;j ++)
            if(c[i][j] > c[i][k] + c[k][j])   
              c[i][j] = c[i][k] + c[k][j];
    
}
int main(){
    int n,m;
     cin >> n >> m;
    for(int i =1;i <= n;i ++){
        for(int j =1;j <= n; j++){
            if(i == j) c[i][j] =0;
            else c[i][j] = 1e9;
        }
    }
    for(int i =1;i <= m;i ++){
        int u,v,z;
        cin >> u >> v >> z;
        c[u][v] = c[v][u] = z;
    } floyd(n,m);
    int k; cin >> k;
    while(k--){
        int x,y; cin >> x >> y;
        cout << c[x][y] << endl;
     }
}
    