#include<bits/stdc++.h>
using namespace std;
void output(string s,int n){
    for(int i =0;i < s.size();i ++){
        char a=s[i];
        int vt = i;
       // if(n > 0 ){
        for(int j = s.size()-1;j >i ;j --){
            if(a < s[j]){
                a = s[j];
                vt =j;
            }
        }
        //}
        if(a > s[i] && n >0 ){
            swap(s[vt],s[i]);
            n--;
        }
        if(n == 0) break;
    }
    cout << s;
}
int main(){
    int x; cin >> x;
    while(x--){
        int n; cin >> n;
        string s; cin >> s;
        output(s,n);
        cout <<endl;
    }
    return 0;
}