#include<bits/stdc++.h>
using namespace std;
void output(int a[][505],int n,int m){
    int c[505][505];
    int Max =INT_MIN;
    c[0][0]=0;      // thuật toán đi từ 1 điểm lan ra kiểm tra xem các đỉnh xung quanh có bằng 1 hay ko
                      // vd     1 1
                      //        1 2
    for(int i = 1;i <= n;i ++) c[i][0]=a[i][1];
    for(int j =1;j <= m;j ++) c[0][j] = a[1][j];
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m;j ++){
             if(a[i][j]==1) c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]))+1; // lấy phần tử min trong 3 điểm trên 
             else c[i][j] =0;
             Max=max(c[i][j],Max);
        }
    }
    cout << Max <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[505][505];
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= m;j ++) cin >> a[i][j];
        }
        output(a,n,m);
    }
}