#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v;
vector<int>d;
int kt =0;
void tao_dau(){
    for(int i = 1; i <= 3;i ++ ){     // vì đề bài chỉ cho ba dấu +,-,*
        d.push_back(i);
        if(d.size() == 4) v.push_back(d);
        else tao_dau();
        d.pop_back();
    }
}
int check(int m[],int k[]){
   // int sum ;
    for(int i = 0;i < v.size(); i ++ ){
       int  sum=m[k[5]];
        for(int j = 0;j < 4;j ++){
            if(v[i][j] == 1) sum+=m[k[j+1]];
            else if(v[i][j] == 2) sum-=m[k[j+1]];
            else if(v[i][j] == 3) sum*=m[k[j+1]];
        }
        if(sum == 23) return 1;
    }
    return 0;
}
void output(int m[],int j,int c[],int k[]){
    if(kt == 1) return ;
    for(int i = 1;i <= 5;i ++ ){
        if(c[i] == 0){
            k[j]=i;
            c[i] =1;
            if(j == 5){
                if(check(m,k)){
                  kt =1;
                } 
            }
            else output(m,j+1,c,k);
            c[i] =0;
        }
    }
}
int main(){
    int n; cin >> n;
    tao_dau();
    while(n--){
       int m[25],c[25],k[25];
       for(int i = 1;i <= 5;i ++ ){
           int a; cin >> a;
           m[i] = a;
           c[i]=0;
           k[i]=i;
       }
      output(m,1,c,k);
      if(kt == 1) cout << "YES\n";
      else cout << "NO\n";
      kt =0;
    //  d.clear();
    }
}