#include<bits/stdc++.h>
using namespace std;
int n,m;
int row[] ={-1, -1, -1, 0, 0, 0, 1, 1, 1};
int col[]={-1, 0, 1, -1, 0, 1, -1, 0, 1};
void dfs(int b[][100],char s[100][100],int x,int y){
 b[x][y] = 1;
 for(int i = 0;i < 9;i ++){
     int x1 = row[i] + x;
     int y1 = col[i] + y;
     if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && s[x1][y1] == 'W'  && b[x1][y1] == 0)  dfs(b,s,x1,y1);
 }
}
int main(){
    cin >> n >> m;
    char s[100][100]; int b[100][100];
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> s[i][j];
            b[i][j] =0;
        }
    }
    int cn =0;
     for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            if( !b[i][j] && s[i][j] == 'W'){
                 dfs(b,s,i,j);
                 cn++;
            }
        }
        //cout << endl;
    }
    cout << cn <<endl;
}