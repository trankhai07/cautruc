#include<bits/stdc++.h>
using namespace std;
int a[1005];
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
Node *start_node(int d){
    Node *r = new Node;
    r->data =d;
    r->left = r->right = NULL;
    return r;
}
Node*creat_branch(int &pre,int low,int high,int n){
    if(pre >= n+1 || low > high) return NULL;
    Node *root = start_node(a[pre]);
    pre++;
    if(low == high) return root;
    int i;
    for(i = low;i <= high;i ++){
        if(a[i] > root->data) break;
    }
    root->left = creat_branch(pre,pre,i-1,n);
    root->right =creat_branch(pre,i,high,n);
    return root;
}
Node *creat_tree(int n){
    int pre = 1;
    return creat_branch(pre,1,n,n);
}
int Max = INT_MIN;
void duyet_level(Node *root,int level){
      if(root == NULL) return ;
      Max = max(Max,level);
      duyet_level(root->left,level+1);
      duyet_level(root->right,level+1);
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        for(int i = 1;i <= n;i ++) cin >> a[i];
        Node *root = creat_tree(n);
        duyet_level(root,0);
        cout<<Max <<endl;
        Max = INT_MIN;
    }
    return 0;
}