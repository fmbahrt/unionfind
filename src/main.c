#include <stdio.h>
#include "unionfind.h"

int main(){
    TreeNode *node1 = makeSet(1);
    TreeNode *node2 = makeSet(2);
    TreeNode *node3 = makeSet(3);

    printf("Node 1 rank : %i\n", node1->rank);
    printf("Node 2 rank : %i\n", node2->rank);
    printf("Node 3 rank : %i\n", node3->rank);

    printf("UNION\n");
    unions(node1, node2);
    printf("Node 1 rank : %i\n", node1->rank);
    printf("Node 2 rank : %i\n", node2->rank);

    printf("FINDSET\n");
    printf("Node 1 set : %i\n", findSet(node1)->number);
    printf("Node 2 set : %i\n", findSet(node2)->number);

    printf("UNION\n");
    unions(node1, node3);
    printf("Node 1 rank : %i\n", node1->rank);
    printf("Node 3 rank : %i\n", node3->rank);

    printf("FINDSET\n");
    printf("Node 1 set : %i\n", findSet(node1)->number);
    printf("Node 3 set : %i\n", findSet(node3)->number);
    
    return 0;
}
