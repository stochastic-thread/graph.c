#include "graph.h"
#include <stdio.h>

Node *new_node( char *key, char *val ) {
    Node *node = malloc(sizeof(Node));
    node->label = key;
    node->value = val;
    return node;
};

int print_node_info(Node *node)
{
    printf("Node key: ");
    puts(node->label);
    printf("Node val: \n");
    puts(node->value);
    return 0;
}

int main( int argc, const char* argv[] )
{
    char k[64];
    char v[1024];
    gets(k);
    gets(v);
    Node *node = new_node(k, v);
    int succ = print_node_info(node);
    return 0;
}


