#include<bits/stdc++.h>
using namespace std;
void input(int a[],int n){
    for(int i =0;i < n;i ++ ) cin >> a[i];
}
int creater(int b[],int m,int x,int c[]){
    if(x == 0) return 0;   // nếu x == 0 thì không có số nào
    if(x == 1) return c[0];    // nếu x ==  1 thì chỉ có số 0
    auto it = upper_bound(b,b+m,x);  // tìm giá trị đầu tiên lớn hơn x ( rồi lấy từ cuối trừ đi => số lượng giá trị lớn hơn x)
    int result = (b+m) - it;
    result +=(c[0]+c[1]);    // cộng vs số lượng số y =0 và y =1
    if(x == 2) {    
        result-=(c[3]+c[4]);  // trừ đi trường hợp đặc biệt của y> x thì x^y > y^x  
    }
    if(x== 3) result +=c[2];   // trường hợp của số bé hơn x mà x^y > y^x( x= 3 và y =2)
    return result;
}
void output(int a[],int b[],int n,int m){
    sort(b,b+m);  // sắp xếp tăng dần để tìm số phần tử lớn hơn x
    int c[5] ={0}; // tạo 1 mảng lưu trữ số lượng phần tử
    for(int i = 0;i < m;i ++ ){
        if(b[i] < 5)   // chọn những số nhỏ hơn 5 những truowg hợp >= 5 tuân theo quy tắc y > x thì x^y > y^x
          c[b[i]]++;
    }
    int result =0;
    for(int i = 0;i < n;i ++){
        result += creater(b,m,a[i],c);   // cộng các trường hợp của mảng a chạy trong mảng b
    }
    cout << result<<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1],b[m+1];
        input(a,n); input(b,m);
        output(a,b,n,m);
    }
}