#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n){
    int sum =0;
    int ss = INT_MIN;
    for(int i =0;i < n;i ++ ){
        sum = max(a[i],sum+a[i]);
        ss = max(ss,sum);
    }
    cout << ss <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 0;i < n;i ++ ) cin >> a[i];
        output(a,n);
    }
    return 0;
}