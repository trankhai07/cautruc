#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m){
    sort(a,a+n);
   long long cn=0;
    for(int i = 0;i < n;i ++ ){
        int x= m+a[i];
        auto it = lower_bound(a+i,a+n,x);    // tìm giá trị đầu tiên lớn hơn tổng 
        int y = it - a -i -1;                            // sau đó đưa ra vị trí rồi trừ vị trí đi 1 là ra số bé hơn tổng
        if(y >= 1) cn+=y;            // y phải lớn hớn = 1 mới đc cộng
    }
    cout << cn;
}
int main(){
    int x; cin >>x;
    while(x--){
        int n,m;
        cin >> n >> m;
        int a[n+1];
        for(int i = 0;i < n;i ++ ) cin >> a[i];
        output(a,n,m);
        cout << endl;
    }
    return 0;
}