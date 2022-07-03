#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int cn = 0; int Max = INT_MIN;
    for(int i = 1;i < n;i ++){
        cn =1;
       if(a[i] < a[i+1]){
           while(a[i] < a[i+1] && i < n){
               i++; cn ++;
           }
           while(a[i] > a[i+1] && i < n){
               i++; cn ++;
           }
           i--; // vd : 2 3 4 2 10 (đến số 2 là break thì i= 4 thì i++ lên là 5 phải trừ xuống 3 để tính từ i = 4)
       }
       else if(a[i] > a[i+1]){
           while(a[i] > a[i+1]){
               i++; cn++;
           }
           i--;
       }
       Max = max(Max,cn);
    }
    cout << Max << endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        output(a,n);
    }
}