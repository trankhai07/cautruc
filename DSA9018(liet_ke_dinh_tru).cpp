#include<bits/stdc++.h>
using namespace std;
void dfs(int j,vector<int>v[],int a[]){
       a[j]=1;
    for(int i = 0;i < v[j].size();i ++){
        if(a[v[j][i]] != 1) dfs(v[j][i],v,a);
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i= 1;i <= m;i ++){
            int k,h; cin >>k >> h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
        int lt =0;
        int a[n+1]; memset(a,0,sizeof(a));
        for(int i = 1;i <= n;i ++){
            if(a[i] == 0){
                lt++;
                dfs(i,v,a);
            }
        }
        for(int i = 1;i <= n;i ++){
            memset(a,0,sizeof(a));
            a[i]=1;int cn =0;
            for(int j = 1;j <= n;j ++){
                 if(a[j] == 0){
                     cn++;
                     dfs(j,v,a);
                 }
            }
            if(cn > lt) cout << i <<" ";
        }
        cout <<endl;
    }
}