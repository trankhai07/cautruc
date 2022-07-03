#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int visted[1005][1005];
int  output(int n,int m){
   queue<pair<int,int>>q;
   pair<int,int>pp = {n,m};
   
    memset(visted,0,sizeof(visted));
   visted[1][1] =1;
   int cn =0;
   q.push({1,1});
   while(q.empty() != 1){
       int size = q.size();
       for(int i = 0;i < size;i ++){
           pair<int,int>pa = q.front(); q.pop();
           if(pa == pp) return cn; int x,y;
           for(int k = 0;k <3;k ++){
               if(k == 0){
                   x= pa.first + abs(a[pa.first][pa.second] - a[pa.first+1][pa.second]);
                   y =  pa.second;
               }
               else if(k == 1){
                    x = pa.first ;
                    y = pa.second + abs(a[pa.first][pa.second] - a[pa.first][pa.second+1]);
               }
               else if(k == 2){
                   x = pa.first +  abs(a[pa.first][pa.second] - a[pa.first+1][pa.second+1]);
                   y = pa.second + abs(a[pa.first][pa.second] - a[pa.first+1][pa.second+1]);
               }
               if(x  >= 1 && y >= 1 && x <= n && y <= m && visted[x][y] != 1){
                   q.push({x,y}); 
                   visted[x][y] =1;
               }
           }
       }
       cn++;
   }
   return -1;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++) cin >> a[i][j];
        }
       cout <<  output(n,m) << endl;
    }
}
