#include<bits/stdc++.h>
using namespace std;
vector<long long >v;
long long mu(int x,int n){
    if(n == 0) return 1;
    if(n == 1) return x;
    long long p = mu(x,n/2);
    if(n % 2 == 0) return p*p;
     return x*p*p;
}
void table(){
   for(int i = 0;i <= 30;i ++ ){
       long long x = mu(2,i);
       v.push_back(x);
   }
}
int main(){
    int x; cin >> x;
    table();
    while(x--){
        string s1,s2; cin >> s1 >> s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        long long sum1=0;
        for(int i = 0;i < s1.size() ;i++){
            if(s1[i] == '1'){
                sum1+=v[i];
            }
        }
         long long sum2=0;
        for(int i = 0;i < s2.size() ;i++){
            if(s2[i] == '1'){
                sum2+=v[i];
            }
        }
        long long tich =sum1*sum2;
        cout <<tich <<endl;
    }
    return 0;
}