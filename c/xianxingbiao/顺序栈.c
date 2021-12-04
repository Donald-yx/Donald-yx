#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct stuck{
    int *TOP;
    int *BOTTOM;
    int length;
}STUCK,*PSTUCK;
bool init(PSTUCK L){
    L->BOTTOM=(int*)malloc(sizeof(int)*100);
    if(L->BOTTOM==NULL)return false;
    L->TOP=L->BOTTOM;L->length=100;return true;//让顶部指针和底部指针都指向该数组第一个元素
}
bool charu(PSTUCK L,int shu){
    if(L->length==L->TOP-L->BOTTOM)return false;//当最大长度等于现在顶部指针减去尾部指针的差时就为满栈，顺序存储当中指针相减可以实现
    *L->TOP=shu;L->TOP++;//将要插入的数赋值给顶部指针所指向的数组元素的内容里面，然后将指针往上移动一个单位
    }
bool chuzhan(PSTUCK L,int shu){
    if(L->BOTTOM==L->TOP)return false;
    L->TOP--;shu=*L->TOP;//可以不用管出栈的数据，因为在已经分配给我们的空间中，如果入栈的时候，会将占中位置原来的值覆盖所以可以不用管出栈的数据
}
int main(){
STUCK L;
init (&L);int vail;scanf("%d",&vail);
charu(&L,vail);int chuzhandeshu;
chuzhan(&L,&chuzhandeshu);
    return 0;
}