#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while (n--){
        int x,y;
        cin >> x >> y;
        int a[x+1],t=-1;
        for(int i = 1;i <= x; i++ ){
            cin >> a[i];
            if(a[i] == y){
               t = 1;
            }
        }
        cout << t <<endl;
    }
    return 0;
}