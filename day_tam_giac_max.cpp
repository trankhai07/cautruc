#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int cn= 1;
    int Max = INT_MIN;
   for(int i =0 ;i < n-1;i ++ ){
       cn =1;
       if(a[i] < a[i+1]){
           while(a[i] < a[i+1] && i <n-1){
               i++;
               cn++;
           } 
           while(a[i] > a[i +1 ] && i <n-1){
               cn++; i ++;
           }
           i--;
       }
       else if(a[i] > a[i+1]){
           while(a[i] > a[i+1] && i < n-1){
               cn++;
               i++;
           }
           i--;
       }
       Max = max(Max,cn);
   }
   cout <<Max;

}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 0;i < n; i ++ ) cin >> a[i];
        output(a,n);
        cout << endl;
    }
    return 0;
}