#include <stdio.h>
#include "unionfind.h"

int main(){
    TreeNode *node1 = makeSet(3);
    TreeNode *node2 = makeSet(5);

    printf("Node 1 parent : %i", find(node1));
    printf("Node 2 parent : %i", find(node2));

    unions(node1, node2);
    
    printf("Node 2 parent : %i", find(node2));

    return 0;
}
