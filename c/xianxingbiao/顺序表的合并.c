#include<stdio.h>
#include<malloc.h>
typedef struct node{
    int length;
    int *base;
}NODE,*PNODE;

int main(){
PNODE m,n;int i;
m->base=(PNODE)malloc(sizeof(NODE)*100);
n->base=(PNODE)malloc(sizeof(NODE)*100);
for(i=0;i<20;i++){
    n->base[i]=i;n->length++;
}
for(i=0;i<10;i++){
    m->base[i]=i+20;m->length++;
}
PNODE c;c->length=m->length+n->length;
c->base=(PNODE)malloc(sizeof(NODE)*c->length);
PNODE p,q;PNODE pa,pb,pc;pa=m->base;pb=n->base;pc=c->base;
p=m->base[19];
q=n->base[9];
while(pa<=p||pb<=q)//连续数组中可以比较指针的地址值的大小
if(*pa>*pb){
*pc++=*pb++;
}else {
   *pc++=*pa++;
}
while(pa<=p){*pc++=*pa++;}//*pa++是先运算*pa之后然后再对pa进行++
while(pb<=p){*pc++=*pb++;}
return c;






    return 0;
}