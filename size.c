#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int count;

int size(struct node *node) {
	
//	int count = 0;

	if (node == NULL) 
		return 0 ;
	else
		return (size(node->left) + 1 + size(node->right));
	

}

main() {
	struct node *root = NULL;
	int s = 0;

	root = build123();
	
	s = size(root);
	printf("%d\n", s);
}
