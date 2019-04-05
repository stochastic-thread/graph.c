#include "graph.h"
#include <stdio.h>

Node *new_node( char *key, char *val ) {
    Node *node = malloc(sizeof(Node));
    node->label = key;
    node->value = val;
    return node;
};

int inspect(Node *node)
{
    printf("\n\{ 'label': \"");
    fputs(node->label, stdout);
    printf("\",");
    printf("'value': \"");
    fputs(node->value, stdout);
    printf("\"\}");
    return 0;
}

int main( int argc, const char* argv[] )
{
    char k[64];
    char v[1024];
    gets(k);
    gets(v);
    Node *node = new_node(k, v);
    int succ = inspect(node);
    return 0;
}


