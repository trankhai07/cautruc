#include<bits/stdc++.h>
using namespace std;
vector<string>vt;
void tinh(){
   queue<int>qe;
   for(int i = 0;i < vt.size();i ++){
       if(vt[i] != "+" && vt[i] != "-" && vt[i] != "*" && vt[i] != "/"){
           int num = stoi(vt[i]);
           qe.push(num);
       }
       else{
           int x = qe.front(); qe.pop();
           int y = qe.front(); qe.pop();
           int  z;
          if(vt[i] == "+") z = y + x;
          else if(vt[i] == "-") z =y - x;
          else if(vt[i] == "/") z = y / x;
          else if(vt[i] == "*") z = y * x; 
          qe.push(z);
       }
   }
   cout << qe.front() <<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
       vt.clear();
        for(int i = 1;i <= n;i ++){
            string s;
            cin >> s;
        vt.push_back(s);
        }
        reverse(vt.begin(),vt.end());
        tinh();
    }
}