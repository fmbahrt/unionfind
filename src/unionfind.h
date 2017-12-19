#ifndef UNION_FIND_H_
#define UNION_FIND_H_

typedef struct TreeNode{
   int number;
   struct TreeNode *parent;
}TreeNode;

TreeNode *makeSet(int val);
int find(TreeNode *node);
void unions(TreeNode *node_x,
	    TreeNode *node_y);

#endif
