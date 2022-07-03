#include<bits/stdc++.h>
using namespace std;
struct gt{
  int a,b;
};
int cmp(gt x,gt y){
    if(x.b < y.b) return 1;
     return 0;
}
void output(gt s1[],gt s2[],int n,int m){
    int cn =0;
    gt s[10005];
    int h[10005];
   for(int i = 0;i < m;i ++ ){
       for(int j =0;j < n;j ++ ){
         s[cn].a=  s2[i].a*s1[j].a;
          s[cn].b =  s2[i].b+s1[j].b;
          h[cn] = 0;
          cn++;
       }
   }
  /* for(int i = 0;i < cn;i ++) cout << s[i].a<<" ";
   cout <<endl;
   for(int i = 0;i < cn;i ++ ) cout << s[i].b <<" ";*/

  gt re[10005]; int l =0,kt =0;
  for(int i = 0;i < cn ;i ++ ){
      if(h[i] == 0){
            re[l].a = s[i].a;re[l].b=s[i].b;
         for(int j = i+1;j < cn;j ++){
            if(s[i].b == s[j].b){
                h[j]=1;
                re[l].a+=s[j].a;
            }
       }
       l++;
      }
    
  }
   sort(re,re+l,cmp);
   for(int i = 0;i < l;i ++ ) cout << re[i].a <<" ";
   cout <<endl;
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        gt s1[1005],s2[1005];
        for(int  i = 0;i < n;i ++ ) {
            cin >> s1[i].a;
            s1[i].b = i;
        }
        for(int i =0;i < m;i++) {
            cin >> s2[i].a;
            s2[i].b = i;
        }
        output(s1,s2,n,m);
    }
    return 0;
}