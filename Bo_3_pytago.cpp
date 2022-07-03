#include<bits/stdc++.h>
using namespace std;
void output(long long a[],int x){
    sort(a,a+x);
    for(int i = 0;i < x;i ++) a[i]*=a[i];
    int kt =0;
    for(int i = x-1;i >= 3;i--){
    long long  sum = a[i ];
    int l = 0,r=i-1;
      while(l < r){
         if(sum > a[l] + a[r]) l++;
         else if(sum < a[l] + a[r]) r--;
         else if(sum == a[l] + a[r]){
             kt =1;
             cout << "YES";
             break;
         }
      }
      if(kt == 1) break;
    }
    if(kt == 0) cout <<"NO";
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        long long  a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
        output(a,x);
        cout << endl;
    }
    return 0;
}