#include<bits/stdc++.h>
using namespace std;
vector<int>nt;
vector<int>v[10005];
// B1 ; lập một mảng lưu các số nguyên tố có 4 chữ số
// B2 ; Tìm những số nguyên tố khác nhau một số cho vào danh sách kề 
// B3 : Tìm đường đi ngắn nhất dựa vào BFS
int check(int x){
    if(x == 2 || x == 3 ) return 1;
    if(x % 2 == 0 || x % 3 == 0) return 0;
    else{
        int c = sqrt(x);
        for(int i = 5;i <= c;i +=6)
        if(x % i == 0 || x % (i +2 ) == 0) return 0;
         return 1;
    }
}
void locnguyento(){
   for(int i = 1000;i <= 9999;i ++){
       if(check(i)) nt.push_back(i);
   }
}
bool checknt(int x,int y){
    int d = 0;
    while(x != 0){
        if(x % 10 != y % 10 ) d++;
        x/=10; y/=10;
    }
    return d == 1;
}
void khoitao(){
    for(int i = 0; i < nt.size()-1;i ++){
        for(int j = i + 1;j < nt.size();j ++){
            if(checknt(nt[i],nt[j])){
                v[nt[i]].push_back(nt[j]);
                v[nt[j]].push_back(nt[i]);
            }
        }
    }
}
int bfs(int n,int m){
    int ok[10005]; memset(ok,0,sizeof(ok));
    queue<int>qe;
    qe.push(n);
    ok[n] = 1; 
    int path[10005] ={0};
    while(!qe.empty()){
        int t = qe.front(); qe.pop();
        if(t == m) return path[t];
        for(int i : v[t]){
            if( !ok[i] ){
                ok[i] = 1;
                path[i] = path[t]+1;
                qe.push(i);
            }
        }
    }
}
int main(){
    locnguyento();
    khoitao();
    int x,n,m;
    cin >> x;
    while(x--){
        cin >> n >> m;
        cout << bfs(n,m) <<endl;
    }
    return 0;
}