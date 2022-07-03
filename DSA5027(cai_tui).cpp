#include<bits/stdc++.h>
using namespace std;
struct data{
  int A =0,C= 0;
};
int dp[1005][1005];
int n,m;
void output(data x[]){
    int res= INT_MIN;
    for(int i = 1;i <= n; i++ ){    //liên quan đến vị trí của túi 
        for(int j = 1;j <= m;j ++ ){ // involve to thể tích tối đa có thể đạt được
           if(j < x[i].A) dp[i][j] = dp[i-1][j];
           else{
               dp[i][j] = max(dp[i-1][j],dp[i-1][j-x[i].A] + x[i].C);
           }
         //  res = max(res,dp[i][j]);
        }
    }
   // cout << res <<endl;
   cout << dp[n][m] <<endl; //ko cần dùng hai max vì mỗi lần chạy tao luôn phải tìm d[i][j] lớn nhất 
                               // khi kết thúc chướng trình thì lớn nhất chính là hàng n cột m
}
int main(){
    int x; cin >> x;
    while(x--){
        cin >> n >> m;
        data x[1005];
        for(int i = 1;i <= n;i ++ ){
            cin >> x[i].A;
        }
        for(int i = 1;i <= n;i ++ ) cin >> x[i].C;
        output(x);
    }
    return 0;
}