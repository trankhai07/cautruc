#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  struct node *left;
  struct node *right;
};
typedef struct node Node;
void khoi_tao(Node *&t,int x){
    Node *p =new Node;
     p->data = x;
     p->left = NULL;
     p->right = NULL; 
     t = p;  
}

bool check_node_leaf(Node *p,int level,int &l){
    if(p == NULL) return true;  // khi chạy đến giá trị bằng NULL thì luôn đúng 
    if(p->left == NULL && p->right == NULL){  // node lá khi con trỏ left và right đều bằng NULL
        if(l == 0){        // bằng 0 khi chưa có node lá 
            l = level;
            return true;
        }
        if(l != level) return false;   // nếu node lá lúc sau tìm đc ko bằng node lá ban đầu thì false
            return true;
    }
    return check_node_leaf(p->left,level +1,l) && check_node_leaf(p->right,level+1,l); /// nếu là node lá khi và chỉ khi con trỏ left và right đều bằng 1
}
void creat_tree(Node *root,int x,int y,char k){

    if(root == NULL){ // nếu con trỏ NULL thì trả hàm về
        return ;
    }
else if(root->data == x){  // nếu con trỏ đang trỏ tới có giá trị đầu bằng 
    if(k == 'L'){   
       khoi_tao(root->left,y);  // từ con trỏ ban đầu rẽ nhánh sang 
    }  
    else if(k == 'R'){
        khoi_tao(root->right,y);
    }
   }
   else {  //nếu ko bằng 
      creat_tree(root->left,x,y,k);
      creat_tree(root->right,x,y,k) ;
   }
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        Node *root =NULL;
        int a1,a2; char a3;
        for(int i =1;i <= n;i ++){
           cin >> a1 >> a2 >> a3;
          if(root == NULL){
               khoi_tao(root,a1);
               if(a3== 'L')  khoi_tao(root->left,a2);
               else khoi_tao(root->right,a2);
          }
          else 
           creat_tree(root,a1,a2,a3);
        }
      int l = 0;
        cout << check_node_leaf(root,0,l) << endl; // truyền vào địa chỉ của l 
    }
}

