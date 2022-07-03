#include<bits/stdc++.h>
using namespace std;
struct project {
   int start,end;
};
int cmp(project x,project y){
    if(x.end < y.end) return 1;
     return 0;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        project a[n+1];
        for(int i = 1;i <= n;i ++ ) cin >> a[i].start >> a[i].end;
        sort(a+1,a+n+1,cmp);
        int k = a[1].end;
        int cn =1;
        for(int i = 2;i <= n;i ++ ){
            if(k <= a[i].start){
                cn ++;
                k = a[i].end;
            }
        }
        cout <<cn <<endl;
    }
}