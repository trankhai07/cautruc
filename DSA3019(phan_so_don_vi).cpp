#include<bits/stdc++.h>
using namespace std;
void output(long long n,long long m){
    long long res;
    while(1){
        if(m % n == 0){
            cout <<"1/" <<m/n; // nếu m chia hết cho n thì chính là 1/(m/n)
            break;    // điều kiện dừng
        }
        else {  // ngc lại nếu ko chia hết 
          res = m/n+1; // lấy phần nguyên cộng thêm 1 
          cout <<"1/" <<res<<" + ";     
          n = n*res-m;    // lấy n/m - 1/res;
          m=m*res;
        }
    }
}
int main(){
    long long  x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        output(n,m);
        cout <<endl;
    }
    return 0;
}