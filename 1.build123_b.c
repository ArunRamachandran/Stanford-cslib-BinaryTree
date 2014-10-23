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

main() {
	struct node *node = malloc(sizeof(struct node));

	node 	   = NewNode(2);
	node->left = NewNode(1);
	node->right= NewNode(3);
}
