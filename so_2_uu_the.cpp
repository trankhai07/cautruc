#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int cn1 =0,cn=0;
    for(int i =0; i< s.size(); i++){
        if(s[i] == '2') cn++;
        else cn1++;
    }
    if(cn > cn1)  return 1;
    return 0;
}
void output(int n){
   queue<string>q;
    q.push("0");
    q.push("1");
    q.push("2");
   int k =0;
   while( n != k){
       string s = q.front(); q.pop();
       string s0 = s+'0'; q.push(s0);
       string s1= s+'1';q.push(s1);
       string s2 = s+'2'; q.push(s2);
       if(check(s) && s[0] != '0'){
          cout << s <<" "; 
          k++;
       }
   }
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        output(n);
        cout << endl;
    }
}