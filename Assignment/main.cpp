//
//  main.cpp
//  Assignment
//
//  Created by Md. Jahid Hasan Naiem on 5/4/18.
//  Copyright © 2018 Md. Jahid Hasan Naiem. All rights reserved.
//

#include <iostream>
#include <stdlib.h>


struct node
{
    int data;
    struct node* left, *right;
};


void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);

/* Function to print New order traversal a tree*/
void printNewOrder(struct node* root)
{
    int h = height(root);
    printf("Hiegth is :%d \n", h);
    int i;
    for (i=h; i>=1; i--)
        printGivenLevel(root, i);
}

static int printLast(struct node *root) {
    return printf("%d ", root->data);
}

/* Print nodes at a given level */
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printLast(root);
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

/* Compute the "height" of a tree -- the number of
 nodes along the longest path from the root node
 down to the farthest leaf node.*/
int height(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);
        
        /* use the larger one */
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}

/* Helper function that allocates a new node with the
 given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)
    malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return(node);
}

/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(15);
    root->left     = newNode(8);
    root->right     = newNode(50);
    root->left->left = newNode(2);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right->left     = newNode(25);
    root->right->right    = newNode(75);
    
    printf("Level Order traversal of binary tree is \n");
    printNewOrder(root);
    
    return 0;
}

