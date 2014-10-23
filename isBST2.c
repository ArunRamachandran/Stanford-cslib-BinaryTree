#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int isBSTRecur(struct node *node, int min, int max) {
	if (node == NULL) return (TRUE);
	if (node->data > max || node->data < min) return (FALSE);
	else {
		isBSTRecur(node->left,min,node->data);
		isBSTRecur(node->right,node->data,max);
	}
}
		
		
int isBST2(struct node *node) {
	if (node == NULL) return;

	else {
		int min = minValue(node);
		int max = maxValue(node);
	
		return (isBSTRecur(node,min,max));
	}
}
main() {
	struct node *root = NULL;
	int value;

	root = plain_binary_tree();
	printf("Initial Tree \n");
	print(root);

	value= isBST2(root);

	if (value == 1)
		printf("Yes..It's Binary Search Tree.\n");
	else
		printf("It's not a binary search Tree.\n");
}
