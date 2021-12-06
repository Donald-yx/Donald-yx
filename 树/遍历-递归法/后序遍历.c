#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int data;
    struct donald *lchild,*rchild;
}NODE,*PNODE;
bool houxubianli(PNODE L){
if(L!=NULL){
    houxubianli(L->lchild);
    houxubianli(L->rchild);
    printf("%d",L->data);
    
}
}
int main(){
    NODE L;
    houxubianli(&L);
    return 0;
}