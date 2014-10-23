#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node  *mirror(struct node *node) {
	if (node == NULL)
		return;
	else {
		mirror(node->right);
		mirror(node->left);

		struct node *dup = node->left;
		node->left = node->right;
		node->right= dup;	

		return node;
	}
	
	
	

}

main() {
	struct node *root = NULL;

	root = build123();
	printf("Initial tree :\n");
	print(root);

	printf("After mirror process : \n");
	root = mirror(root);
	print(root);

}
