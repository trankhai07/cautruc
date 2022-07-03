#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
   sort(a,a+n);
   int Min = INT_MAX;
   for(int i = 0;i < n-1;i ++ ){
      if(Min > a[i+1] - a[i]){
          Min = a[i+1] -a[i];
      }
   }
   cout << Min<<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        int a[n+1];
        for(int i =0;i < n;i ++ ) cin >> a[i];
        output(a,n);

    }
  return 0;

}