#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct NOSE{
int data;
struct NOSE*Pnext;
}NODE,*PNODE;
typedef struct  STaCK{
PNODE TOP;
PNODE BOTTOM;
}STACK,*PSTACK;
bool chushihua(PSTACK p){
   p->TOP=(PSTACK)malloc(sizeof(STACK));//将栈顶指向一个头节点分配一个空间给头节点
   if(p->TOP==NULL){//指向一个空的地址说明内存不够
       printf("shibai");
       return false;
   }else{
      p->BOTTOM=p->TOP;//达到bottom禾top都指向头节点
      p->TOP->Pnext=NULL;//让头节点的指针域清空
      return true;
   }
}
void push(PSTACK star,int vail){
PNODE pnew=(PNODE)malloc(sizeof(NODE));//创造一个新的节点
pnew->Pnext=star->TOP;//新节点的指针域放入top（top此时是指向上一个节点），这样可以保证节点连续
star->TOP=pnew;//top原本只想的是前一个节点，该墓地是将新节点的地址赋给top让top可以指向新的节点
pnew->data=vail;//存放想要输给新节点的数据
return;
}
bool empty(PSTACK star){
if(star->TOP==star->BOTTOM)//意思是说当栈中只有头节点即空的时候，top和bottom指向的地址是一样的所以为空
return true;return false;}
int bianlishuchu(PSTACK star){
    if(empty(star)){
        printf("kong");return true;exit(-1);
    }else{return false;}
PNODE p=star->TOP;//临时指针移动指针达到输出各个数据域的目的
while(p->Pnext!=NULL){//当前p所指向的节点是否为头节点，若是的话则此时已经结束没有数据域可以以输出
    printf("%d",p->data);
    p=p->Pnext;//保证指针往下移动一个
}
printf("\n");
return;
}
bool chuzhan(PSTACK star,int*vail){//vail是用来存储被剔除的节点的数据域
    if(empty(star)){
        printf("kong");return false;exit(-1);
    }else{//判断栈中是否只剩有头节点，即是否为空
    PNODE p=star->TOP;//复制一个临时指针指向最高层的节点，通过移动该指针达到剔除节点目的
    vail=star->TOP->data;//存储被提出的数据域
    p=p->Pnext;//将指针往下移动
    free(p);//删除p所指向的节点的所有东西；
    p=NULL;//将指针空，防止野指针
    return;
}    

}

int main(){
STACK S;
int vail;
chushihua(&S);
push(&S,1);
bianlishuchu(&S);
chuzhan(&S,&vail);














    return 0;
}






