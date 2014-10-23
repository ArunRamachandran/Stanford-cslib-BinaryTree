/* a: by calling NewNode() three times and using three pointer variables */

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
	new->right = NULL;

	return (new);
}
/*
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
*/
struct node *build123() {
	struct node *first = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));	
	struct node *third = malloc(sizeof(struct node));

	first = NewNode(2);
	second = NewNode(1);
	third = NewNode(3);

	first->left = second;
	first->right= third;

	return first;
}

main() {
	struct node *root = malloc(sizeof(struct node));

	root = build123();
}
 
