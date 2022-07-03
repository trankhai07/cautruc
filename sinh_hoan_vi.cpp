#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    for(int i= 1; i<= n;i ++ ) cout << a[i] ;
    cout <<" ";
}
void sinh_hoanvi(int a[],int b[],int n,int j){
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 1){
            a[j] = i;
            b[i] = 0;
            if(j == n) output(a,n);
            else sinh_hoanvi(a,b,n,j+1);
            b[i] =1;
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++ ){
            a[i] = i;
            b[i] =1;
        } 
        sinh_hoanvi (a,b,n,1);
        cout <<endl;
    }
    return 0;
}