#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *NewNode_b(int data) {
	struct node *new = malloc(sizeof(struct node));

	new->data = data;
	new->left = NULL;
	new->right= NULL;

	return (new);
}

struct node *Insert_b(struct node *node, int data) {
	if (node == NULL) {
		return (NewNode_b(data));
	}
	else {
		if (data <= node->data) node->left = Insert_b(node->left, data);
		else node->right = Insert_b(node->right, data);

		return (node);
	}
}

struct node *b() {
	struct node *root = NULL;

	root = Insert_b(root,2);
	root = Insert_b(root,2);
	root = Insert_b(root,3);
//	root = Insert(root,1);
//	root = Insert(root,3);
//	root = Insert(root,1);
//	root = Insert(root,12);
//	root = Insert(root,13);
//	root = Insert(root,2);
//	root = Insert(root,1);
	
	return root;
}
