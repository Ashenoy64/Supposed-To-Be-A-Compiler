#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abstract_syntax_tree.h"

expression_node *init_exp_node(char *val, expression_node *left, expression_node *middle, expression_node *right)
{
	expression_node *node = (expression_node *)malloc(sizeof(expression_node));
	node->left = left;
	node->middle = middle;
	node->right = right;
	node->val = val;
}

// void helper(expression_node* exp_node, int first)
// {
// 	if(exp_node != NULL) {
// 		if(first) {
// 			printf("%s",exp_node->val);
// 			first = 0;
// 		}
// 		else {
// 			printf(",%s", exp_node->val);
// 		}
// 		helper(exp_node->left, first);
// 		helper(exp_node->middle, first);
// 		helper(exp_node->right, first);
// 	}
// }

void display_exp_tree(expression_node *exp_node)
{
	if (exp_node != NULL)
	{
		display_exp_tree(exp_node->left);
		display_exp_tree(exp_node->middle);
		display_exp_tree(exp_node->right);
		printf("%s\n", exp_node->val);
	}
}