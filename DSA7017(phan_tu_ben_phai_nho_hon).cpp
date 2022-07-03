#include<bits/stdc++.h>
using namespace std;
void creat(int a[],int b[],int n){
    stack<int>st;
    for(int i = 1;i <= n;i ++){
        if(st.empty()) st.push(i);
        else{
            while(st.empty() != 1 && a[st.top()] > a[i]){
                b[st.top()] = a[i]; st.pop();
            }
            st.push(i);
        }
    }
    while(st.empty() !=1){
        b[st.top()]=-1;
        st.pop();
    }
}
void output(int a[],int n){
    int b[n+1];
    creat(a,b,n);   // tạo dãy có phần tử nhỏ hơn đầu tiên 
    int c[n+1]; stack<int>st;   // tìm phần tử lớn hơn đầu tiên nhưng phải lấy kết quả của b[]
    for(int i = 1;i <= n;i ++){
       if(st.empty()) st.push(i);
       else{
           while(st.empty() != 1 && a[st.top()] < a[i]){
               c[st.top()] = b[i];
               st.pop();
           }
           st.push(i);
       }
    }
    while(st.empty() != 1) {
        c[st.top()] =-1;
        st.pop();
    }
    for(int i = 1;i <= n; i++) cout << c[i] <<" ";
    cout << endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        output(a,n);
    }
    return 0;
}