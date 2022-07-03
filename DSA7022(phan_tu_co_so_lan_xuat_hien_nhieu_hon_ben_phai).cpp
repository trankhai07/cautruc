#include<bits/stdc++.h>
using namespace std;
void output(map<int,int>mp,int a[],int n){
    stack<pair<int,int>>st; //  lưu vị trí và số lần đếm của phần tử
    int b[n+1];
    for(int i = 1;i <= n;i ++ ){
        if(st.empty()) st.push({i,mp[a[i]]});
        else{
            while(st.empty() != 1 && st.top().second < mp[a[i]]){
                b[st.top().first] = a[i];
                //cout << a[i] <<" ";
                st.pop();
            }
            st.push({i,mp[a[i]]});
        }
    }
    while(st.empty() != 1){
        b[st.top().first] = -1;
        st.pop();
    }
    for(int j = 1;j <= n; j ++) cout << b[j] <<" ";
    cout << endl;
}
int main(){
    int x,n; cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];map<int,int>mp;
        for(int i = 1;i <= n;i ++){
            cin >> a[i];
            mp[a[i]]++;
        } 
        output(mp,a,n);
    }
    return 0;
}