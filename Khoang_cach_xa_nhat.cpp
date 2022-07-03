#include<bits/stdc++.h>
using namespace std;
void output(int a[],int x){
    int Max = INT_MIN;
    for(int i = 0;i < x;i ++ ){
      int t = x-1;
      while(a[i] > a[t]){
          t--;
      }
      if(Max < t- i && a[t]  > a[i]) Max = t-i;
    }
    if(Max == INT_MIN) cout <<"-1";
    else cout << Max ;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
        for(int i = 0;i < x;i ++ ) cin >> a[i];
        output(a,x);
        cout <<endl;
    }
    return 0;
}