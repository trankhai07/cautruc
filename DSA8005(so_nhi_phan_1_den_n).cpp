#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        queue<string>q;
        q.push("1");
        while(n--){
          string s = q.front();
          q.pop();
          string s1 = s+"0"; q.push(s1);  // cộng 0 trc vì queue sẽ lấy phần tử đầu tiên (thêm vào sau lấy ra ở đầu)
          string s2 = s+"1"; q.push(s2);
          cout << s <<" ";
        }
        cout << endl;
    }
}