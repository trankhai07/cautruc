#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 0;i < n;i ++ ) {
            cin >> a[i];
        }
        sort(a,a+n);
      int cn2 = n,x=n/2-1;
      for(int j =n-1;j >=n/2 ;j --){
          for(int i = x; i >= 0;i --)
             if(a[j] >= 2*a[i]){
              cn2--; x =i-1;;
             break;
            }
      }
       cout << cn2 <<endl;
    }
} 