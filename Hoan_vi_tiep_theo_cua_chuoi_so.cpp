#include<bits/stdc++.h>
using namespace std;
void sort_string(string &k,int x,int y){
    for(int i = x;i < y-1;i++ ){
        for(int j = i+1; j < y;j ++ ){
            if(k[i] > k[j]) swap(k[i],k[j]);
        }
    }
}
void output(string k[]){
    int i = k[1].size()-1,kt =0;
    for(i;i >=0 ;i --){
      if(i == 0) kt= 1;
      if(k[1][i]> k[1][i-1]) break;
    }
    if(kt == 1) {
        cout << k[0] <<" " << "BIGGEST\n";
    }
    else{
        for(int j = k[1].size()-1;j >= i; j-- ){
            if(k[1][j] > k[1][i-1]) {
                swap(k[1][j],k[1][i-1]);
                sort_string(k[1],i,k[1].size());
                 cout <<k[0] <<" "<<k[1]<<endl;
                 break;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        string k[2];
        stringstream ss(s);
        string tmp;int t= 0;
        while(ss >> tmp ){
            k[t++] = tmp;
        }
        output(k);
    }
    return 0;
}