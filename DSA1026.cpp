#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
void output(int a[],int n){
    int t = 1;
    if(a[1] == 1 && a[n] == 0 || a[1]== 1 && a[n] == 1 || a[1] == 0 && a[n] == 0) return ; // 8-0 6-1
    for(int i = 1;i < n;i ++ ){
       if(a[i] == 0 && a[i+1] == 0 || t == 4){
           return ;
       }
      if(a[i] == 1 && a[i+1] == 1){
          t++;
      }
      else if(t <= 3 && a[i] != a[i+1]){
         
          t=1;
      }
    }
    if(t <= 3 ){
        long long s=0;
   for(int i = 1;i <= n;i ++ ){
       if(a[i] == 0) s =s*10 + 8;
       else s = s*10 + 6;
   }
   v.push_back(s);
}
}
void sinh_nhi_phan(int a[],int n,int j){
    for(int i = 0;i <= 1; i++ ){
        a[j] =i;
        if(j == n) output(a,n);
        else sinh_nhi_phan(a,n,j+1);
    }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    sinh_nhi_phan(a,n,1);
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size() ;i ++ ) cout << v[i] <<endl;
    return 0;
}