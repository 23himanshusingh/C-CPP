#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left; struct Node* right;
};typedef struct Node Node;

Node* newNode(int key){
    Node node = (Node)(malloc(sizeof(Node)));
    node->data = key;
    node->left = node->right = NULL;
    return node;
}

Node Insert(Node node, int key){
    if (node==NULL){
        return newNode(key);
    }

    if (key<node->data)
        node->left = Insert(node->left,key);
    else if (key>node->data)
        node->right = Insert(node->right,key);
    
    return node;
}
// static int count=0;

int calcHeight(Node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lHeight = calcHeight(node->left);
        int rHeight = calcHeight(node->right);
 
        if (lHeight> rHeight)
            return (lHeight+1);
        else
            return (rHeight+1);
    }
}
void printPaths(Node* node)
{
  int path[1000];
  printPathsRecur(node, path, 0);
}
 
/* Recursive helper function -- given a node, and an array containing
 the path from the root node up to but not including this node,
 print out all the root-leaf paths.*/
void printPathsRecur(Node* node, int path[], int pathLen)
{
  if (node==NULL)
    return;
 
  /* append this node to the path array */
  path[pathLen] = node->data;
  pathLen++;
 
  /* it's a leaf, so print the path that lead to here  */
  if (node->left==NULL && node->right==NULL)
  {
    printArray(path, pathLen);
  }
  else
  {
    /* otherwise try both subtrees */
    printPathsRecur(node->left, path, pathLen);
    printPathsRecur(node->right, path, pathLen);
  }
}
 
 
/* UTILITY FUNCTIONS */
/* Utility that prints out an array on a line. */
void printArray(int ints[], int len)
{
  int i;
  for (i=0; i<len; i++)
  {
    printf("%d ", ints[i]);
  }
  printf("\n");
}   
 
int main(){
    int n;
    scanf("%d", &n);
    int array[7];
    for (int i=0;i<7;i++){
        scanf("%d", &array[i]);
    }
    Node* root = NULL;
    root = Insert(root,array[0]);
    for (int i=1;i<7;i++){
        if (array[i]!=-1){
            Insert(root,array[i]);
        }
    }
    printf("%d", calcHeight(root)-1);
    printPaths(root);
    
    return 0;
}