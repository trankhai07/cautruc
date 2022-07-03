#include<bits/stdc++.h>
using namespace std;   // tư tưởng tương tự như bài biến đổi s thành t( áp dụng thuật toán bfs (tìm đường đi ngắn nhất))
int output(int n){
    queue<pair<int ,int>>q;   // lưu đỉnh và số lớp nó đi được 
    unordered_set<int>s;  s.insert(n) ; // lưu các đỉnh đã xuất hiện trong bfs
   
    q.push({n,0}); int cn =0;
    while(q.empty() != 1){   
        pair<int,int>pa = q.front(); q.pop();  
        if(pa.first == 1) return pa.second;  // nếu tìm thấy điểm dừng thì break;
        if(pa.first-1 > 0 && s.find(pa.first-1) ==  s.end()){ // thực hiện trừ đi 1 và tìm xem xuất hiện chưa
            s.insert(pa.first-1);  
            q.push({pa.first-1,pa.second+1});  
        }
        int c =sqrt(pa.first);
        for(int i =2;i <= c;i ++){   // tìm nghiệm của một số (chỉ cần chạy đến căn của nó )
            if(pa.first % i == 0){   
                if(s.find(pa.first/i) == s.end()){    // nghiệm lớn nhất của nó là thuộc phần bên kia phần căn 
                    q.push({pa.first/i,pa.second+1});
                    s.insert(pa.first/i);
                }
            }
        }
    }
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
         cout << output(n)<<endl;
    }
}