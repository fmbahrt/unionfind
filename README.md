# Union-Find Data Structure

A disjoint set data structure implementation in c.

Utilizing heuristics; path compression and union by rank

## Use Cases

### Use Case #1
Kruskal's algorithm - (https://en.wikipedia.org/wiki/Kruskal%27s_algorithm)
```c
#include <stdio.h>
#include <stdlib.h>
#include "unionfind.h"

#define MAX_EDGES 2
#define MAX_VERTICES 3

typedef struct Edge{
    int v1; //Vertex one
    int v2; //Vertex Two
    int w;  //Weight
}Edge;

typedef struct Graph{
    Edge edges[MAX_EDGES];
    int vertices[MAX_VERTICES];
}Graph;

TreeNode *kruskal(Graph *g){
    TreeNode *nodes[MAX_VERTICES];

    for (unsigned int i = 0; i < MAX_VERTICES; i++){
        nodes[i] = makeSet(g->vertices[i]);
    }
    //Assuming edges are sorted in ascending order.
    for (unsigned int i = 0; i < MAX_EDGES; i++){
    //Needs implementation....}
}
}
```

### Use Case #2
Connected Components (Graph Theory) - (https://en.wikipedia.org/wiki/Connected_component_%28graph_theory%29)
## Authors

* **Frederik Bahrt**  - (https://github.com/fmbahrt)
