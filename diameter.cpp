#include<bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    node *left,*right;

};
int height(node* root, int &ans)
{

    if(root == NULL)
        return 0;
    int left_height = height(root->left,ans);
    int right_height = height(root->right,ans);
    ans = max(ans, 1+ left_height + right_height);
    return 1 + max(left_height, right_height);
}
int diameter (node* root)
{
    if(root == NULL)
        return 0;
    int ans = INT_MIN;
    int height_of_tree = height(root,ans);
    return ans;
}
struct node* newnode(int data)
{

    struct node* Node = new node;
    Node->data = data;
    Node->left = Node->right = NULL;
    return Node;
};
int main()
{
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    cout<< " diameter is "<<diameter(root)<<endl;
    return 0;
}
