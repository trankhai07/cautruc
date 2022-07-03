#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1],b[n+1];
        for(int i = 1;i <= n;i ++) cin >> a[i];
        stack<int>st;
        for(int i = 1;i <= n;i ++){
            if(st.empty()) st.push(i);
            else {
             while(st.empty() != 1 && a[st.top()] <  a[i]){
               b[st.top()]= a[i];
                st.pop();
            }
            st.push(i);
        }         
     }
        while(st.empty() != 1){
           b[st.top()] =-1;
            st.pop();
        }
    for(int i = 1;i <= n;i ++) cout << b[i] <<" ";
        cout << endl;
    }
}