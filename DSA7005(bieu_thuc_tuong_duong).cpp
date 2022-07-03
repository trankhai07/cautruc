#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<char>st;
    for(int i=len-1;i >= 0;i --)   // chạy ngược từ dưới lên 
    {
        if(s[i] != ')') st.push(s[i]);     // những kí tự khác ')' thì thêm vào stack
        else{       // trường hợp ngược lại 
            if(i != 0 && s[i-1] == '-'){    // loại ra trường hợp chạy đến điểm 0 và check ngay kí tự sau dấu ')' là trừ thì thực hiện lệnh dưới 
                vector<char>v;
                while(st.empty() != 1 && st.top() != '('){   // chuyển + sang  - và - sang +
                    if(st.top() == '-') v.push_back('+');
                    else if (st.top() == '+') v.push_back('-');
                    else v.push_back(st.top());
                    st.pop();
                }
                st.pop(); /// xóa dấu '('
                for(int j = v.size()-1;j > 0;j --){  // thêm ngược lại vào stack 
                   st.push(v[j]);
                } 
                 if(v[0] != '+'){  // tại vì dấu cộng ko đc  viết nên kí tự + này nghĩa là ko có gì VD : +b là b
                        st.push(v[0]);
                        st.push('-');      // chuyển thành trừ 
                    }
                    else st.push(v[0]);// Nếu kí tự đầu tiên bằng + tức là ban đầu nó là dấu trừ (có nghĩa là có dấu ở phía trc)
                i--;
            }
        }
    }
    while(st.empty() != 1){
        if(st.top() != '(' ) cout << st.top(); // in ra ( chú ý trường hợp vẫn còn dấu '(')  vì nếu dấu cộng đằng trc ')' thì '(' ko bị xóa 
        st.pop();
    }
    cout << endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s; cin >> s;
        int len = s.size();
        for(int i = 0;i < len;i ++)
        {
            if(s[i] == ')') s[i] = '(';     // khi đảo ngược thì dấu ko bị đảo  nên ta phải đảo lại 
            else if(s[i] == '(') s[i] = ')';
        }
     //   reverse(s.begin(),s.end());
      // cout << s;
        output(s,len);
    }
}