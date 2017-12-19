#ifndef UNION_FIND_H_
#define UNION_FIND_H_

typedef struct TreeNode{
   int number; //Node Value - temp
   struct TreeNode *parent;
}TreeNode;

TreeNode *makeSet(int val);
TreeNode *findSet(TreeNode *node);
void unions(TreeNode *node_x,
	    TreeNode *node_y);
void link(TreeNode *node_x,
          TreeNode *node_y);

#endif
