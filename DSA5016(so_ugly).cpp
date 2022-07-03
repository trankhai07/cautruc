#include<bits/stdc++.h>
using namespace std;
void output(int n){        // số ugly chỉ có ước số là 2, 3, 5 ( chính là bội cuả 2,3, 5)
    set<long long>s;
    s.insert(1);
    n--;
    while(n--){
        auto it = s.begin(); // lấy địa chỉ 
        long long k = *it;    // lấy giá trị tại địa chỉ đó
        s.erase(it);         // xóa giá trị tại địa chỉ đó
        s.insert(k*2);    // thêm bội của 2,3,5
        s.insert(k*3);
        s.insert(k*5);
    }
    cout << *s.begin()<<endl;
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        output(n);
    }
}