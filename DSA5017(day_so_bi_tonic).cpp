#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int d1[1005],d2[1005];
    for(int i = 1;i <= n;i ++ ){
        d1[i]=a[i];
        for(int j = 1;j < i;j ++){
              if(a[i] > a[j]) d1[i]=max(d1[i],d1[j]+a[i]);
        }
    }
    for(int i = n;i >= 1;i --){
        d2[i]=a[i];
        for(int j = n; j > i;j --){
            if(a[i] > a[j]) d2[i]=max(d2[i],d2[j]+a[i]);
        }
    }
    int Max = INT_MIN;
    for(int i=1;i <= n;i ++){
          Max = max(Max,d1[i]+d2[i]-a[i]);
    }
    cout << Max <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[1005];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        output(a,n);
    }
}