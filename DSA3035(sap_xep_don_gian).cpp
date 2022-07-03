#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
   int a[n+1]={0}; int result = INT_MIN;
    for(int i = 1;i <= n;i ++ ){
        int k; cin >> k;
        a[k]=a[k-1]+1;            // tìm dãy con tăng dài nhất (vd a[4] = a[3] +1) làm theo cách này vì dãy đặc biệt chạy từ 1->n
       result = max(a[k],result);    // so sánh tìm dãy dài nhất
    } 
    cout << n-result <<endl;
}