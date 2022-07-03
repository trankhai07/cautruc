#include<bits/stdc++.h>
using namespace std;
int Max;
void dfs(vector<int>v[],int b[][100],int j,int dem ){
        Max = max(dem,Max);
       for(int i = 0;i < v[j].size();i++){
           if(b[v[j][i]][j] == 0 && b[j][v[j][i]] == 0){
                  b[v[j][i]][j] =  b[j][v[j][i]] =1;
                   dfs(v,b,v[j][i],dem+1);
                b[v[j][i]][j] =  b[j][v[j][i]] =0;
           }
       }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        vector<int>v[100];
        for(int i = 1;i <= m;i ++ ){
            int a,b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
         Max = INT_MIN;
        int b[100][100];
     
        for(int i = 0;i < n;i++){
            memset(b,0,sizeof(b));
            int dem =0;
            dfs(v,b,i,dem);
        }
        cout << Max <<endl;
    }
}