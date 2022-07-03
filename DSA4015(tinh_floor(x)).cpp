#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    long long m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        long long  a[n+1];
        int index=-1;
        for(int i = 1;i <= n;i ++ ) {
            cin >> a[i];
            if(m >=a[i] ) index=i;
        }
       cout <<  index <<endl;
    }
    return 0;
}