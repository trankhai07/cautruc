#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>v[],int j,int b[]){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i ++){
        if(b[v[j][i]] != 1) dfs(v,v[j][i],b) ;
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[n+1];
        for(int i =1;i <= m;i ++){
            int k,h;
            cin >> k >> h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
        int b[n+1],cn =0; memset(b,0,sizeof(b));
        for(int i = 1;i <= n;i ++){
            if(b[i] != 1){
                cn ++;
                dfs(v,i,b);
            }
        }
        int coun =0;
        for(int i = 1;i <= n;i ++){
            memset(b,0,sizeof(b));
            coun =0; b[i] =1;
            for(int i = 1;i <= n;i ++){
                if(b[i] != 1){
                    coun ++;
                    dfs(v,i,b);
                }
            }
            if(coun > cn ) cout << i <<" ";
        }
        cout << endl;
    }
}