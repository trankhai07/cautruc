#include<bits/stdc++.h>
using namespace std;
void euler_dfs(int a[][100],int x,int n){
 stack<int>s,ce; 
 s.push(n);
  while(s.empty() != 1){
      int k = s.top();
      int temp = 0;
      for(int i = 1;i <= x;i ++ ){
             if(a[k][i] == 1){
                 a[k][i]=a[i][k] =0;
                 s.push(i);
                 temp = 1;
                 break;
             }
      }
      if(temp == 0) {
          ce.push(k);
          s.pop(); 
      }
  }
  while(ce.empty()!=1) {
      cout << ce.top()<<" ";
      ce.pop();
  }
}
int main(){
    int x,n;
    cin >> x >>n;
    int a[100][100];
    for(int i = 1;i <= x; i++ ){
        for(int j = 1;j <= x;j ++) cin >> a[i][j];
    }
    euler_dfs(a,x,n);
}