#include<bits/stdc++.h>
using namespace std;
int check1(vector<int>v[],int n){
    int cn =0;
   int a[2];
    for(int i = 1; i <= n;i ++){
        if(v[i].size() % 2 != 0) {
          
            cn ++;
          if(cn > 2) return 0;  // nhiều hơn hai đỉnh bậc lẻ thì ko phải là chu trình euler và đường đi euler 
        }   
    }
    if(cn == 2 ){   // đường đi euler khi chỉ có hai đỉnh bậc lẻ (đối với vô hướng )
      return 1;
    }
       return 2;  // chu trình euler là đường đi euler kết thúc tại chính điểm bắt đầu .( mỗi đỉnh của đồ thị đều là bậc chẵn)
}
int main(){
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        vector<int>v[1005];
        for(int i = 1;i <= m;i ++){
             int k,h;
             cin >> k >> h;
             v[k].push_back(h);
             v[h].push_back(k);
        }
   cout << check1(v,n) <<endl;
    }
}