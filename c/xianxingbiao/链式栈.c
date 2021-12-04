#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct stuck{
    int data;
    struct stuck*pnext;    
}STUCK,*PSTUCK;
bool init (PSTUCK L){
    L->pnext=NULL;
}
bool ruzhan(PSTUCK L,int shu){
     PSTUCK pnew=(PSTUCK)malloc(sizeof(STUCK));
     pnew->pnext=L;
     pnew->data=shu;
     L=pnew;//链式栈不需要头节点以及底部指针，因为链式栈后进先出每次出去的时候都是从最后出的，而且不用担心栈满的情况

}
chuzhan(PSTUCK L,int *shu){
if(L==NULL)return false;
shu=L->data;
PSTUCK p=L;
L=L->pnext;
free(p);
p=NULL;//注意释放出栈的元素
return true;

}
int main(){
STUCK L;
init (&L);int vail;scaf("%d",&vail);
ruzhan(&L,vail);int chuzhanbaocundeshu;
chuzhan(&L,&chuzhanbaocundeshu);


    return 0;
}