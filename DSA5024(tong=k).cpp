#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
void output(int n,int k){
    long long d[k+1]; memset(d,0,sizeof(d));  // để lưu các trường hợp tạo thành tổng từ a (chạy từ 1 -> k)
    int a[n+1]; 
    for(int i = 0;i < n;i ++) cin >> a[i]; 
    d[0] =1;  // d[0] bao giờ cũng có 1 trường hợp 
    for(int i= 1;i <= k; i++){   // tạo các trường hợp từ 1 đến tổng k 
        for(int j =0;j < n;j ++){  
              if(i >= a[j]) d[i] = (d[i]+d[i-a[j]])%mod;     // tìm các trường hợp tạo thành tổng k từ mảng a;
        }
    }
    cout << d[k] <<endl;
}
int main(){
    int x,n,k;
    cin >> x;
    while(x--){
        cin >> n >> k;
        output(n,k);
    }
}