#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
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
        scanf("%\n");
        //cin.ignore();
        getline(cin,s); 
        creat(s,i);
        
    }
    for(int i = 1 ;i <= x;i ++){
        for(int j = 0;j < v[i].size();j++){
            if(i < v[i][j]) cout << i <<" "<<v[i][j] <<endl;
        
        }
    }
    return 0;
}