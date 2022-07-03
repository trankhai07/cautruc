#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n;
    while(n--){
        cin >> m; cin.ignore();
        string s;getline(cin,s);
        cin >> k; cin.ignore();
        string s1; getline(cin,s1);
        if(m != k) cout <<"0\n";
        else{
            int kt =0;
            for(int i = 0;i < s.size();i++){
                if(s[i] != s1[i]){
                    cout <<"0\n";kt =1;
                    break;
                }
            }
            if(!kt) cout <<"1\n";
        }
    }
}