#include<bits/stdc++.h>
using namespace std;
int sum = INT_MIN;
int v[22];
void quay_lui(int a[][10],int c[],int h[],int xuoi[],int nguoc[],int j){
    for(int i = 1;i <= 8;i ++){
        if(c[i] != 1 && h[j] != 1 && xuoi[j+i-1] != 1 && nguoc[j-i+8] != 1){
            c[i] = h[j] = xuoi[j+i-1] = nguoc[j-i+8] = 1;    // đánh dấu các vị trí mà con hậu có thể đi
            v[j] = i;    // lưu vị trí mà con hậu đó được đặt theo hàng cột
            if(j == 8){     
                int s =0;
                for(int l = 1;l <= 8;l ++ ){
                    s+=a[l][v[l]];
                }
               sum = max(s,sum);
            }
            else quay_lui(a,c,h,xuoi,nguoc,j+1);
            c[i] = h[j] = xuoi[j+i-1] = nguoc[j-i+8] = 0;
        }
    }
}
int main(){
    int n; cin >> n;
    while(n--){
    int a[10][10];
    int c[22]={0},h[22]={0},xuoi[22]={0},nguoc[22]={0};
    for(int i = 1;i <= 8;i ++ ){
        for(int j = 1;j <= 8; j ++ ) cin >> a[i][j];
    }
    quay_lui(a,c,h,xuoi,nguoc,1);
    cout << sum <<endl;
    sum = INT_MIN;
    }
    return 0;
}