#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >> n >> m >> z;
        if(m*z > n*(m-m/7)) cout << "-1\n";  // kiểm tra xem số thức ăn cần có đủ với số cung hay không (tại ngày chủ nhật không bán)
        else{
           for(int i = 1;i <= m;i ++ ){
               if(i*n >= m*z) {     // tìm số ngày bán ít nhất để đủ ăn mà không bị chết đói 
                   cout << i<<endl;   // m*z là số lương thực cần , i*n là ngày cần bán 
                   break;
               }
           }
        }
    }
    return 0;
}