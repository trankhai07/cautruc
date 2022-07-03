#include<bits/stdc++.h>
using namespace std;
int a[1005],cn =0;
struct Node{
    int data;
    struct Node*left;
    struct Node *right;
};
Node *start_node(int d){
    Node *r = new Node;
    r ->data = d;
    r ->left = r ->right = NULL;
    return r;
}
Node *creat_branch(int &pre,int low ,int high,int n){
  if(pre >= n+1 || low > high) return NULL;
  Node *root = start_node(a[pre]);
  pre++;
  if(low == high) return root;
  int i;
  for(i = low; i <= high;i ++){
      if(a[i] > root->data) break;
  }
  root->left = creat_branch(pre,pre,i-1,n);
  root->right = creat_branch(pre,i,high,n);
  return root;
}
void count_node(Node *root){
    if(root == NULL) return;
    if(root->left != NULL || root->right != NULL) cn++;
    count_node(root->left);
    count_node(root->right);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        int pre =1;
        for(int i = 1;i <= n;i ++) cin >> a[i];
        Node *root = creat_branch(pre,1,n,n);
        count_node(root);
        cout << cn <<endl;
        cn =0;
    }
}