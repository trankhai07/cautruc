#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505];  // initialize an array that store the path 
int k = 1000000007;
int cl[]={0,-1,1,0};  // direction the path (sequentially from right to)
int r[]={-1,0,0,1};   // sequentially from top to bottom 
void bfs(int n,int m){
    queue<pair<int,int>>q;  // initialize an queue
    q.push({1,1});   // add vertice(1,1)
    b[1][1] =a[1][1];
    while(!q.empty()){ // check if the queue is empty to exit 
        pair<int,int>pa = q.front(); q.pop();  // choose the top 
        for(int i = 0;i < 4;i ++){   
            int i1 = pa.first + r[i];
            int j1 = pa.second + cl[i];
        if(i1 <= n && i1 >=1 && j1 <= m && j1 >=1 ){ 
            if(b[i1][j1] > b[pa.first][pa.second] + a[i1][j1] ){ // check if old value b[][] greater than  new value then reset that value  
                q.push({i1,j1}); b[i1][j1] = b[pa.first][pa.second]+a[i1][j1]; // push that position in queue 
            }
        }
        }
    }
    cout << b[n][m] <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++){
                cin >> a[i][j];
                b[i][j] = k; 
            } 
        }
        //memset(b,k,sizeof(b));
        bfs(n,m);
    }
}