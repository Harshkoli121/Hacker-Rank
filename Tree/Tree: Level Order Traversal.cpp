#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node*>que;
if(root!=NULL)
{
    que.push(root);
}

while(!que.empty()){
    Node* temp=que.front();
    
    if(temp->left)
    {
        que.push(temp->left);
    }
    if(temp->right)
    {
        que.push(temp->right);
    }
    que.pop();
    cout<<temp->data<<" ";
    }
}

}; //End of Solution
