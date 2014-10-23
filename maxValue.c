#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int maxValue(struct node *node) {
	if (node->right != NULL)
		maxValue(node->right);
	else
		return (node->data);
}
/*
main() {
	struct node *root = NULL;
	int max = 0;

	root = build123();
	print(root);
	max  = minValue(root);

	printf("\nMax.Value : %d\n", max);
}*/
