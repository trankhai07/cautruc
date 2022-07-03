#include<bits/stdc++.h>
using namespace std;
void output(int n){
    int b[n+1];
    for(int i = 0;i <= n;i ++) b[i]=i;
    for(int i = 1;i  <= n;i ++){
        for(int j = 1;j <= sqrt(i);j ++){   // nghiệm chỉ lấy đến căn 
            b[i]=min(b[i],b[i-j*j] +1);      // i - j*j = x ( x là một nghiệm trong các tổng nghiệm bình phương ) 
             // x được tính toán phía trước  thành các tổng bình phuog ( nên theo phương pháp quy hoạch động ta chỉ cần lưu vào bảng table khi cần thì lấy nó dùng lại) 
              // cộng thêm 1 là để tính thêm nghiệm j*j
        }
    }
    cout << b[n] <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
     cin  >> n;
     output(n);
    }
}