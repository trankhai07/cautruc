#include<bits/stdc++.h>
using namespace std;

vector<int>a;
int check(int x){
    if(x == 2 || x == 3) return 1;
    if(x % 2 == 0 || x % 3 == 0) return 0;
    else {
        int c = sqrt(x);
        for(int i = 5;i <= c;i +=6){
            if(x % i == 0 || x %(i+2) == 0) return 0;
        }
        return 1;
    }
}
void tim_nguyen_to(){
    for(int i = 2; i<= 200; i++ ){
        if(check(i))
        a.push_back(i);
    }

}
 vector<vector<int>>v2;int sum =0;
void quay_lui(int t,int ok[],vector<int>v,int n,int z){
    if(sum > z) return;
    if(sum == z && v.size() == n){
         v2.push_back(v); return;
    }
    for(int i = t; i < a.size();i++ ){
        if(ok[i] != 1 &&  sum + a[i] <=  z && v.size() < n){
            ok[i] = 1;
                v.push_back(a[i]);
                sum+=a[i];
             quay_lui(i+1,ok,v,n,z);
             sum-=a[i];
              v.pop_back();
               ok[i] = 0; 
        }  
    }
}
int main(){
   int x; cin >> x;
   tim_nguyen_to();
   while(x--){
       int n,m,z;
       cin >> n >> m >> z;
       int ok[300];
     memset(ok,0,300);
       auto it = upper_bound(a.begin(),a.end(),m)-a.begin();
      vector<int>v;
       quay_lui(it,ok,v,n,z);
       sort(v2.begin(),v2.end());
       cout << v2.size()<<endl;
       for(int i = 0;i < v2.size(); i++ ){
           for(int j = 0;j < n; j ++ ) cout << v2[i][j] <<" ";
           cout << endl;
       }
        sum =0; v2.clear();
   }
}