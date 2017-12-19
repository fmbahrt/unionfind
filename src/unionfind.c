#include "unionfind.h"
#include <stdlib.h>

TreeNode *makeSet(int val){
    TreeNode *node = malloc(sizeof(TreeNode));
    node->number = val;
    node->parent = node;
    node->rank   = 0;
    return node;
};

// Recursive as of right now - Make this iterative
TreeNode *findSet(TreeNode *node){
    if (node != node->parent){
        node->parent = findSet(node->parent);
    }
    return node->parent;
}

void unions(TreeNode *node_x,
            TreeNode *node_y){
    link(findSet(node_x), findSet(node_y));
}

void link(TreeNode *node_x,
          TreeNode *node_y){
    if (node_x->rank > node_y->rank){
        node_y->parent = node_x;
    }
    else{
        node_x->parent = node_y;
        if (node_x->rank == node_y->rank){
            node_y->rank = (node_y->rank) + 1;
        }
    }
}
