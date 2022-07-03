#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n){
    for(int i = 1;i <= n;i ++ ) cin >> a[i];
}
vector<int>v;
int sum =INT_MIN;
void sinh_nhiphan(int a[],int b[],int c[],int n,int m,int j){
    for(int i =0;i <= 1; i++ ){
        c[j] = i;
        if(j == n){
            int s = 0,t=0;
            for(int l = 1;l <= n; l ++ ){
                if(c[l] == 1){
                    t+=b[l];
                    s+= a[l];
                }  
            }
          if(t <= m && sum < s ){
              v.clear();
              sum = s;
              for(int l = 1;l <= n; l++){
                v.push_back(c[l]);
              }
          }
        }
        else sinh_nhiphan(a,b,c,n,m,j+1);
    }
}
int main(){
    int n,m;
    cin >> n >>  m;
    int a[n+1],b[n+1],c[n+1];
    input(a,n); input(b,n);
    sinh_nhiphan(a,b,c,n,m,1);
    cout << sum <<endl;
    for(int i = 0;i < v.size();i ++ ) cout << v[i] <<" ";
    return 0;
}