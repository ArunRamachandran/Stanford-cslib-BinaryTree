#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

int countTrees(int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	else {
		int sum = 0;
		int left, right, root;

		for (root = 1; root <= n; root + 1) {
			left = countTrees(root - 1);
			right= countTrees(n - 1);
		
			sum += left*right;
		}
	return (sum);
	}
	
}

main() {
	struct node *root = NULL;
	int num = 4, result = 0;

	printf("n = :%d\n", num);

	result  = countTrees(num);
	printf("Possible Binary search trees : %d\n", result);
}
	
	
