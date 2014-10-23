#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int minValue(struct node *node) {
	if (node->left != NULL)
		minValue(node->left);
	else
		return (node->data);
}
/*
main() {
	struct node *root = NULL;
	int min = 0;

	root = build123();
	min  = minValue(root);

	printf("Min.Value : %d\n", min);
}*/
