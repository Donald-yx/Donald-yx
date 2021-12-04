#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct node{
    int data;
    struct node *pnext;
}NODE,*PNODE;
void init(){
PNODE phead=(PNODE)malloc(sizeof(NODE));int m;
if(phead==NULL){exit(-1);}phead->pnext=NULL;scanf("%d",&m);
PNODE ptail=phead;ptail->pnext=NULL;
for(int i=0;i<m;i++){
PNODE pnew=(PNODE)malloc(sizeof(NODE));
pnew->pnext=NULL;
scanf("%d",&pnew->data);
ptail->pnext=pnew;
ptail=pnew;
}return phead;
}
bool xiaohuilianbiao(PNODE phead){
    while(phead!=NULL){PNODE p=phead;
    phead=phead->pnext;//销毁不留任何东西，包括头指针；
    free(p);}return true;

}
bool qingkong(PNODE phead){
PNODE p=phead->pnext;
while(p!=NULL){
PNODE q=p->pnext;
free(p);p=q;
}phead->pnext=NULL;return true;
}//头指针和头节点仍然在,相当于将开始的位置整体向右移动然后销毁
int biaochang(PNODE phead,int *biaochangdu){
 PNODE p=phead;   int i;while(p->pnext!=NULL){i++;p=p->pnext;}*biaochangdu=i;
}
bool quzhihanshu(PNODE phead,int weizhi,int*zhi){
    PNODE p=phead->pnext;int j=1;
    while(p&&j<weizhi){p=p->pnext;j++;}//只有p说明p有值，
    if(!p||j>weizhi)return false;*zhi=p->data;return true;//这里的j>weizhi作用是为了处理位置为≤0的数，
//正常情况下，j到最后是j=weizhi，j<weizhi和j>weizhi同时保证让这个位置结点保留到最后
}
int  anzhichazhao(PNODE phead,int shu){
    PNODE p=phead->pnext;
    while(p!=NULL&&p->data!=shu){p=p->pnext;}return p;//返回地址。如果p为空呢返回null如果不为空则返回地址，判断语句可以放进while判断条件中
}
int anzhichazhao2(PNODE phead,int shu){
    PNODE p=phead;int i=0;
    while(p&&p->pnext!=shu){p=p->pnext;i++;}
    if(p)return i;return false;//注意返回数值时候和上一个不一样的是应判断p是否为空；
}
bool charu(PNODE phead,int weizhi,int shu){
  int i;PNODE p=phead;
    for(i=0;i<weizhi-1&&p;i++){p=p->pnext;}
    if(!p||i>weizhi-1)return false;
    else {PNODE pnew=(PNODE)malloc(sizeof(NODE));pnew->data=shu;pnew->pnext=p->pnext;p->pnext=pnew;}return  true;
}
bool delete(PNODE phead,int weizhi,int* fanhuishu){
    int i;PNODE p=phead;
    for(i=0;i<weizhi-1&&p->pnext;i++){p=p->pnext;}if(!p->pnext||i>weizhi-1)return false;
    PNODE q=p->pnext;p->pnext=p->pnext->pnext;fanhuishu=q->data;(q);q=NULL;return true;
/*注意插入的时候它的位置可以取到最后节点+1，那个地方所以在if和for中判断空的时候，就可以判断p是否为空，因为用不到p+1这个位置插入的时候相当于放在最后一个节点的位置的后面；
//而删除的时候，删除位置的前驱节点和自身节点都必须存在，在判断条件if和for中都必须判断p+1，如果为p的话p走到最后一个节点时候想删除最后一个+1，此时已经越界
//p+1可以保证走到倒数第二个删除最后一个以后就结束程序*/
}
bool touchafa(PNODE phead,int n){
int i;
for(i=0;i<n;i++){
    PNODE pnew=(PNODE)malloc(sizeof(NODE));
    scanf("%d",pnew->data);
pnew->pnext=phead->pnext;phead->pnext=pnew;//每次生成一个新节点，然后将头节点的指针域给新节点的指针域相当于与将头节点的右侧接到新节点的右侧，
//然后将新节点地址给头节点的指针域，这样可以让新节点姐在头节点后面完成头插法
}return true;
}
bool weichafa(PNODE phead,int n){
PNODE p=phead;int i;
for(i=0;i<n;i++){
    PNODE pnew=(PNODE)malloc(sizeof(NODE));
    scanf("%d",pnew->data);
    p->pnext=pnew;pnew->pnext=NULL;
    p=pnew;
}return true;
}
bool xunhuanlianbiao(PNODE phead){
/*   ptail8是链表1的尾指针 ptail9是链表2的尾指针   
    p=phead8->pnext;将链表1的头节点地址保存起来，用于链表2的循环，尾节点的指针域
    ptail8->pnext=ptail9->pnext->pnext;将链表2的首节点的地址赋值给链表一的尾节点的指针域，连接，因为一个链表只需要一个头节点，所以是从链表二的首届点开始链结的
    free(ptail9->pnext);将链表二的头节点内存释放
    ptail9->pnext=p;最后将p暂存的链表一的头节点的地址赋值给链表二的尾节点的指针域
    首尾相连
    循环链表中便利的时候，循环结束的条件是p->pnext==phead因为循环链表的尾节点存放的是头结点的地址
*/
}
bool shuangxianglianbiao(PNODE phead){
/*if(anzhichazhao)return false;//循环链表这里没有创建循环链表
PNODE p=(PNODE)malloc(sizeof(NODE));//比方p指向索要寻找的那个地方的节点i
PNODE pnew=(PNODE)malloc(sizeof(NODE));
scanf("%d",pnew->data);
pnew->prior=p->prior;将第i个节点的前驱节点保存在新节点的前驱指针域中
p->prior->pnext=pnew;将新节点的地址保存在第i个节点的后驱指针域中
p->prior=pnew;将新节点的地址放在第i个节点的前驱指针域中
pnew->pnext=p;将第i个节点的地址放在新节点的后去指针与中
向双向链表当中加入节点
*/

/*
删除的时候
第i个节点的前驱节点地址放在后驱节点的前驱指针域当中
将第i个节点的后驱节点的地址放在第i个节点的前驱节点的后驱指针与当中
如果保存被删除的节点的数据域可以在一开始保存
*/}

int main(){
PNODE phead;
phead=NULL;
init();
int biaochangdu,quzhiweizhi,qudedezhi;int charuweizhi,charuyuansu;int shanchuweizhi,fanhuishanchudeshu;int n,m;
xiaohuilianbiao(phead);qingkong(phead);biaochang(phead,&biaochangdu);
quzhihanshu(phead,quzhiweizhi,&qudedezhi);anzhichazhao(phead,30);anzhichazhao2(phead,30);
charu(phead,charuweizhi,charuyuansu);delete(phead,shanchuweizhi,&fanhuishanchudeshu);
touchafa(phead,n);weichafa(phead,m);xunhuanlianbiao(phead);
shuangxianglianbiao(phead);
    return 0;
}