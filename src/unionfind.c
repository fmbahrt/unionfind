#include "unionfind.h"
#include <stdlib.h>

TreeNode *makeSet(int val){
    TreeNode *node = malloc(sizeof(TreeNode));
    node->number = val;
    node->parent = node;
    return node;
};

// Recursive as of right now - Make this iterative
TreeNode *findSet(TreeNode *node){
    if (node != node->parent){
        node->parent = findSet(node->parent);
    }
    return node->parent;
}

// Right way to use pointers?
void unions(TreeNode *node_x,
            TreeNode *node_y){
    node_y->parent = node_x;
}
