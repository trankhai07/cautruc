#include<bits/stdc++.h>
using namespace std;
void hoan_vi(int a[],int x){
   int i,kt =0;
       for(i = x; i >= 1;i --){
           if(i == 1){
               kt =1;
           }
           if(a[i] > a[i-1]) break;
       }
       if(kt == 1){
           for(int l = 1; l <= x;l ++ ) cout << l <<" ";
       }
       else{
       for(int j = x;j >= i; j--){
           if(a[j] > a[i-1]){
               swap(a[j],a[i-1]);
               sort(a + i,a+x+i);
               for(int o = 1; o <= x; o ++ ) cout << a[o] <<" ";
           }
       }
       }
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >>x;
      int a[x+1];
      for(int i = 1;i <= x;i ++ ){
          cin >> a[i];
      }
     hoan_vi(a,x);
      cout <<endl;
    }
    return 0;
}