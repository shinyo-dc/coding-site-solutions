/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/


class Solution {
public:
    /* Recursive method */
    vector<int> result;
    vector<int> preorder_recursive(Node* root) {
        if (root == nullptr) return result;
        result.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++) {
            preorder_recursive(root->children[i]);
        }
        return result;
    }
    
    /* Iterative method */
    vector<int> preorder(Node* root) {
        vector<int> result;
        stack<Node*> s;
        if (root == nullptr) return result;
        s.push(root);
        while (!s.empty()) {
            Node* pop = s.top();
            result.push_back(pop->val);
            s.pop();
            for (int i = pop->children.size() - 1; i >= 0; i--) {
                s.push(pop->children[i]);
            }
        }
        return result;
    }
};
