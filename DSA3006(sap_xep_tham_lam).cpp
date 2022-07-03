#include<bits/stdc++.h>
using namespace std;
int output(int a[],int b[],int n){
    int x = n/2 +1;
   // if(a[x] != b[x]) return 0;
  //  else{
        int k = n;
        for(int i = 1;i < x;i ++ ){
           if(a[i] == b[i]){
               if(a[k] != b[k] ) return 0;
           }
           else{
               if(a[i] != b[k] ) return 0;
           }
           k--;
        }
        return 1;
   // }
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++ ){
            cin >> a[i];
            b[i] =a[i];
        }
        sort(b+1,b+n+1);
        if(output(a,b,n)) cout <<"Yes\n";
        else cout << "No\n";
    }

}