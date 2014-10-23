#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int isBST(struct node *node) {
	if (node == NULL) return;

	else {
		int min, node_value = node->data;
		isBST(node->left);
		if (minValue(node) > node_value)
			return FALSE;
		else return TRUE;
		isBST(node->right);
		if (maxValue(node) < node_value)
			return FALSE;
		else return TRUE;
	}	
}

main() {
	struct node *root = NULL;
	int value;

	root = plain_binary_tree();
	printf("Initial tree :\n");
	print(root);

	value= isBST(root);	

	if (value == 1)
		printf("\nIs a Binary Search Tree\n");
	else
		printf("\nNot a Binary Search Tree\n");
}
	
