#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
bool check(int b[],int j,int p){
    b[j] = 1;
    for(int i=0; i< v[j].size();i ++){
        if(!b[v[j][i]]){
            if(check(b,v[j][i],j)) return true;
        }
        else if(p != v[j][i]) return true;
    }
    return false;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        for(int i = 1;i <= m;i ++){
                int k,h;cin >>k >> h;
                v[k].push_back(h);
                v[h].push_back(k);
        }
        int b[1005];
        int kt =0;
        for(int i = 1;i <= n;i ++){
            memset(b,0,sizeof(b));
            if(check(b,i,0)){
                cout << "NO\n";
                kt =1;
                break;
            }
        }
        if(kt == 0) cout << "YES\n";
        for(int  i =1;i <= n;i ++) v[i].clear();
    }
}