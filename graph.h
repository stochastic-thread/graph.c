/* License */

typedef struct node {
    char *label; /* key */
    char *value; /* assocatied information */
} Node;

typedef struct edge {
    Node *node1;
    Node *node2;
    char *relationship; /* node1 <- relationship -> node2 */
} Edge;

int inspect(Node *node);
Node *new_node( char *key, char *val );




