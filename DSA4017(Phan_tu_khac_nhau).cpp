#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        long long a[n+1];
        long long b[n+1];
        int index =0;
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        for(int j = 1;j < n;j ++ ){
            cin >> b[j];
            if(b[j] != a[j] && index == 0) index = j;
        }
        cout << index <<endl;
    }
}