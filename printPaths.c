#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void printPaths(struct node *node) {
	if (node == NULL) {
		printf("\n");
		return ;
	}

	if (node != NULL)
		printf("%d\t", node->data);
	printPaths(node-);
	printPaths(node->right);
	printPaths(node->left);
//	printPaths(node->right);
}

main() {
	struct node *root = NULL;

	root = build123();

	printPaths(root);
}
