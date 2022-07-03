#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1;i <= n;i ++ ) cin >> a[i];
    sort(a+1,a+n+1);
    int tich1 = a[1]*a[2];
    int tich2 = a[n]*a[n-1];
    int m1= max(tich1,tich2);
    int m2 = max(m1,a[n-1]*a[n-2]*a[n]);
    int m3 = max(m2,a[1]*a[2]*a[n]);
    cout << m3 << endl;
return 0;
}