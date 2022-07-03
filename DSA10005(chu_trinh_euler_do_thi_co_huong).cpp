#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
struct dt{
  int c =0,h=0;
};
int main(){  // chu trình euler khi số đỉnh ra bằng số đỉnh vào

    int x,n,m;
    cin >> x ;
    while(x--){
        cin >> n >> m;
        dt check[1005];
        memset(a,0,sizeof(a));
        for(int i = 1;i <= m;i ++){
            int k,h;
            cin >>k >> h;
            a[k][h] =1;
        }
        for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                if(a[i][j] == 1){
                  check[i].c++;
                }
                if(a[j][i] == 1) check[i].h++;
            }
        }
        int kt =0;
        for(int i = 1;i <= n;i ++){
            if(check[i].c != check[i].h){
                cout << "0\n";
                kt =1;
                break;
            }
        }
        if(kt == 0) cout <<"1\n";
      /*  for(int i = 1;i <= n;i ++){
            for(int j = 1;j <= n;j ++){
                cout << a[i][j] <<" ";
            }
            cout <<endl;
        }
        for(int i = 1;i <= n;i ++) cout << check[i].c <<" "<<check[i].h<<endl;*/
    }
    return 0;
}