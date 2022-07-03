#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >>m;
    int gt[n+1],tl[n+1];
    float F[n+1];
     for(int i = 1;i <= n;i ++ ) cin >> tl[i];
    for(int i = 1;i <= n;i ++ ) {
        cin >> gt[i];
    }
   
    int check[n+1];
    for(int i =1;i <= n;i ++ ){
       F[i] = (1.0*gt[i])/tl[i];
       check[i]=1;
    }
    int sum_va=0,sum_p=0;
    while(1){
        int Max=0;
         float gt_max=-1;
         for(int i = 1;i <= n;i ++ ){
             if(check[i] && gt_max < F[i])
             {
                 gt_max = F[i];
                 Max = i;
             }
         }
         check[Max]=0;
         if(m >=  sum_p + tl[Max] && Max > 0)
         { cout << Max <<" ";
             sum_p+=tl[Max];
             sum_va+=gt[Max];
         }
         if(m == sum_p || Max == 0) break;
    }
    cout << sum_va <<endl;
    return 0;
}