#include<bits/stdc++.h>
using namespace std;
struct project{
   int time1,time2;
};

int cmp(project x,project y){
    if(x.time2 < y.time2) return 1;
     return 0;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        project a[1005];
        for(int i = 1;i <= n;i ++ ) cin >> a[i].time1 ;
       for(int i =1;i <= n; i ++) cin >> a[i].time2;
        sort(a+1,a+n+1,cmp);
        int k = a[1].time2,cn=1;
        for(int i = 2;i <= n;i ++ ){
            if(k <= a[i].time1){
              cn++;
              k=a[i].time2;
            }
        }
        cout << cn <<endl;
    }
}