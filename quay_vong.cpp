#include<bits/stdc++.h>
using namespace std;
void output(long long  a[],int x){
    int cn =0;
    for(int i = 1;i < x;i ++ ){
       if(a[i+1]-a[i] < 0){
           cn = i; break;
       }
    }
   cout << cn <<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        long long a[n+1];
        for(int i = 1;i <= n;i ++ ){
            cin >> a[i];

        }
        output(a,n);
    }
    return 0;
}