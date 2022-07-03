#include<bits/stdc++.h>
using namespace std;
vector<int>num;
bool check(int j){
    unordered_set<int>se;
    while(j != 0){
        int x = j%10;
        if(x > 5) return 0;
        if(se.find(x) != se.end()) return 0;
          se.insert(x);
          j/=10;
    }
    return 1;
}
void khoitao(){
    for(int i = 0;i <= 100005;i ++){
        if(check(i)) num.push_back(i);
    }
}
int main(){
    khoitao();
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        int dem = 0;
        for(int i = 0;i < num.size();i ++){
             if(i > m) break;
              if(num[i] >= n && num[i] <= m) dem++;
        }
        cout << dem <<endl;
    }
}