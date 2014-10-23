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

	int error;
	if (a == NULL || b == NULL) return TRUE;
	
	sameTree(a->left,b->left);
	sameTree(a->right,b->right);

	printf("a->data : %d b->data : %d\n", a->data, b->data);
	if (a->data != b->data) {
		printf("Error detected \n");
		error = FALSE;
		printf("Error : %d\n", error);
		return FALSE;
	}

	else return TRUE;
//	if (error == FALSE) return FALSE;
//	else if (a->data == b->data) return TRUE;

//	sameTree(a->right,b->right);

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

	printf("values of choice : %d\n",choice);
	printf("%d\n", choice);
	if (choice == TRUE)
		printf("Both are same\n");
//	if (choice == FALSE)
	else
		printf("Both are different:\n");
}
