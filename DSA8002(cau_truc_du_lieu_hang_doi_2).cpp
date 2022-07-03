#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
    queue<int>q;
    while(x--){
        string s; int n;
        cin >> s;
        if(s == "PUSH"){
            cin >> n;
            q.push(n);
        }
        else if(s == "POP"){
            if(q.empty() != 1) q.pop();
        }
        else if(s == "PRINTFRONT"){
            if(q.empty() != 1) cout << q.front()<<endl;
            else cout << "NONE\n";
        }
    }
}