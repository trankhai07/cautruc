#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n,m,z;
    cin >>x;
    while(x--){
        cin >> n >> m >> z;
        int a[n+m+1];
        for(int i = 1;i <= n+m;i ++ ) cin >> a[i];
        sort(a+1,a+n+m+1);
        cout << a[z] <<endl;
    }
    return 0;
}