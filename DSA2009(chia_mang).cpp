#include<bits/stdc++.h>
using namespace std;
int cn =0;
void output(int a[],int n,int m,int b[],int k,int sum){
    if(cn == m) return ;
    for(int i = 1;i <= n;i ++ ){
        if(b[i] != 1){
            b[i] =1; 
            if(sum == k){
              cn++;
               sum=0;
            output(a,n,m,b,k,sum);
            }
            else if(sum > k){
                  
                return ;
            } 
            else{
                sum+=a[i];
                output(a,n,m,b,k,sum);
                sum-=a[i];
            } 
        } 
            b[i]=0;
    }
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[n+1],sum=0;
        int b[25];
        memset(b,0,25);
        for(int i = 1; i <= n;i ++ ){
            cin >> a[i];
            sum+=a[i];
            
        } 
        if(sum % m != 0) cout << "0\n";
       else{
           int k = sum/m;
           output(a,n,m,b,k,0);
           if(cn == 0) cout <<"0\n";
           else if(cn == m) cout << "1\n";
       }
       cn =0;
    }
    return 0;
}