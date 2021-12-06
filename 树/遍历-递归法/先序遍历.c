#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int data;
    struct donald *lchild,*rchild;
}NODE,*PNODE;
bool xianxubianli(PNODE L){
    if(L!=NULL){
        printf("%d",L->data);//这里可以是修改值或者取出值等等
        xianxubianli(L->lchild);
        xianxubianli(L->rchild);
    }
}



int main(){
NODE L;
xianxubianli(&L);








    return 0;
}