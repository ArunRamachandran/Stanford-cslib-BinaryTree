#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void printTree(struct node *node) {
	if (node == NULL)
		return;
	printTree(node->left);
//	printf("%d\n", node->data);
	printTree(node->right);
	printf("%d\n", node->data);
}

main() {
	struct node *root = NULL;

	root = build123();

	printTree(root);
}
