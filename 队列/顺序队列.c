#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int *duilie;
    int front;
    int rear;
}NODE,*PNODE;
bool init (PNODE L){
L->duilie=(PNODE)malloc(sizeof(NODE)*100);
if(L->duilie==NULL)return false;
L->front=L->rear=0;return true;
}
duiliechangdu(PNODE L,int *length){
    *length=(L->rear-L->front+100)%100;
}
bool rudui(PNODE L,int shu){
    if((L->rear+1)%100==(L->front)%100)return false;
    L->duilie[L->rear]=shu;
    L->rear=(L->rear+1)%100;
}
bool chudui(PNODE L,int *shu){
    if(L->front==L->rear)return false;
    shu=L->duilie[L->front];
    L->front=(L->front+1)%100;
}//和顺序数组一样该块空间已经分配给我们了，不需要删除，下一次入对的时候就会覆盖；
int main(){
    NODE L;int ruduishu,length;
    init (&L);int chuduishu;
    duiliechangdu(&L,&length);
    rudui(&L,ruduishu);
    chudui(&L,&chuduishu);
    return 0;
}