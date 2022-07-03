#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int c[n+1] ;
    c[1] =a[1];
    c[2] = max(a[1],a[2]);
    for(int i =3;i <= n;i ++ ){
        c[i] = max(c[i-2]+a[i],c[i-1]);
    }
    cout << c[n] <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >>n;
        int a[n+1];
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        output(a,n);
    }
    return 0;
}