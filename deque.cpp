#include<bits/stdc++.h>
using namespace std;
void output(int a[],int n,int k){
    vector<int>s;
   multiset<int>m;
  for(int i = 0;i < k;i ++ ){
      m.insert(a[i]);
  }
   for(int i = k; i< n;i ++ ){
       s.push_back(*m.rbegin());
         m.erase(a[i-k]);
         m.insert(a[i]); 
       }
   s.push_back(*m.rbegin());
    for(int i = 0;i < s.size();i ++ ) cout << s[i] <<" ";
}
int main(){
    int n,k;
    cin >> n>> k;
    int a[n+1];
    for(int i = 0;i < n;i ++ ) cin >> a[i];
    output(a,n,k);
    return 0;
}