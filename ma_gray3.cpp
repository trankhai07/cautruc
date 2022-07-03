#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
       cout << s[0];
        for(int i = 0;i < s.size()-1;i ++ ){
            if(s[i] == s[i+1] ) cout << "0";
            else cout << "1";
        }
        cout <<endl;
    }
}