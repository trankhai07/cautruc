#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        sort(a+1,a+n+1);
        cout << a[n/2]<<endl;
    }
}