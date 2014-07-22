#include <stdio.h>
#include <stdlib.h>

struct node {
  int x;
  struct node *next;
};

int main(int argc,char *argv[])
{
    /* This won't change, or we would lose the list in memory */
    struct node *root;       
    /* This will point to each node as it traverses the list */
    struct node *conductor;  

    root = malloc( sizeof(struct node) );  
    root->next = malloc( sizeof(struct node) );
     root->next->next=NULL;   
    root->x = 12;
    root->next->x=5;
    root->next->next->x=122;
    conductor = root; 
    if ( conductor != NULL ) {
        while ( conductor->next != NULL)
        {
           printf("%d",conductor->x);
            conductor = conductor->next;
        }
    }
    /* Creates a node at the end of the list */
    conductor->next = malloc( sizeof(struct node) );  

    conductor = conductor->next; 

    if ( conductor == NULL )
    {
        printf( "Out of memory" );
        return 0;
    }
    /* initialize the new memory */
    conductor->next = NULL;         
    conductor->x = 42;

    return 0;
}
