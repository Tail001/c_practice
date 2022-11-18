#include<stdio.h>
#include<stdlib.h>
// use binary tree for packing
typedef struct node{
    struct node *parent;
    struct node *down;
    struct node *right;
    int used;
    int width;
    int height;
    int x;
    int y;
}Node;
typedef struct block{
    Node *fit;
    int accept;
    int id;
    int width;
    int height;
    int x;
    int y;
}Block;

int res = 0;
int map_x, map_y, req_num;
Node *findNode(Node*,int , int );
Node *splitNode(Node**, int, int);

int main(){
    int i, j;

    Node *root;
    Block **blocks;

    scanf("%d %d %d", &map_y, &map_x, &req_num);
    //root init:
    root = malloc(sizeof(Node));
    root -> x = root -> y = 0;
    root -> width = map_x;
    root -> height = map_y;
    root -> down = NULL;
    root -> right = NULL;
    root -> used = 0;

    // allocation for blocks
    blocks = malloc(sizeof(Block) * req_num);

    for(i = 0 ; i < req_num ; i++){
        int index, x_dir, y_dir;
        scanf("%d %dx%d%*[^\r\n]", &index, &y_dir, &x_dir);
        blocks[i] = malloc(sizeof(Block));
        blocks[i] -> accept = 0;
        blocks[i] -> id = index;
        blocks[i] -> height = y_dir;
        blocks[i] -> width = x_dir;

    }
    int x=0;
    if(map_y<16 || map_x<16){
        for(int i=0;i<req_num;i++){
            if(x+blocks[i]->width-1>=map_x || blocks[i]->height>=map_y){
                continue;
            }
            res++;
            x+=blocks[i]->width;
            }
        printf("%d\n",res);
        x=0;
        for(int i=0;i<req_num;i++){
            if(x+blocks[i]->width-1>=map_x || blocks[i]->height>=map_y){
                continue;
            }
            printf("%d %dx%d 0 %d\n",i,blocks[i]->height,blocks[i]->width,x);
            x+=blocks[i]->width;
            }
        return 0;
    }
    //bubble sort
    for(i = 0 ; i < req_num ;i++){
        for(j = 0 ; j < req_num - i - 1 ; j++){
            if(blocks[j] -> width > blocks[j + 1] -> width){
                Block *temp = blocks[j + 1];
                blocks[j + 1] = blocks[j];
                blocks[j] = temp;
            }
        }
    }

    //FIT
    for(i = 0; i < req_num ; i++){
        Node *node;
        Block *block = blocks[i];

        node = findNode(root, block -> height, block -> width);
        if(node){
            block -> fit = splitNode(&node, block -> height, block -> width);
            res++;
        }

    }
    int req=0;
    for(i = 0 ; i < res ; i++){
        if(blocks[i] -> fit){
            if(blocks[i]->fit->x <= map_x && blocks[i]->fit->y <= map_y){
                req++;
            }

        }
    }
    printf("%d\n", req);
    for(i = 0 ; i < res ; i++){
        Block *block = blocks[i];
        if(block -> fit){
            if(block->fit->x <= map_x && block->fit->y <= map_y){
                printf("%d %dx%d ", block->id, block -> height, block -> width);
                printf("%d %d\n", block -> fit -> y, block -> fit -> x);
            }

        }
    }
    return 0;
}

Node *findNode(Node *root, int height, int width){
    if(root -> used == 1){
        Node *rightNode = findNode(root -> right, height, width);
        if(rightNode != NULL)
            return rightNode;
        Node *downNode = findNode(root -> down, height, width);
        return downNode;
    }
    else if((root -> width >= width) && (root -> height >= height)){
        // enough space
        return root;
    }
    else{
        return NULL;
    }
}

Node *splitNode(Node **node, int height, int width){
    (*node) -> used = 1;

    if((*node) -> height >0){
    (*node) -> down = malloc(sizeof(Node));
    (*node) -> down -> parent = (*node);
    (*node) -> down -> down = NULL;
    (*node) -> down -> right = NULL;
    (*node) -> down -> x = (*node) -> x;
    (*node) -> down -> y = (*node) -> y + height;
    (*node) -> down -> width = (*node) -> width;
    (*node) -> down -> height = (*node) -> height - height;
    (*node) -> down -> used = 0;
    }
    (*node) -> right = malloc(sizeof(Node));
    (*node) -> right -> parent = (*node);
    (*node) -> right -> down = NULL;
    (*node) -> right -> right = NULL;
    (*node) -> right -> x = (*node) -> x + width;
    (*node) -> right -> y = (*node) -> y;
    (*node) -> right -> width = (*node) -> width - width;
    (*node) -> right -> height = height;
    (*node) -> right -> used = 0;

    return *node;
}

/*
15 32 5
0 4x4
1 1x16
2 8x2
3 1x16
4 16x1

15    32    19
0    4x4    2x8
1    1x16
2    8x2    4x4    2x8
3    2x8    1x16
4    16x1  8x2  4x4  2x8  1x16
5    8x2
6    2x8
7    4x4
8    4x4
9    16x1
10   16x1
11   1x16
12   1x16
13   1x16
14   1x16
15   1x16
16   1x16
17   1x16
18   1x16


15 32 3
0 16x1
1 1x16
2 16x1


*/
