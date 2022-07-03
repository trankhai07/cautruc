#include<bits/stdc++.h>
using namespace std;
int cn = 0;
void output(int a[],int n){
    int i;
    while(1){
        for(i = n;i >= 1;i--){
            if(i == 1) break;
            if(a[i] > a[i-1]) break;
        }
        if(i == 1) break;
        for(int j = n;j >= i;j -- ){
            if(a[j] >a[i-1]){
                swap(a[j],a[i-1]);
                sort(a+i,a+n+1);
                cn ++;
                break;
            }
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1],s=1;
        for(int i = 1;i <= n;i ++ ) {
            cin>> a[i];
            s*=i;
        }
        output(a,n);
        cout << s-cn <<endl;
        cn =0;
    }
    return 0;
}