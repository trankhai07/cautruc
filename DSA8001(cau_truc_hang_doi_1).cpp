#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        queue<int>q;
        while(n--){
           int x,y;
           cin >> x;
           if(x == 3){
               cin >> y;
               q.push(y);
           }
           else if(x == 1) cout << q.size() <<endl;
           else if( x == 2){
               if(q.empty()) cout << "YES\n";
               else cout << "NO\n";
           }
           else if(x == 4){
               if(q.empty() != 1){
                   q.pop();
               }
           }
           else if(x == 5){
               if(q.empty() != 1) cout << q.front()<<endl;
               else cout << "-1\n";
           }
           else if(x == 6){
               if(q.empty() != 1) cout << q.back()<<endl;
               else cout << "-1\n";
           }
        }
    }
}