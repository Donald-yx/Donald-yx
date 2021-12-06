#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int data;
    struct donald *lchild,*rchild;
}NODE,*PNODE;
bool zhongxubianli(PNODE L){
if(L!=NULL){
    zhongxubianli(L->lchild);
    printf("%d",L->data);
    zhongxubianli(L->rchild);
}
}
int main(){
    NODE L;
    zhongxubianli(&L);
    return 0;
}