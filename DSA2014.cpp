#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int h[8]={-1,-1,-1,0,0,1,1,1};
int c[8] ={-1,0,1,-1,1,-1,0,1};
void quay_lui(int i,int j,int a[][5],char kt[][4],int n,int m,int z,string s[],string t ){
      for(int l =1;l <= n;l ++ ){
          if(t == s[l]) v.push_back(t);
      }
      for(int l= 0; l< 8;l ++ ){
          int i1= h[l]+i;
          int j1 =c[l] +j;
          if(i1 <= m && i1 >= 1 && j1 <= z && j1 >= 1 && a[i1][j1] == 0 ){
              a[i1][j1] = 1;
              quay_lui(i1,j1,a,kt,n,m,z,s,t+kt[i1][j1]);
              a[i1][j1] =0;
          }
      }
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >>  n >> m >> z;
        string s[105];
        for(int i = 1;i <= n;i ++ ){
            string k; cin >> k;
            s[i] = k;
        }
        char kt[4][4];int a[5][5];
        for(int i = 1;i <= m;i ++ ){
            for(int j =1;j <= z; j ++){
                cin >> kt[i][j];
            } 
        }
      
        for(int i = 1;i <= m;i ++ ){
            for(int j =1;j <= z; j ++){
               string t=""; memset(a,0,sizeof(a));
                a[i][j] =1;
               quay_lui(i,j,a,kt,n,m,z,s,t+kt[i][j]);
            } 
        }
        if(v.size() == 0) cout <<"-1\n";
        else{
        for(int i = 0;i < v.size();i ++ ) cout << v[i] <<" ";
        cout <<endl;
        }
        v.clear();
    }
}