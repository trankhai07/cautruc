#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
int color[1005];
bool check(int j,int i){
    for(int l = 0;l < v[j].size();l ++){
        if(color[v[j][l]] == i) return false; // check vertex adjacent (để xét xem màu của đỉnh đag xét có trùng với các đỉnh kề kia hay ko)
    }
    return true;  
}
bool pain_graph(int j,int n,int z){
    if(j == n+1) return true;   // chứng tỏ đã xét hết đỉnh cuối 
    for(int i = 1;i <= z;i ++){   // chạy các màu có thể có 
        if(check(j,i)){    // nếu màu đó thỏa mãn thì lấy 
          color[j] = i;       // vị trí đó ddc tô màu 
          if(pain_graph(j+1,n,z)) return true;   // nếu đúng thì ko chạy phần dưới 
          color[j] =0;    // trả về giá trị 0 ban đầu 
        } 
    }
    return false;
}
int main(){
    int x,n,m,z;
    cin >> x;
    while(x--){
        cin >> n >> m >> z;
       for(int i = 1;i <= m;i ++){
           int h,k;
           cin >> h >> k;
           v[h].push_back(k);
           v[k].push_back(h);
       }
       memset(color,0,sizeof(color));
       if(pain_graph(1,n,z)) cout <<"YES\n";
       else cout <<"NO\n";
       for(int i = 1;i <= n;i ++) v[i].clear();
    }
}