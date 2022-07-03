#include<bits/stdc++.h>
using namespace std;
void output(int n){
   int x1 = 1e5,y1 = 1e5;
   int d1=0,d2=0;
   for(int i =0;i <= n;i ++){          // chạy từ 0 đến  n
       if(n >=4*i && (n-4*i) % 7 == 0){        // điều kiện i*4 phải bé hơn n và chia hết cho 7
             d1 =i; d2 = (n-4*i)/7;             // số lần suất hiện 4 ,số lân suốt hiện 7
             if(x1 + y1 > d1 + d2){           // vì là tìm số bé nhất nên nếu tổng lớn hơn thì đặt lại 
                 x1 = d1; y1 = d2;                // không dùng x1 + y1 <= d1 + d2 vì nó luôn đúng  vì i tăng dần 
             }
       }
   }
   if(x1*4 + y1*7 == n){                     // nếu tổng bằng n thì in ra kết quả 
       for(int i = 1;i <= x1; i++) cout <<"4";
       for(int i = 1;i <= y1;i ++) cout <<"7";
       cout << endl;
   }
   else cout <<"-1\n";         // ngc lại in ra -1
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        output(n);
    }
    return 0;
}