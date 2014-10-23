#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

void doubleTree(struct node *node) {

	struct node *temp= NULL;
	struct node *new = malloc(sizeof(struct node));;
	new->left = NULL;
	new->right= NULL;
	
	
	if (node == NULL) {
		return ;
	}
	else {
		doubleTree(node->left);
		doubleTree(node->right);

		new->data = node->data;
//		new->left = NULL;
//		new->right= NULL;
		
		temp = node->left;
		node->left = new;
		node = node->left;/* or node->left->left */
		node->left = temp;
	}
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
