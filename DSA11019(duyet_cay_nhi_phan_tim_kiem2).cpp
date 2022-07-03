#include<bits/stdc++.h>
using namespace std;
int a[1005];
struct Node{
 int data;
 struct Node *left;
 struct Node *right;
};
Node *khoi_tao(int d){
    Node *root = new Node;
    root->data = d;
    root->left = root->right = NULL;
    return root;
}
Node *creat_branch(int &pre,int low,int high, int n){
    if(pre >= n+1 || low > high) return NULL;
    Node *root = khoi_tao(a[pre]);
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
Node *creat_tree(int n){
   int pre = 1;
   return creat_branch(pre,1,n,n);
}
void duyet(Node *root){
    if(root == NULL) return;
    duyet(root->left);
    duyet(root->right);
    cout << root->data <<" ";
}
int main(){
    int x,n;
    cin >> x;
    while(x--){
        cin >> n;
        for(int i = 1; i <= n; i ++) cin >> a[i];
        Node *root= creat_tree(n);
        duyet(root);
        cout << endl;
    }
}