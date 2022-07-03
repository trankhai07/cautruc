#include<bits/stdc++.h>
using namespace std;
void quay_lui(vector<char>v,int n,int j,char s[],int k,int x){
  for(int i = x;i < n;i ++ ){
      v.push_back(s[i]);
      if(j == k){
          for(int l = 0;l < v.size();l++) cout << v[l];
          cout << endl;
      }
      else quay_lui(v,n,j+1,s,k,i);
      v.pop_back();
  }
}
int main(){
   char s[] = {'A','B','C','D','E','F','G','H','I','J','K','\0'}; 
     char k; int n; 
     cin >> k >> n;
     int x = k-64;
     vector<char>v;
    quay_lui(v,x,1,s,n,0);
     return 0;
}