#include<bits/stdc++.h>
using namespace std;    /// THUẬT TOÁN ỨNG DỤNG CÂY BFS ( TÌM ĐƯỜNG ĐI NGẮN NHẤT )
int output(int n,int m){
    queue<pair<int,int>>st; // lưu giá trị đỉnh và số lượng  bước qua 
    set<int>s; s.insert(n);   // thêm vào set để tạo nên giá trị phân biệt và tốc độ truy cập nhanh hơn 
    st.push({n,0});
    while(st.empty() != 1){
        pair<int,int> p = st.front(); st.pop();   // lấy đỉnh đầu tiên  
        if(p.first ==  m) return p.second;    // nếu bằng điểm cần tìm thì trả về
        if(p.first < m && s.find(p.first*2) == s.end()){  //  nếu điểm đó nhỏ hơn điểm cần tìm và giá trị nhân đôi của nó ko đc tìm thấy trong set
            s.insert(p.first*2);   // thêm đỉnh nhân đôi vào set
            st.push({p.first*2,p.second+1}); // thêm đỉnh nhân đôi và số lượng bước vào queue
        }
        if(p.first-1 > 0 && s.find(p.first-1) == s.end()){   // điều kiện đỉnh đó trừ đi 1 lớn hơn 0 và chưa xuất hiện 
            s.insert(p.first-1);   // thêm đỉnh đó vào
            st.push({p.first-1,p.second+1});  // thêm đỉnh đó và số lượng bước vào queue
        }
    }
}
int main(){
    int x; cin >> x;
    while(x--){
        int n,m;
        cin >> n >> m;
        cout << output(n,m) <<endl;
    }
}