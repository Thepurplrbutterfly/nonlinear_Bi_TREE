typedef char char_t;
typedef struct treenode{
    char_t value;
    struct treenode *leftnode;
    struct treenode *rightnode;
} bitree;
bitree * tree_create();//树创建函数声明
void tree_pretraverse(bitree *t);//先序遍历函数声明
void tree_midtraverse(bitree *t);//中序遍历函数声明
void tree_posttraverse(bitree *t);//后序遍历函数声明
void tree_layertraverse(bitree *t);//层次遍历函数声明
