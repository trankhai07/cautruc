#include<bits/stdc++.h>
using namespace std;
void output(string s){
    int len =s.size();
    reverse(s.begin(),s.end()); // thực hiện đảo chuỗi VD: 12[a] thành [a]21
    for(int i = 0;i < len;i ++){
        if(s[i] == ']') s[i] ='[';
        else if(s[i] == '[') s[i]=']';
    } 
     stack<string>st,st2; // tạo hai mảng stack để lưu giá trị 
           // st2 dùng để lưu chuỗi string khi chưa chạy 12[a] ( lúc này nó lưu a)
           // st dùng để lưu chuỗi string khi chạy 12[a] ( aa )
     stack<int>n; // lưu số [a]21 thì được hiểu là 2+1*pow(10,cn); cn là số lượng số 
      int cn =0; 
     for(int i = 0;i < len;i ++){
         if(s[i] >= '0' && s[i] <= '9'){  // trường hợp số 
             int t = s[i]-48;
          if( cn != 0){   // trog trường hợp có số lớn hơn 9
              if(n.empty() != 1){
                  int e =1;
                  for(int i = 1;i <= cn;i ++) e*=10; 
                  int h = e*t + n.top() ;// 
                   n.pop(); 
                  string r=""; 
                  string o = st2.top();  // lấy giá trị lưu khi chưa nhân theo số lượng số 
                  st.pop();   // xóa chuỗi string khi nó đã nhân  theo số lượng số 
                
                  for(int i = 1;i <= h;i ++)  r+=o;  
                  st.push(r);
              }
          }
         else if(cn == 0){         // trong trường hợp có số nhở hơn =9
             if(st.empty()!= 1){
                 string r=""; 
                 string o=st.top();st.pop(); 
             for(int i = 1;i <= t;i ++) r +=o;
             st.push(r); n.push(t);
             }
         }  
          cn++;   
         }
        else if(s[i] !=  ']'){      // trường hợp là [aaa thì thêm 
             string  p=""; p =s[i];  // thêm vào stack 
             st.push(p);st2.push(p);
             cn =0;                           // khi chạy vào phần này thì khởi tạo stack lưu số lượng 
             while(n.empty() != 1) n.pop();
         }
         else if(s[i] == ']'){    // trường hợp gặp cản ] thì dừng 
           string k="";
           while(st.empty() != 1 && st.top() != "["){    // khi gặp cản ']' thì nối các chuỗi string trong stack lại với nhau 
               k+=st.top(); st.pop();
           }
           st.pop();
           st2.push(k);
            st.push(k); cn =0; 
             while(n.empty() != 1) n.pop();
         }
     }
     while(st.empty() != 1){  // thực hiện in ra các chuỗi string trong stack st
         cout << st.top();
         st.pop();
     }
     cout << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        string s;
        cin >> s;
        output(s);
    }
}