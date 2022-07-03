#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
   int Max = INT_MIN;
   int c[n+1]={0};
    for(int i = 1;i <= n;i ++ ){
       c[i]=a[i];
        for(int j =1;j < i;j ++){
            if(a[i] > a[j]){
                 c[i]=max(c[j]+a[i],c[i]);  
            }
            Max = max(Max,c[i]);
        }
    }
    cout << Max <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++ ){
            cin >> a[i];
        } 
        output(a,n);
    }
}