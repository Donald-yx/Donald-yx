#include<stdio.h>//队列与时间有关
#include<malloc.h>
#include<stdbool.h>
typedef struct queue{
    int *Pbase;
    int front;
    int rear;
}QUEUE;
void chushihua(QUEUE *star){
star->Pbase=(int*)malloc(sizeof(int)*6);//pbase是指向一个数组长度为6；
    star->front=0;
    star->rear=0;//分别初始化队中的数组下标书；
}
bool shifouweikong(QUEUE*star){
    if(star->rear==star->front){//当front禾sear相等时候为空
        return true;
    }else {return false;}
}
bool shifouweiman(QUEUE*star){
    if((star->rear+1)%6==star->front){//适用于所有开头位置不确定的情况，此时star为空然后如果star+1禾芙蓉厅相等说明队列已经满了.用的是空出一个元素来判断满的情况
        return true;
    }else{return false;}
}
bool fangruzhi(QUEUE *star,int vail){
    if(shifouweiman(star)){
        return false;
    }else{
star->Pbase[star->rear]=vail;//将所输入的值放在队列中像放入的位置上去
star->rear=(star->rear+1)%6;//可以准确的将数字在0-6之间循环
}}
bool chudui(QUEUE*star,int*vail){//将相当于吧队中的一个元素剔除，剔除时应当让front向上移，加入元素让rear向上移动
    if(shifouweikong(star)){
        return false;
    }else {
        vail=star->front;//讲出对的那个元素保存在vail中出队时可以显示出来
        star->front=(star->front+1)%6;//将front向上移动，剔除的基本操作
        return true;
    }
}
bool bianlishuchu(QUEUE*star){
    int q=star->front;//复制一个和芙蓉厅相同的可以让front不变的情况下，便力输出队列中的值
    while(q!=star->rear){
        printf("%d",star->Pbase[q]);
        q=(q+1)%6;
    }
}
int main(){
QUEUE q;
int vail;
chushihua(&q);
fangruzhi(&q,1);
fangruzhi(&q,2);
fangruzhi(&q,3);
fangruzhi(&q,4);
fangruzhi(&q,5);
fangruzhi(&q,6);
if(chudui(&q,&vail)){
    printf("%d",vail);
}
    return 0;
}