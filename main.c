#include <graph.h>
#include <stdio.h>

int main( int argc, const char* argv[] )
{
    char k[64];
    char v[1024];
    fgets(k, sizeof k, stdin);
    fgets(v, sizeof v, stdin);
    Node *node = new_node(k, v);
    int succ = inspect(node);
    return 0;
}


