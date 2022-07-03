#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    string s;
    cin.ignore();
    while(x--){
        getline(cin ,s);
        stringstream ss(s);
        string tmp;
        stack<string>st;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(st.empty() != 1){
            cout << st.top() <<" ";
            st.pop();
        }
        cout << endl;
    }
}