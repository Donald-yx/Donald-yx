#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int data;
    struct donald*pnext;
}QUENE,*PQUENE;
typedef struct ddsds{
    PQUENE front ;
    PQUENE rear;
}NODE,*PNODE;
bool init(PNODE L){
L->front=(PQUENE)malloc(sizeof(QUENE));//注意指针类型 以及分配内存的类型
if(L->front==NULL)return false;
L->rear=L->front;return true;
}
bool xiaohui (PNODE L){
    PQUENE p=L->front;L->front=L->front->pnext;free(p);p=NULL;return true;
}
bool rudui (PNODE L,int shu){
    if(L->front==L->rear)return false;
    PQUENE p=(PQUENE)malloc(sizeof(QUENE));
    L->rear->data=shu;
    L->rear->pnext=p;
    p->pnext=NULL;return true;
}
bool chudui(PNODE L,int *shu){
    if(L->front==L->rear)return false;
    shu=L->front->data;
    PQUENE p=L->front->pnext;
    L->front=L->front->pnext->pnext;
    free(p);p=NULL;return true;
}
int main(){
NODE L;
init (&L);int vail;scaf("%d",&vail);
xiaohui(&L);int chuduishu;
rudui(&L,vail);
chudui(&L,&chuduishu);
    return 0;
}