#include<bits/stdc++.h>
using namespace std;
struct cv{
  int f,s,g;
};
typedef struct cv cvv;
int cmp(cvv x,cvv y){
    if(x.g > y.g) return 1;
     return 0;
}
int main(){
    cvv a[1005];
    int x,n; cin >> x ;
    while(x--){
        cin >> n;
        for(int i = 1;i  <= n;i ++){
            cin >> a[i].f >> a[i].s >> a[i].g;     // thời gian s là deadline nhưng có thể làm công việc đó trong 1 đơn vị time
        }
        sort(a+1,a+n+1,cmp); // sắp xếp theo profit tăng dần 
        int F[1005]={0};int d =0,sum=0;
        for(int i = 1;i <= n;i ++){
            while(F[a[i].s] && a[i].s > 0) a[i].s-=1; // khi thời gian đã được sử dụng một phần thì trừ đi 1 đơn vị time đến thời gian rảnh 
            if(F[a[i].s] == 0 && a[i].s > 0){   // khi còn thời gian và thời gian đó chưa làm việc gì 
                F[a[i].s] =1;       // đánh dấu thời gian đó đã đc sử dụng  
                sum+=a[i].g;
                d++;
            }
        }
        cout << d <<" "<<sum <<endl;
    }
}