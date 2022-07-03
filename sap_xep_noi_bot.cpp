#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int kt ;
    for(int i = 0; i < n -1; i++ ){
        kt = 0;
        for(int j = 0;j < n-i-1;j ++ ){
           if(a[j] > a[j+1]){
               swap(a[j],a[j+1]);
               kt =1;
           }
        }
        if(kt == 0) break;
        cout << "Buoc "<<i+1<<": ";
        for(int i = 0;i < n;i ++ ) cout << a[i] <<" ";
        cout <<endl;
    }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i  = 0;i < n;i ++ ) cin >> a[i];
    output(a,n);
    return 0;
}