#include<bits/stdc++.h>
using namespace std;
void output(string s,int len){
    stack<int>st1,st2;
    for(int i = 0; i < len;i ++){
        if(s[i] == '(') st1.push(s[i]);   //thêm dấu ngoặc đầu vào trong stack 
        else{   // nếu nó là dấu ngoặc còn lại thì xóa đi ko xét 
            if(st1.empty() == 1) st2.push(s[i]);   // nếu như st1 còn trống tức là chuỗi đó đang sai cần đc thêm vào st2
            else {
                st1.pop();
            }
        }
    }
    int l1 = 0,l2 =0;
    while(st1.empty() != 1){
        l1++;    // đếm số lượng phần tử còn lại ở trong st1
        st1.pop();
    }
    while(st2.empty() != 1){
        l2++;    // đếm số lượng phần tử còn lại ở trong st2 
        st2.pop();
    }
    int result = l1/2 + l2/2 + l1%2 + l2%2;  // chia nửa các dấu ta chỉ cần đổi dấu 1 nửa , còn phần dư của hai st1 và st2 là số kí tự cần đổi 
    cout << result <<endl;
}
int main(){
    int x; string s;
    cin >> x;
    while(x--){
        cin >> s;
        int len =s.size();
        output(s,len);
    }
}