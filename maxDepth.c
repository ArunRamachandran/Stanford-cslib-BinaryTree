#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int maxDepth(struct node *node) {
	if (node == NULL)
		return 0;

	if ( (maxDepth(node->left) + 1) > (maxDepth(node->right) + 1) )
		return (maxDepth(node->left) + 1);
	else 
		return (maxDepth(node->right) + 1);

	
}

main() {
	int max = 0;
	struct node *root = NULL;
	
	root = build123();
	max  = maxDepth(root);

	printf("%d\n", max);
}
