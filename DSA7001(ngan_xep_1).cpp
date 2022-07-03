#include<bits/stdc++.h>
using namespace std;
int main(){
   //  int t =2;
    stack<int>st;
    while(1){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp; string a[3]; int i =0;
        while(ss >> tmp){
            a[i++] = tmp;
        }
        if(i > 1){
           int number = stoi(a[1]);
           if(a[0] == "push") st.push(number);
        }
        else if(a[0] == "show"){
            vector<int>v;
            while(st.empty() != 1){
                v.push_back(st.top());
                st.pop();
            }
            if(v.size() == 0){
                cout <<"empty\n"; 
                break;
            }
            else {
            reverse(v.begin(),v.end());
              for(int l = 0;l <v.size();l ++){
                  cout << v[l]<<" ";
                  st.push(v[l]);
              }
              cout <<endl;
            }
        }
        else if(a[0] == "pop"){
            st.pop();
        }
    }
}