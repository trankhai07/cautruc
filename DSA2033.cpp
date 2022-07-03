#include<bits/stdc++.h>
using namespace std;

void output(int a[],int n){
    int kt =0;
    for(int  i= 1;i < n;i ++ ){
        if(abs(a[i]-a[i+1]) == 1){
            kt =1;
            return ;
        }
    }
    if(kt ==0 ){
       
        for(int i = 1;i <= n; i ++) cout << a[i];
        cout <<endl;
    }
}
void quay_lui(int a[],int b[],int n,int j){
    for(int i = 1;i <= n;i ++ ){
        if(b[i] != 0){
            b[i] = 0;
          a[j] = i;
          if(j == n) output(a,n);
          else quay_lui(a,b,n,j+1);
          b[i] = 1;
        }
        
    }
}
int main(){
    int x,n;
    cin >> x ;
    while(x--){
        cin >> n;
        int a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++ ){
            b[i] =1;
             a[i]= i;
        }
        quay_lui(a,b,n,1);
    }
    return 0;
}