#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    cout << a[1];
    for(int i = 1;i < n;i ++ ){
        if(a[i+1] == 1 && a[i] == 1 ) cout <<"0";
        else cout <<a[i]+a[i+1];
    }
    cout <<" ";
}
void nhi_phan(int a[],int n,int j){
    for(int i = 0; i <= 1;i ++ ){
        a[j] =i;
        if(j == n){
          output(a,n);
        }
        else nhi_phan(a,n,j+1);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        nhi_phan(a,n,1);
        cout<<endl;
    }
    return 0;
}