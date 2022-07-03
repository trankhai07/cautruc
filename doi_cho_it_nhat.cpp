#include<bits/stdc++.h>
using namespace std;
void output(int a[],vector<pair<int,int>> b,int x){
   sort(b.begin(),b.end());
   int cn =0;
   for(int i = 0;i < x;i ++ ){
       if (a[i] != b[i].first){
         swap(a[i],a[b[i].second]); cn++;
       }
   }
   cout << cn;
}
int main(){
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int a[x+1];
       vector< pair<int,int>> b;
        for(int i =0;i < x;i ++){
          cin >> a[i];  
         b.push_back({a[i],i});
        } 
        output(a,b,x); cout <<endl;
    }
    return 0;
}