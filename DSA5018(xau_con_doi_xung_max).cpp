#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    int Max = 1;  // cho bằng 1 vì luôn có độ dài đối xứng là 1 
    for(int i =0;i < len;i ++){   // đối với trường hợp lẻ 
        int d=i,c=i;           // đi từ giữa ra
        while(d >= 0 && c < len){
            if(s[d] == s[c]){        // lúc đầu vào luôn đúng chạy while kiểm tra lúc sau
              Max = max(Max,c-d+1);      
              d--;c++;                 // tăng giảm về hai bên 
            }
            else break;        // nếu gặp hai kí tự khác nhau thì thoát luôn
        }
    }
     for(int i =0;i < len-1;i ++){   // đối với trường hợp chẵn 
        int d=i,c=i+1;           // đi từ hai bên 
        while(d >= 0 && c < len){
            if(s[d] == s[c]){        // lúc đầu vào luôn đúng chạy while kiểm tra lúc sau
              Max = max(Max,c-d+1);      
              d--;c++;           // tăng giảm về hai bên 
            }
            else break;        // nếu gặp hai kí tự khác nhau thì thoát luôn
        }
    }
    cout << Max <<endl;
}
int main(){
    int x; cin >> x;
    while(x--){
        string s;
        cin >> s;
        int len = s.size();
        output(s,len);
    }
}