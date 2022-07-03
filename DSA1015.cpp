#include<bits/stdc++.h>
using namespace std;
long long res;
int check ;
int z,n,a[100];
void creat(int j){
    for(int i =0;i <= 1;i ++ ){
        a[j] = i;
        if(j == z){
            long long  sum =0;
            for(int l = 1;l <= j; l++ )
              sum = 10*sum + a[l];
              sum*=9;
            if(sum % n == 0 && sum >= n){
                res = min(res,sum);
                check = 1;
            }
        }
        else creat(j+1);
    }
}
int main(){
    int x; cin >> x;
    while(x--){
         cin >> n;
         z = 1; res = 1e18;check = 0;
        while(z <= 17 && check != 1){
            creat(1);
            z+=1;
        }
        
     cout << res <<endl;
    }
    return 0;
}