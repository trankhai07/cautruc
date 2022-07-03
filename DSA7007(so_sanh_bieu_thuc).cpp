#include<bits/stdc++.h>
using namespace std;
string creater(string s1){
   int len1 = s1.size();
    reverse(s1.begin(),s1.end());  // đảo ngược mảng 
    for(int i = 0;i <  len1;i ++){
        if(s1[i] == '(') s1[i] = ')';
        else if(s1[i] == ')') s1[i] = '(';
    }
 
    stack<char>st;  // tạo stack 
    for(int i = 0;i < len1;i ++){
        if(s1[i] != ')' ){  
           st.push(s1[i]); 
        } 
        else {
          if(s1[i+1] == '-' && i + 1 != len1){  // kiểm tra khi s[i] == ')' và i +1 phải ko đc bằng len1 
              vector<char>v;
              while(st.empty() != 1 && st.top() != '('){  // chuyển dấu + thành trừ và ngược lại
                 if(st.top() == '+'){               
                     v.push_back('-');
                 }
                 else if(st.top() == '-'){
                     v.push_back('+');
                 }
                 else v.push_back(st.top());
                 st.pop();
              }
              st.pop(); // xóa dấu '('
             for(int i= v.size()-1;i >=0;i--) st.push(v[i]); // thực hiện thêm lại vào stack sau khi đã đổi dấu 
             if(v[0] >= 'a' && v[0] <= 'z')st.push('-');   // nếu là +a thì thôi ko push vào (còn nếu là a thì phải thêm dấu - )
             i++; 
          }
          else if(s1[i+1] == ')' && i + 1 != len1){  // trường hợp ((-b+c) - c)
              vector<char>v;
              while(st.empty() != 1 && st.top() != '('){
                  v.push_back(st.top());
                  st.pop();
              }
              st.pop();
              for(int i = v.size()-1 ;i >= 0;i --) st.push(v[i]);
          }  
        }
    }
    string s="";
    while(st.empty() != 1){ // hàm tạo chuỗi string s 
        if(st.top() != '(')
        s+=st.top(); st.pop();
    }
     return s;
}
int  output(string s1,string s2){
   string s11 = creater(s1);  // phá tất cả các dấu ngoặc của biểu thức của s1
   string s22 = creater(s2);  // phá tất cả các dấu ngoặc của biểu thức của s2
   if(s11.size() != s22.size()) return 0; 
    for(int i= 0;i < s11.size();i ++){
      if(s11[i] !=  s22[i]) return 0;
    }
    return 1;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        string s1,s2;
        cin >> s1 >> s2;
       if( output(s1,s2)) cout <<"YES\n";
       else cout <<"NO\n";
    }
    return 0;
}