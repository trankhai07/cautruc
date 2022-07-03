#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node Node;
void khoi_tao(Node *&p,int n){
  Node*t= new Node;
  t->data = n;
  t->left = NULL;
  t->right = NULL;
  p =t;
}
void creat_branch(Node *&p,int n,int m,char t){
        if(p == NULL) return ;
    else if(p->data == n){
        if(t == 'L') khoi_tao(p->left,m);
        else khoi_tao(p->right,m);
    }
    else{
        creat_branch(p->left,n,m,t);
        creat_branch(p->right,n,m,t);
    }
}
bool check(Node *p,int l,int &level){
    if(p == NULL) return true;
    if(p->left == NULL && p->right != NULL || p->right == NULL && p->left != NULL) return false;
    if(p->left == NULL && p->right == NULL){
        if(level == 0){
            level =l;
            return true;
        }
        if(level != l) return false;
        return true;
    }
   return  check(p->left,l+1,level) && check(p->right,l+1,level);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node *p = NULL;
        for(int i = 1;i <= n;i ++){
            int k,h; char t;
            cin >>k >> h >>t;
            if(p == NULL){
                khoi_tao(p,k);
                if(t == 'L') khoi_tao(p->left,h);
                else khoi_tao(p->right,h);
            }
            else creat_branch(p,k,h,t);
        }
        int l =0;
      if(check(p,0,l)) cout <<"Yes\n";
      else cout <<"No\n";
    }
}