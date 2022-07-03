#include<bits/stdc++.h>
using namespace std;
char fiboword(int n,long long k,long long f[]){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= f[n-2]) return fiboword(n-2,k,f);
      return fiboword(n-1,k-f[n-2],f);
}
int main(){
    long long  x,n,m;
    cin >> x;
    while(x--){
        long long f[100];
        f[0]=0; f[1]=1;
        for(int i= 2; i <= 92; i++) f[i] = f[i-1]+f[i-2];
     cin >>n >> m;
    cout <<  fiboword(n,m,f) <<endl;
    
    }
}