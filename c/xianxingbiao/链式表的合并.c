#include<stdio.h>
#include<malloc.h>
typedef struct node{
    int data;
    struct node *pnext;
}NODE,*PNODE;
int main(){
PNODE m=(PNODE)malloc(sizeof(NODE));
PNODE n=(PNODE)malloc(sizeof(NODE));
m->pnext=NULL;n->pnext=NULL;
int i;
for(i=0;i<5;i++){
    PNODE pnew=(PNODE)malloc(sizeof(NODE));
     PNODE p=m;
     m->pnext=pnew;
    pnew->pnext=NULL;
    pnew->data=i+20;
   p=pnew;
}
for(i=0;i<6;i++){
    PNODE pnew=(PNODE)malloc(sizeof(NODE));
     PNODE q=m;
     n->pnext=pnew;
    pnew->pnext=NULL;
    pnew->data=i+2;
   q=pnew;
}
PNODE c=m;
PNODE x=m->pnext;
PNODE y=n->pnext;
while(x->pnext==NULL||y->pnext==NULL){
    if(x->data>y->data){c->pnext=x;x->pnext=NULL;}
    else {c->pnext=y;y->pnext=NULL;}
}
if(x->pnext==NULL)c->pnext=y->pnext;
c->pnext=x->pnext;
return c;

}