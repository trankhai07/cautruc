#include<bits/stdc++.h>
using namespace std;
string a[105];
string add(string s1,string s2){
    int l1=s1.size();
    int l2 = s2.size();
    if(l1 > l2)
     for(int i = 1;i <= l1 -l2;i ++)  s2 = '0'+s2;
     else for(int i = 1;i <= l2 -l1;i ++) s1 = '0' +s1;
    reverse(s1.begin(),s1.end()); reverse(s2.begin(),s2.end());
    string s="";
    long long sum =0;
    int nho =0;
    for(int i = 0;i < s1.size(); i ++){
        sum = (s1[i]-'0'+s2[i]-'0') + nho;
        s+=(sum%10)+'0';
        nho = sum/10;
    }
    if(nho == 1) s+='1';
    reverse(s.begin(),s.end());
    return s;
}
string  mul(string s1,string s2){
    int l1 = s1.size();
    int l2 = s2.size();
    vector<int>a,b;
    for(int i = 0;i < l1;i ++) a.push_back(s1[i]-'0');
    for(int i = 0;i < l2; i++) b.push_back(s2[i]-'0');
    vector<vector<int>>v;
    
    int k =0;
    for(int i = l2-1;i >= 0;i --){
        int tich = 1,nho=0;vector<int>t;
        for(int j = l1-1;j >= 0;j --){
           tich = a[j]*b[i]+nho;
           t.push_back(tich%10);
           nho = tich/10;
        }
        if(nho != 0) t.push_back(nho);
        reverse(t.begin(),t.end());
        for(int i=1;i <= k;i ++) t.push_back(0);
        v.push_back(t);
        k++;
    }
    int len = v[v.size()-1].size();
    vector<vector<int>>v2;
  for(int i = 0;i < v.size();i ++){
      vector<int>p;
      for(int l =1;l <= len-v[i].size() ;l ++)
          p.push_back(0);
          for(int j = 0;j < v[i].size();j ++) p.push_back(v[i][j]);
          v[i].clear(); v2.push_back(p);
  }
  int tich = 0,nho = 0;
  string xz = "";
  for(int i = v2[0].size()-1; i >=0 ;i --){
      tich = nho;
      for(int j =0;j <v2.size();j ++){
        tich+=v2[j][i] ;
      }  
      xz+=((tich%10)+'0');
      nho = tich/10;
  }
  if(nho != 0) xz+=(nho+'0');
  reverse(xz.begin(),xz.end());
  return xz;
}
void output(){
    a[0]='1';
    a[1]='1';
  for(int i = 2;i <= 100; i++){
      string tmp="";
      for(int j = 0;j < i;j++){
        string  tmp2 = "";
          if(a[j].size() > a[i-j-1].size()) tmp2 = mul(a[j],a[i-j-1]);
          else tmp2 = mul(a[i-j-1],a[j]);
          tmp=add(tmp,tmp2);
      }
      a[i]=tmp;
  }

}
int main(){
    int x,n;
    cin >> x;
    output();
    while(x--){
        cin >> n;
        cout << a[n] <<endl;
    }
   /* string s1,s2;
    cin >> s1 >> s2;
   cout << mul(s1,s2);*/
    return 0;
}