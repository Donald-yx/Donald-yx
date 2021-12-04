#include<stdio.h>//描述的是一个多项式链表的创建
#include<stdlib.h>
typedef struct node{
int zhishu;
int changshu;
PNODE next;
}NODE,*PNODE;
int main(){
PNODE m;
PNODE head=(PNODE)malloc(sizeof(NODE));
m->next=head;
head->next=NULL;
PNODE per=m;int i,n;scanf("%d",&n);
for(i=0;i<n;i++){
    PNODE c=(PNODE)malloc(sizeof(NODE));
    scanf("%d %d",&m->zhishu,&m->changshu);
    per=m;
    PNODE p=m->next;
    while(c->zhishu<p->zhishu&&p){
per=p;p=p->next;
    }per->next=c;c->next=p->next;
}










    return 0;
}