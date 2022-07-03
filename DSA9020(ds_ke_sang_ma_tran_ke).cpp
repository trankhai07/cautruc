#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
int a[1005][1005];
void creat(string s,int k){
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v[k].push_back(stoi(tmp));
    }
}
int main(){
    int x; cin >> x;
    for(int i =1;i <= x;i ++){
        string s;
      //  cin.ignore();
      scanf("%\n");
        getline(cin,s);
        creat(s,i);
 
    }
 
    for(int i = 1 ;i <= x;i ++){
        for(int j = 0;j < v[i].size();j++){
           a[i][v[i][j]] =1; 
        }
    }
    for(int i = 1;i <= x; i++ ){
        for(int j = 1;j <= x;j ++)
        { 
            if(a[i][j] != 1) cout << "0 ";
            else cout << a[i][j] <<" ";
        } 
        cout << endl;
    }
 
    return 0;
}