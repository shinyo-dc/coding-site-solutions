// namespace std have been included for this problem.
#include<bits/stdc++.h>
int height (treeNode* root) {
    if (root == nullptr)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    
    if (left > right)
        return (left+1);
    else
        return (right+1);
}
// Add any helper functions(if needed) above.
int diameter(treeNode* root) {
    if (root == nullptr)
        return 0;
        
    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);
    int rootDia = height(root->left) + height(root->right) + 1;
    
    int dia = max(leftDia, max(rightDia,rootDia));
    return dia;   
}
