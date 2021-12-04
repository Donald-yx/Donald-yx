#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct node{
    int length;
    int *base;
}NODE,*PNODE;
bool shanchuyuansu(PNODE m,int weizhi,int *fanhuizhi){
 int i;   if(m->length==0)return false;if(weizhi<1||weizhi>m->length-1)return false;*fanhuizhi=m->base[weizhi-1];for(i=weizhi-1;i<m->length;i++){m->base[i]=m->base[i+1];}m->length--;
}
bool charuyuansu(PNODE m,int weizhi,int zhi){
if(weizhi<1||weizhi>m->length)return false;int i;
if(m->length==100)return false;
for(i=m->length;i>=weizhi;i--)m->base[i+1]=m->base[i];m->base[i];m->length++;return true;}
bool init(PNODE m){
    if(m==NULL){
        printf("分配失败");exit(-1);}
    else {m->length=0;m->base=(int*)malloc(sizeof(int)*100);return true;}//注意分配内存的类型?
}
void xiaohui(PNODE m){
    if(!m)free(m);//申请内存的时候是给m，释放内存的时候可以直接释放m
}
void qingkong(PNODE m){
    m->length=0;//假性让系统人为该数组长度为0，因为原来存放的数据能够被新存放的数据覆盖
}
bool huoquweizhizhi(PNODE m,int i,int*e){
    if(i>m->length||i<1)return false;*e=m->base[i-1];return true;}
int chazhaoxiangtong(PNODE m,int chazhaodezhi){if(m->length==0){return 0;}for(int i=0;i<m->length;i++){if(chazhaodezhi==m->base[i])return i+1;return 0;}
//将找到的相同的树的序号返回给函数
}
int main(){
PNODE m;//声明的应该是node变量
init(m);int weizhi,chazhaodezhi,shanchuweizhi,shanchufanhuizhi,charudeweizhi,charudezhi,huoqudezhi;chazhaoxiangtong(m,chazhaodezhi);
charuyuansu(m,charudeweizhi,charudezhi);xiaohui(m);qingkong(m);huoquweizhizhi(m,weizhi,&huoqudezhi);
weichafa();shanchuyuansu(m, shanchuweizhi,&shanchufanhuizhi);

    return 0;
}