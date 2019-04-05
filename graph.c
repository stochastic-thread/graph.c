#include "graph.h"
#include <stdio.h>
#include <stdlib.h>

Node *new_node( char *key, char *val ) {
    Node *node = malloc(sizeof(Node));
    node->label = key;
    node->value = val;
    return node;
};

int inspect(Node *node)
{
    printf("\n{ 'label': \"");
    fputs(node->label, stdout);
    printf("\",");
    printf("'value': \"");
    fputs(node->value, stdout);
    printf("\"}");
    return 0;
}
