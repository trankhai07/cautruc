#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    sort(a,a+x);
    if(a[0] == a[1]) cout << "-1";
    else cout << a[0] <<" "<<a[1];
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x; i++ ) cin >> a[i];
        output(a,x);
        cout <<endl;
    }
    return 0;
}