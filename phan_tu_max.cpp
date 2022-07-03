#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        int a[x+1];
        for(int i = 0;i < x; i++ ) cin >> a[i];
        sort(a,a+x,greater<int>());
        for(int i = 0;i <y;i ++ ) cout << a[i] <<" ";
        cout << endl;
    }
    return 0;
}