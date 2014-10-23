#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void doubleTree(struct node *node) {

	struct node *temp;
	struct node *new = malloc(sizeof(struct node));
	
	if (node == NULL) {
		return ;
	}

	doubleTree(node->left);
	doubleTree(node->right);

	new  = node;
	temp = node->left;
	node->left = new;
	node->left->left = temp;

//	node = node->left;
//	printf("%d\n", node->data);	
//	node->left = new;
//	node = node->left;
//	node->left->left = temp;

//	doubleTree(node->left);	
//	doubleTree(node->right);
	

//	return new;
}

main() {
	struct node *root = NULL;

	root = build123();
	printf("Initial List : \n");
	print(root);

	doubleTree(root);
	printf("\n");
	print(root);
}
