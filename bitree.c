#include <stdio.h>
#include <stdlib.h>
#include "listsquene.h"

/*树创建函数*/
bitree * tree_create()
{
    bitree *t = (bitree *)malloc(sizeof(bitree));
    if(t == NULL)
    {
        printf("the tree creation failed!\n");
        return NULL;
    }
    char_t ch;
    scanf("%c", &ch);
    if(ch == '#'){
        return NULL;
    }
    t->value = ch;
    t->leftnode = tree_create();
    t->rightnode = tree_create();
    return t;
}

/*树先序遍历函数：根节点->左子树->右子树*/
void tree_pretraverse(bitree *t)
{
    if(t == NULL)
    {
        return;
    }
    printf("Ntree:%c\n", t->value);
    tree_pretraverse(t->leftnode);
    tree_pretraverse(t->rightnode);
}

/*树中序遍历函数：左子树->根节点->右子树*/
void tree_midtraverse(bitree *t)
{
   if(t == NULL)
    {
        return ;
    }
    tree_midtraverse(t->leftnode);
    printf("Ntree:%c\n", t->value);
    tree_midtraverse(t->rightnode);
}

/*树后序遍历函数：左子树->右子树->根节点*/
void tree_posttraverse(bitree *t)
{
    if(t == NULL)
    {
        return;
    }
    tree_posttraverse(t->leftnode);
    tree_posttraverse(t->rightnode);
    printf("Ntree:%c\n", t->value);
}

/*树层次遍历函数：逐层进行遍历且先左后右*/
void tree_layertraverse(bitree *t)
{
    sqelink lq = squene_create();
    if(lq == NULL)
    {
        printf("the memory assigning for listsquene faild!\n");
        return ;
    }
    squene_en(lq, t);
    bitree *st = NULL;
    while(!(squene_emptycheck(lq)))
    {
        st = squene_de(lq);
        printf("%c\n", st->value);
        if(st->leftnode)
        {
            squene_en(lq, st->leftnode);
        }
        if(st->rightnode)
        {
            squene_en(lq, st->rightnode);
        }
    }
   return ;
}
