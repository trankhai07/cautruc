#include<bits/stdc++.h>
using namespace std;
int kt =0;
void  dfs(vector<int>v[],int b[],int j,int c[]){
    b[j] = 1;
    for(int i = 0;i < v[j].size();i++ ){
        if(b[v[j][i]] == 0){
           c[v[j][i]] = j;
         dfs(v,b,v[j][i],c) ;
          // return true;
        }
        else{
            if( c[j] != v[j][i] && v[j][i] == 1){
                kt= j;
               return ;  
            }
        }
    }
  //  return false;
}
void output(int c[]){
    vector<int>ct;
    int t = kt;
  while(t != 1){
   ct.push_back(t);
   t = c[t];
  }
   reverse(ct.begin(),ct.end());
   cout << "1 ";
   for(int i = 0;i < ct.size();i ++) cout  << ct[i] <<" ";
   cout <<"1\n";
}
int main(){
    int x,n,m;
    cin >> x ;
    while(x--){
        cin >>n >> m;
        vector<int>v[1005];
        int b[1005],c[1005];
        memset(c,0,sizeof(c));
        memset(b,0,sizeof(b));
        for(int i = 1;i <= m;i ++ ){
            int k,h;  cin >> k >>h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
     dfs(v,b,1,c);
     if(kt != 0)
     output(c);
     kt = 0;
    }
}