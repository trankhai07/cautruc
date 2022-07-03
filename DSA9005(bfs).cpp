#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>v[],int j,int b[]){
    queue<int>q;
    q.push(j);
    cout << j <<" ";
    b[j]=1;
    while(q.empty() != 1){
        int x = q.front();
        q.pop();
        for(int i = 0;i < v[x].size();i ++){
            if(b[v[x][i]] == 0){
                cout << v[x][i] <<" ";
                b[v[x][i]] =1;
                q.push(v[x][i]);
            }
        }
    }
    
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >> n >>m >> z;
        vector<int>v[1005];
        int b[n+1];
        memset(b,0,sizeof(b));
        for(int i = 1;i <= m;i ++ ){
            int k,y; cin >> k >> y;
           v[k].push_back(y);
           v[y].push_back(k);
        }
       bfs(v,z,b);
       cout << endl;
    }
    return 0;
}