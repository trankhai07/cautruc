#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>s;
string creat(int x){
   string t="";
   while(x != 0){
       t+=(x%10 + 48);
       x/=10;
   }
   reverse(t.begin(),t.end());
   return t;
}
void output1(int a[],int b[],int n){
    vector<string>k;
    int c[n+1],j=1;
    for(int i = 1;i <= n;i ++ ){
        if(b[i] == 1){
            c[j++] = a[i];
           k.push_back(creat(a[i]));
        }
    }
    int kt =1;
    for(int i = 1;i < j-1;i ++ ){
        for(int t = i +1;t < j;t ++ ){
            if(c[i] > c[t]){
               kt = 0;
               break;
            }
       }
       if(kt == 0)break;
    }
 if(k.size() > 1 && kt == 1)
    s.push_back(k);
} 
 
void output(int a[],int b[],int n,int j){
   for(int i = 0;i <= 1;i ++ ){
       b[j] = i;
       if(j == n) output1(a,b,n);
       else output(a,b,n,j+1);
   }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    int b[n+1];
    for(int i = 1;i <= n;i ++ ){
        cin >> a[i];
    } 
    output(a,b,n,1);
    sort(s.begin(),s.end());
    for(int i = 0; i < s.size(); i++ ){
        for(int j = 0;j < s[i].size();j ++ ){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}