#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        string s2="";
        s2+=s[0];
        for(int i = 1;i < s.size();i ++ ){
            int n = s2.size()-1;
             if(s2[n] != s[i]) s2+='1';             // Nếu phần tử cuối của mã nhị phân đang được tạo ra mà khác phân tử mã gray tiếp theo thì cộng 1
             else s2+='0';         // ngược lại thì cộng 0
        }
        cout <<s2;
        cout <<endl;
    }
}