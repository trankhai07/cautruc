#include<bits/stdc++.h>
using namespace std;
bool hamiltol(vector<int>v[],int di[],int b[],int k,int n){
    if(k == n) return true;
    if(k < n){
        for(int i = 0;i <v[di[k-1]].size();i ++){
            int t = v[di[k-1]][i];
            if(b[t]!= 1){
                  b[ t ] =1;
                  di[k] =t;
               if( hamiltol(v,di,b,k+1,n)) return true; 
                b[t] = 0;
            }
        }
    }
    return false;
}
bool check(vector<int>v[],int n,int m){
    int b[1005]; 
    int di[1005];
    for(int i = 1;i <= n;i ++){
        memset(b,0,sizeof(b));
        di[0]=i;
        b[i] =1;
        if(hamiltol(v,di,b,1,n)) return true;
    }
    return false;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i = 1;i <= m;i ++){
            int p,t; cin >> p >> t;
            v[p].push_back(t);
            v[t].push_back(p);
        }
        if(check(v,n,m)) cout <<"1\n";
        else cout <<"0\n";
    }
}