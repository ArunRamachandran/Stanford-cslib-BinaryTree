#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void print(struct node *node) {
	if (node == NULL)
		return;
	if (node != NULL)
		printf("%d\n", node->data);
	print(node->left);
	print(node->right);
}
