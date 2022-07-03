
#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int  data;
    struct Node* left;
    struct Node* right;
};
 
struct Node* newNode(int  data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 int preIndex = 0;
struct Node* buildTree(int  in[], int  pre[], int inStrt,
                       int inEnd, unordered_map<int , int> mp)
{
  //  static int preIndex = 0;
 
    if (inStrt > inEnd)
        return NULL;

    int  curr = pre[preIndex++];
    struct Node* tNode = newNode(curr);
    if (inStrt == inEnd)
        return tNode;
 
    int inIndex = mp[curr];
    tNode->left = buildTree(in, pre, inStrt, inIndex - 1, mp);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd, mp);
 
    return tNode;
}
struct Node* buldTreeWrap(int  in[], int  pre[], int len)
{

    unordered_map<int , int> mp;
    for (int i = 0; i < len; i++)
        mp[in[i]] = i;
 
    return buildTree(in, pre, 0, len - 1, mp);
}
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printInorder(node->right);
    cout << node->data <<" ";
}
 
int main()
{
    int x,n; cin >> x;
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(x--){
        cin >>n;
        int in[n+1],pre[n+1];
        for(int i = 0;i < n;i ++) cin >>in[i];
        for(int i = 0;i < n;i ++) cin >> pre[i];
         struct Node* root = buldTreeWrap(in, pre, n);
          printInorder(root); preIndex =0;
          cout << endl;
    }
   
}