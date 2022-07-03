#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m){
 long long  result =0;
  for(int i = 1;i <= n;i ++ ){
      int x= m+a[i];
      auto it = lower_bound(a+i,a+n+1,x);
      int k = it-a-1-i;
      if(k >= 1)
      result+=k;
  }
  cout << result <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[n+1];
        for(int i = 1; i <= n;i ++ ) cin >> a[i];
        sort(a+1,a+n+1);
        output(a,n,m);
    }
    return 0;
}