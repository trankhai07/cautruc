#include<bits/stdc++.h>
using namespace std;
// bài này có vẻ cx ko khó lắm ý tưởng bài này là sàng nguyên tố sau đó sử dụng sinh tổ hợp chập N của x phần tử với x là số lượng số nguyên tố tìm đc trong khoảng từ p + 1 đến S thôi ae nhé! 
int m[1005];
int nguyen_to(int n){
    if(n == 2 || n == 3)  return 1;
    if(n % 2 == 0 || n % 3 == 0) return  0;
    else{
        int c = sqrt(n);
        for(int i = 5;i <= c; i+=6){
            if(n % i == 0 || n % (i+2) == 0) return 0;
        }
        return 1;
    }
}

vector<vector<int>>v;
void output(int p[],int t[],int n,int c){
    int sum = 0;
    for(int i = 1;i <= n;i ++ ){
         sum+=t[p[i]];
    }
    if(sum == c){
        vector<int>them;
        for(int i = 1;i <= n;i++) them.push_back(t[p[i]]);
        v.push_back(them);
    }
}
void quay_lui(int p[],int t[],int n,int m,int j,int c){
    for(int i = p[j-1]+1;i <= m-n+j;i++){
        p[j] = i;
        if(j == n){
            output(p,t,n,c);
        }
        else quay_lui(p,t,n,m,j+1,c);
    }
}
int main(){
    int n,a,b,c; 
    cin >> n;
    int j = 1;
    for(int i = 2;i <= 205;i++){    //  tạo một mảng nguyên tố 
       if( nguyen_to(i) ) m[j++] =i;
    }    
    while(n--){
        cin >> a >> b >> c; 
        int t[1005]; int h =1;
        int p[1005]; p[0]=0;
        for(int i = 1;i <= 205; i++){
            if(m[i] >= b+1 && m[i] <= c ){  // tìm một mảng nguyên tố mới từ p+1 đến S
                p[h] =h;                     // tạo một mảng p
                t[h++] = m[i];       // mảng t lưu số nguyên tố 
            }
        }
      quay_lui(p,t,a,h-1,1,c);    //    tổ hợp chập a phần tử của h-1 phần tử 
      cout << v.size()<<endl;
      for(int i = 0;i < v.size();i ++){
          for(int k = 0;k < v[i].size();k ++){
              cout << v[i][k] <<" ";
          }
          cout << endl;
      }
      v.clear();
    }
}