#include<bits/stdc++.h>
using namespace std;
int main(){
    int x; cin >> x;
     deque<int>dq;
    while(x--){
        string s; int n;
       cin >> s;
       if(s == "PUSHBACK"){
           cin >> n;
          dq.push_back(n);
       }
       else if(s == "PUSHFRONT"){
           cin >> n;
           dq.push_front(n);
       }
       else if(s == "POPFRONT"){
           if( dq.empty() != 1 )
           dq.pop_front();
       } 
       else if(s == "POPBACK") {
           if(dq.empty() != 1)
           dq.pop_back();
       }
       else if(s == "PRINTFRONT"){
           if(dq.empty() != 1) cout << dq.front()<<endl;
           else cout <<"NONE\n";
       }
        else if(s == "PRINTBACK"){
           if(dq.empty() != 1) cout << dq.back()<<endl;
           else cout << "NONE\n";
       }
    }
}