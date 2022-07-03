#include<bits/stdc++.h>
using namespace std;
void creat(int n){
    queue<string>q;
    // q.push("0");  không thể cho vào vì sẽ tạo 001 trùng với 1 ( dẫn đến quá giới hạn bộ nhớ MEL)
    q.push("1");
    long long  number=0;
    while(1){
        string s = q.front(); q.pop();
        q.push(s+"0"); q.push(s+"1");
          number = 0;
         for(int i = 0;i < s.size();i++) number = number*10+(s[i]-'0');
         if(number != 0 && number % n == 0) break;
    }
    cout << number <<endl;
}
int main(){
    int x,n,t;
    cin >> x;
    while(x--){
        cin >> n; 
           creat(n);
    }
}