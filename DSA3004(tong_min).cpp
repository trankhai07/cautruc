#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        long long  sum1=0,sum2=0;
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        sort(a+1,a+n+1);
        for(int i = 1;i <= n;i ++ ){
            if(i % 2 == 0) sum2 = sum2*10+a[i];
            else sum1 = sum1*10 +a[i];
        }
       long long sum = sum1 + sum2;
       cout << sum << endl;
    }
    return 0;
}