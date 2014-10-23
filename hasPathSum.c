#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

#define TRUE 1
#define FALSE 0

int hasPathSum(struct node *node, int sum) {
	if (sum == 0)
		return TRUE;
	sum = (sum - (node->data));
	hasPathSum(node->left,sum);
}

main() {
	struct node *root = NULL;
	int result = 0;

	root = build123();
	
	printf("Sum : %d\n", 9);
	
	result = hasPathSum(root,9);

	if (result == TRUE)
		printf("Yes..! The tree has a loop root-to-leaf with sum\n");
	else
		printf("No..!! \n");
}
	
