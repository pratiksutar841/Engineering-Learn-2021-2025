/*1. Given an array of elements, construct a complete binary tree from this array in level order 
fashion. That is, elements from left in the array will be filled in the tree level wise starting from 
level 0. Ex: Input : 
arr[] = {1, 2, 3, 4, 5, 6} 
Output : Root of the following tree 
      1 
    /  \ 
   2    3 
  / \   / \ 
4      5   6  */

#include <stdio.h> 
#include<stdlib.h> 
struct NODE
    {
            int data;
            struct NODE* left, * right;
    };

   typedefstruct NODE Node; Node* getNode(int data) 
          {
            Node* node = (Node *) malloc(sizeof(struct NODE)); 
            node->data = data;
            node->left = node->right = NULL;
            return node;
          }

    Node* insertLevelWise(intarr[], Node* root, inti, int n) 
      { 
        if (i< n) 
        {
          Node* temp = getNode(arr[i]); root = temp;
          root->left = insertLevelWise(arr, root->left, 2 * i + 1, n); 
          root->right = insertLevelWise(arr, root->right, 2 * i + 2, n);
        }
        return root;
      }

     voidinorderTrav(Node* root) { if (root != NULL)
    {
      inorderTrav(root->left); 
      printf("%d ",root->data); 
      inorderTrav(root->right);
    }
}
int main() 
    {
        /*intarr[] = { 1, 2, 3, 4, 5, 6}; int n = sizeof(arr)/sizeof(arr[0]);*/ inti, n, a[10];
        printf("\nEnter the number of Nodes\n"); 
        scanf("%d",&n);
        printf("\nEnter the array elements\n"); 
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        Node* root = insertLevelWise(a, root, 0, n); 
        printf("Inorder traversal of created tree: "); 
        inorderTrav(root);
    }


/*
OUTPUT:
Enter the number of Nodes 5

Enter the array elements 1
2
3
4
5
Inorder traversal of created tree: 4 2 5 1 3

*/