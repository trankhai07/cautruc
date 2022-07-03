#include<bits/stdc++.h>
using namespace std;
int r[]={-2,-2,-1,-1,1,1,2,2};
int c[]={-1,1,-2,2,-2,2,-1,1};
int output(pair<int,int>st,pair<int,int>ed){
    queue<pair<int,int>>q;
    q.push(st);int visted[100][100];
  memset(visted,0,sizeof(visted));
  visted[st.first][st.second] =1;
  int cn =0;
  while(q.empty() != 1){
      int size = q.size();
      for(int i = 0;i < size;i ++){
          pair<int,int>p = q.front(); q.pop();
            if(p == ed) return cn;
          for(int k = 0;k < 8;k ++){
              int x = p.first + r[k];
              int y = p.second + c[k];
              if(x >= 1 && y >= 1 && x <= 8 && y <= 8 && visted[x][y] != 1){
                  q.push({x,y}); visted[x][y] = 1;
              }
          }
      }
      cn++;
  }
  return -1;
}
int main(){
    int x; cin >> x;
    cin.ignore();
    while(x--){
        string s;
        getline(cin,s);
        pair<int,int>st;
        pair<int,int>ed;
        stringstream ss(s);
        string tmp; int i =0;
        while(ss >> tmp){
            if(i == 0){
                st.first = tmp[0]-96;
                st.second = tmp[1]-48;
            }
            else {
                ed.first = tmp[0]-96;
                ed.second =tmp[1]-48;
            }
            i++;
        }
     cout << output(st,ed) <<endl;
      //  cout << st.first <<" "<<st.second <<endl;
        //cout << ed.first <<" "<<ed.second <<endl;
    }
}