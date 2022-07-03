#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int kt =0;
    for(int i =0;i < n-1;i ++ ){
        for(int j = i+1; j < n;j ++ ){
            if(a[i] == a[j]){
                cout << a[i];
                kt=1;
                break;
            }
        }
        if(kt == 1) break;
    }
    if(kt == 0) cout <<"NO\n";
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i =0;i < n;i ++ ) cin >> a[i];
        output(a,n);

    }
  return 0;

}