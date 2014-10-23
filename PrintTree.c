#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void PrintTree(struct node *node) {
	if ( (node->left == NULL) && (node->right == NULL) )
		printf("%d\n", node->data);
	if ( node->left != NULL)
		PrintTree(node->left);
	if ( node->right != NULL)
		PrintTree(node->right);
}
/*
main()
{
}
*/
