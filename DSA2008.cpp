// test chỉnh theo git 
#include<bits/stdc++.h>
using namespace std;
int t= 0;
vector<vector<int>>v;
void output(int a[][105],int n,int k,int b[]){
  
        long sum = 0;
        for(int j = 1;j <= n;j ++ ){
            sum+=a[j][b[j]];
        }
        if(sum == k){
            t++;
            vector<int>s;
            for(int i =1;i <= n;i ++ ){
                s.push_back(b[i]);
            }
            v.push_back(s);
        }
      
}
void try_t(int j,int b[],int c[],int a[][105],int n,int k){
    for(int i = 1;i <= n;i ++ ){
        if(c[i] != 0){
            b[j] = i;
            c[i] = 0;
            if(j == n){
                output(a,n,k,b);
            }
            else try_t(j+1,b,c,a,n,k);
            c[i]=1;
        }
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[105][105];
    int b[n+1],c[n+1];
    b[0]=0;
    for(int i =1;i <= n;i ++ ) {
        b[i] = i;
        c[i] = 1;
    }
    for(int i = 1;i <= n;i ++ ){
        for(int j = 1;j <= n;j ++ ) cin >> a[i][j];
    }
    try_t(1,b,c,a,n,k);
    cout <<t <<endl;
    for(int i = 0;i < v.size();i++){
        for(int j = 0;j < n; j ++) cout << v[i][j] <<" ";
        cout <<endl;
    }
    return 0;
}