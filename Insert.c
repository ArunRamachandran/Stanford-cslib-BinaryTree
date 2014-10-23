#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

/* 
Helper fn that allocates a new node 
with the given data and NULL left and right
pointers.
*/

struct node *NewNode(int data)
{
	struct node *node = new(struct node); // "new" is like "malloc"
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}

/*
Give a binary search tree and anumber, inserts a new node
with the given number in the correct place in the tree.
Returns the new root pointerwhich the caller should
then use (the std. trick to avoid using reference parameters).
*/

struct node *Insert(struct node *node, int data) 
{
	//1. if the tree is empty return a new, single node
	if (node == NULL) {
		return(NewNode(data));
	}
	else {
		//2. Otherwise, recur down the tree
		if (data <= node->data) node->left = Insert(node->left, data);
		else node->right = Insert(node->right, data);

		return (node); // return the (unchanged) node pointer
	}
}
