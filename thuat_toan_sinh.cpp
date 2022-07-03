#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n){
    int up = 1,down = n;
    while(up <= down){
        if(a[up] != a[down]) return 0;
        up++; down--;
    }
    return 1;
}
void output(int a[],int n){
    if(check(a,n) == 1) {
        for(int i = 1;i <= n;i ++ ){
            cout << a[i] << " ";
        }
        cout <<endl;
    }
}
void sinh_hoan_vi(int j,int n,int a[]){
   for(int i = 0;i <= 1;i ++ ){
       a[j] = i;
       if(j == n) output(a,n);
       else sinh_hoan_vi(j+1,n,a);
   }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    sinh_hoan_vi(1,n,a);
    return 0;
}