#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int main(){
    int x,n,m;
    cin >> x ;
    while(x--){
        cin >> n >> m;
        long long  a[n+5]={0};
        a[0]=a[1]=1;
        for(int i =2; i <= n;i ++ ){  // số bậc thnag 
            for(int j = 1;j <= min(m,i);j ++ ){  // số bước có thể bước
                a[i] = (a[i] %mod + a[i-j]%mod)%mod;
            }
        }
        cout << a[n]<<endl;
    }
}