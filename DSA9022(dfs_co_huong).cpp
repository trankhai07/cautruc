#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>v[],int j,int b[]){
    cout << j <<" ";
    b[j]=1;
    for(int i = 0;i < v[j].size();i++){
        if(b[v[j][i]] == 0) dfs(v,v[j][i],b);
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
          // v[y].push_back(k);
        }
       dfs(v,z,b);
       cout << endl;
    }
    return 0;
}