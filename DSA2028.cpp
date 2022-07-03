#include<bits/stdc++.h>
using namespace std;
int cn =0,result=0;
void quay_lui(int a[],int b[],int n,int m,int sum,int k){
    if(cn == m){
        cn =0;
        result++;
    }
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 0){
            b[i] =1;
            if(sum == k){
                cn++;
                sum =0;
                quay_lui(a,b,n,m,sum,k);
            }
            else if(sum > k ) return;
            else quay_lui(a,b,n,m,sum,k);
        }
         b[i] =0;
    }

}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n+1],sum=0;
    for(int i =1;i <= n;i ++ ) {
        cin >> a[i];
        sum+=a[i];
    }
    int k = sum / m;
    int b[15];
    memset(b,0,15);
    quay_lui(a,b,n,m,0,k);
    cout << result <<endl;
    return 0;
}