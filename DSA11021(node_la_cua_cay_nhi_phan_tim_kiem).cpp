#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
  struct node*right;
  struct node*left;
};

node* khoitao(int n){
    node*t = new node();
    t->data = n;
    t->left = NULL;
    t->right = NULL;
    return t;
}
node *creat_branch_tree(int a[],int &preindex,int low,int high,int size){
    if(preindex >= size || low  >high) return NULL;
    node *root=khoitao(a[preindex]) ;
    //khoitao(root,a[*preindex]);
    preindex++;
    if(low == high) return root;
    int i ;
    for( i =low;i <= high;i++ ){
        if(a[i] > root->data){
            break;
        }
    }
   
    root->left = creat_branch_tree(a,preindex,preindex,i-1,size);
    root->right = creat_branch_tree(a,preindex,i,high,size);
    return root;

}
node* creat_tree(int a[],int size){
    int preindex = 0;
    return creat_branch_tree(a,preindex,0,size-1,size);
}
void node_leaf(node *root){
      if(root == NULL) return ;
     
       if(root->left ==NULL && root->right == NULL){
          cout << root->data <<" ";
       }
    node_leaf(root->left);
     
    node_leaf(root->right);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int a[n+1];
        for(int i = 0;i < n;i ++) cin >> a[i];
        node *root = creat_tree(a,n);
        node_leaf(root);
        cout << endl;
    }
}