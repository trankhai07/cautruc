#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    sort(a+1,a+n);
    for(int l =1;l <= n; l++ ) cout << a[l] <<" ";
    cout <<endl;
    int i;
    while(1){
        for( i = n; i >= 1; i -- ){
            if(i == 1){
                break;
            }
            if(a[i] > a[i-1]) break;
        }
        if(i == 1) break;
        for(int j = n ; j >= i; j --){
            if(a[j] > a[i-1]){
                swap(a[j],a[i-1]);
                sort(a+i,a+n+1);
                for(int l = 1;l <= n;l ++ ) cout << a[l] <<" ";
                cout << endl;
                break;
            }
        }
    }
}
int main(){
         int n; cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        output(a,n);
}