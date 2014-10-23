#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *NewNode(int data) {
	struct node *new = malloc(sizeof(struct node));

	new->data = data;
	new->left = NULL;
	new->right= NULL;

	return (new);
}

struct node *Insert(struct node *node, int data) {
	if (node == NULL) {
		return (NewNode(data));
	}
	else {
		if (data <= node->data) node->left = Insert(node->left, data);
		else node->right = Insert(node->right, data);

		return (node);
	}
}

struct node *build123() {
	struct node *root = NULL;

	root = Insert(root,4);
	root = Insert(root,2);
	root = Insert(root,5);
	root = Insert(root,1);
	root = Insert(root,3);
//	root = Insert(root,3);
//	root = Insert(root,12);
//	root = Insert(root,13);
//	root = Insert(root,2);
//	root = Insert(root,1);
	
	return root;
}
