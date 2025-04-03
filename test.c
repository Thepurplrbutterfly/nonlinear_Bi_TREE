#include <stdio.h>
#include <stdlib.h>
#include "listsquene.h"
int main(int argc, char * argv[])
{
    bitree * t = tree_create();
    if(t == NULL)
    {
        return -1;
    }
    tree_layertraverse(t);
    return 0;
}
