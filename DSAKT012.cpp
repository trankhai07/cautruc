#include<bits/stdc++.h>
using namespace std;
int kt =0;
int b[100];
void quay_lui(int a[],int k,int m,int j,int n){
    for(int i= a[j-1]+1;i <= n-k+j;i ++  ){
        a[j] = i;
        if(j == k){
           int sum =0;
           for(int i = 1;i <= k;i ++ ){
               sum +=b[a[i]];
           }
           if(sum == m){
               kt = k; break;
           }
        }
        else quay_lui(a,k,m,j+1,n);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
    int n,m;
    cin >> n >> m;
    int k =1;
    for(int i = 1;i <= n;i ++ ) cin >> b[i];
    while(k != n){
        int a[n+1];
        a[0]=0;
    for(int i = 1;i <= n;i ++ ){
        a[i] =i;
    } 
    quay_lui(a,k,m,1,n);
    if( kt != 0){
        cout << kt ;
        break;
    }
    k++;
    }
    if(kt  == 0) cout << "-1";
    }
    return 0;
}