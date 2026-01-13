#include <stdio.h>
#include <stdlib.h>

// define a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// create a new binary tree node
struct TreeNode* createNode(int data) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// insert a new element into a binary tree
struct TreeNode* insert(struct TreeNode* root, int data) {
    // if root is NULL, create a new node and return it
    if (root == NULL) {
        return createNode(data);
    }
    
    // if the data is less than the root node, insert it into the left subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    // if the data is greater than the root node, insert it into the right subtree
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    
    return root;
}

// main function to test the insert function
int main() {
    struct TreeNode* root = NULL;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);
    insert(root, 13);
    insert(root, 17);
    
    // print the binary tree
    printf("The binary tree is: \n");
    printf("        %d\n", root->data);
    printf("      /   \\\n");
    printf("    %d     %d\n", root->left->data, root->right->data);
    printf("   / \\   / \\\n");
    printf("  %d   %d %d   %d\n", root->left->left->data, root->left->right->data, root->right->left->data, root->right->right->data);
    
    return 0;
}
