#include<bits/stdc++.h>
using namespace std;
long long s[30][30]; 
// tạo bảng 25*25 lấy hai cột chéo cộng nhau 
// số cách cần tìm là vị trí n hàng m cột trong mảng 2 chiều
void table(){
    s[0][0] = 0;     
    for(int i =1;i <= 25; i++){
        s[0][i]=s[i][0] = 1;
    }
    for(int i = 1;i <= 25;i ++){
        for(int j = 1;j <= 25;j ++)
         s[i][j] = s[i][j-1] + s[i-1][j];
    }
}
int main(){
    int x,n,m;
    cin >> x;
    table();
    while(x--){
        cin >> n >> m;
        cout << s[n][m] <<endl;
    }
}