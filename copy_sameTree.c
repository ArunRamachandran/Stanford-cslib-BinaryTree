#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int sameTree(struct node *a, struct node *b) {
	struct node *node_a = malloc(sizeof(struct node));
	struct node *node_b = malloc(sizeof(struct node));

	if (a == NULL || b == NULL) return;
	
	if (a->data != b->data) return FALSE:

	node_a->data = sameTree(a->left,b);
	node_b->data = sameTree(a,b->left);
	
	if ( node_a->data != node_b->data) return FALSE;
	

	node_a->data = sameTree(a->right,b);
	node_b->data = sameTree(a,b->right);

	if ( node_a->data != node_b->data) return FALSE;

}

main() {
	struct node *root_a = NULL;
	struct node *root_b = NULL;

	int choice = TRUE;

	root_a = build123();
	root_b = b();

	printf("Initial Lists : \na -> \n");
	print(root_a);
	printf("b -> \n");
	print(root_b);
	printf("\n");

	choice = sameTree(root_a, root_b);

	if (choice == TRUE)
		printf("Both are same\n");
	else
		printf("Both are different:\n");
}
