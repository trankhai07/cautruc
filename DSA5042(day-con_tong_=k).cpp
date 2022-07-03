#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int m){
    unordered_set<long long >s;
     long long sum =0 ;
     int kt =0;
     s.insert(0); //  1
                  //  6 1
                 // 1 4 20 3 10 5
                  // trường hợp insert 0 (nếu  ko có số 0 trong s trc thì sẽ cout ra No Nhưng kết quả thật là Yes)
     for(int i = 1;i  <= n; i++){
         sum+=a[i];
         auto it = s.find(sum - m);
         if(it != s.end()){
             cout << "YES\n";
             kt =1;
             break;
         }
         s.insert(sum);
     }
     if(kt == 0) cout << "NO\n";
} 
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int a[n+1];
        for(int i = 1;i <= n;i ++ ) cin >> a[i];
        output(a,n,m);
    }
    return 0;
}