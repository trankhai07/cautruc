#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,n;                
    cin >> x;
    while(x--){
        cin >> n;
        string s; cin >> s;
       map<char,long long>mp;                       // muốn giá trị nhỏ nhất thì cứ số lớn nhất trong dãy lại giảm đi 1 đơn vị 
                                                    // nếu giảm chỉ một số tại 1 vị trí duy nhất thì ko đảm bảo bé nhất VD: 1233 = 14 (giảm đi 3 đơn vị)
                                                   //                         1232 -> 1222 -> 1221:                      1221= 10 
        for(int i =0;i < s.size();i++){
           mp[s[i]]++;                              // đếm số lượng kí tự xuất hiện 
        }
         priority_queue<long long,vector<long long>,less<long long>>q; // đưa phần tử lớn nhất lên đầu tiên 
        for(auto it : mp) {
            if(it.second != 0)
            q.push(it.second);
        }
    while(n--){
        long long k = q.top()-1; q.pop();
        q.push(k);
    }
    long long sum=0;
    while(q.empty() != 1){
        sum+=pow(q.top(),2); q.pop();
    }
    cout << sum <<endl;
    }
}