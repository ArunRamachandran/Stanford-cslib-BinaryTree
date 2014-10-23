/* Sample Lookup() fn. for a binary search tree */

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

static int lookup(struct node *node, int target)
{
	//1. if Base case == empty tree
	// in that case, the target is not found so return false
	if (node == NULL) {
		return (false);
	}
	else {
		//2. see if found here
		if (target == node->data) return (true);
		else {
			//3. otherwise recur down the correct subtree
			if (target < node->data) return ( lookup(node->left, target));
			else return (lookup(node->right, target));
		}
	}
}
