#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        int a[x+1];
       int t= 0;
        for(int i = 0;i < x;i ++ ) {
            cin >> a[i];
            if(y == a[i]){
                   t++;
            }
        }
        if(t == 0) cout << "-1\n";
        else cout <<t <<endl;
    }
}