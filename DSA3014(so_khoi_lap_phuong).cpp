#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
vector<long long>table;
void creater_table(){
    for(int i = 1;i <= 1000;i++){
        long long x = 1;
        for(int j =1;j <= 3;j ++ ) x*=i;
        table.push_back(x);
    //    cout << x <<" ";
    }

}
int check(long long s){
   for(int i = 1;i <= 1000;i ++ ){
       if(s == table[i-1]) return 1;
   }
   return 0;
}
void sinh_nhi_phan(string a,int n,int b[],int j ){
    for(int i = 0;i <= 1;i ++ ){
        b[j]=i;
        if(j == n){
            long long sum =0;
            for(int i =1;i <= n;i ++ ){
                if(b[i] == 1) sum=sum*10+(a[i-1]-48);
            }
           // cout << sum <<endl;
            if(check(sum)) v.push_back(sum);
        }
        else sinh_nhi_phan(a,n,b,j+1);
    }
}

int main(){
    int x; cin >> x;
    string a;
    creater_table();
    while(x--){
        cin >> a;
        int n =a.size();
        int b[n+1];
        sinh_nhi_phan(a,n,b,1);
        if(v.size() != 0){
       sort(v.begin(),v.end());
       cout << v[v.size()-1]<<endl;
       v.clear();
        }
       else cout << "-1\n";
    }
    return 0;
}