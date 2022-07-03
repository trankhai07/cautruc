#include<bits/stdc++.h>
using namespace std;
int uu_tien(char a){
    if(a == '(') return 0;     // độ ưu tiên 
    else if(a  == '+' || a == '-') return 1;  
    else if(a == '*' || a == '/' || a == '%') return 2;
     return 3;
}
void output(string s,int len){
    stack<char>st;
    for(int  i = 0;i < len ;i ++){
        if(s[i] >= 'a' && s[i] <='z' || s[i] >= 'A' && s[i] <= 'Z') cout << s[i]; 
        else if(s[i] == '(') st.push(s[i]);  // gặp dấu ( thì cứ đẩy vào stack 
        else if(s[i] == ')'){                // gặp dấu ) thì đẩy các kí tự trong stack ra cho đến dấu (  thì dừng 
            while(st.empty() != 1 && st.top() != '('){
                cout << st.top();
                st.pop();
            }
         st.pop();      // xóa dấu (
        }
     else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'||s[i] =='^' ){  
         while(st.empty() != 1&& uu_tien(st.top()) >= uu_tien(s[i])){  // nếu kí tự đầu tiên trogn stack >= kí tự đang xét thì in ra luôn và xóa khỏi stack 
             cout << st.top();st.pop();
         }
         st.push(s[i]); // thêm kí tự đang xét vào stack 
     }
    }
    while(st.empty() != 1){ // in các kí tự còn lại trừ (
        if(st.top() != '(') cout << st.top();
        st.pop();
    }
}
int main(){
    int x; cin >> x;
    string s;
    while(x--){
        cin >> s; int len = s.size();
        output(s,len);
        cout << endl;
    }
}