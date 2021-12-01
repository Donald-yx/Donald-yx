#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
typedef enum{true=1,false=0}bool;
struct donald{
 int cent;//有效个数
int len;//数组长度
int * pbase;//需要指向一个动态数组
};
int chushihua(struct donald*arr,int length){
arr->pbase=(int*)malloc(sizeof(int)*length);//给parr中的pbase提供一个动态数组

  if(arr->pbase==NULL)//判断这个数组是否为空，由于内存满了分不出来导致
{printf("分配失败");
exit(-1);}//终止程序
else{
    arr->len=length;//初始化长度
    arr->cent=0;//初始化有效个数古为0
}
return;//该函数结束
}
int shuchu(struct donald* arr){
    if(  is_empty(arr))
    printf("数组为空");
    else{
        for(int i=0;i<arr->cent;i++){//输出每个数组中的元素
            printf("%d", *(arr->pbase+i));
    }
}}
bool is_empty(struct donald * arr) //判断用户使用后是否数组为空
{ if(arr->cent==0){
    return true;}
else{
    return false;
}
}
bool shifouweiman(struct donald*arr){//判断数组是否为满，影响插入的准确
if(arr->cent==arr->len)
 printf("为满");return true;
 return false;
}



bool charuyuansu(struct donald*arr,int shu,int weizhi){//weizhi就是在数组中的哪个位置进行前插，shu就是在所选位置前插入的那个数
if(shifouweiman(arr))//如果为满则插入过程中可能越界
  return false;
  if(weizhi<1||weizhi>arr->cent+1){//保证这个weizhi是在数组有效个数之内
      return false;
  }


 for(int i=arr->cent-1;i>=weizhi;i--){//原理是将所选位置到最后一个有效数字全体往后挪一位，然后将所选位置的数覆盖到该位置上1[2]23456
    arr->pbase[i+1]=arr->pbase[i];//挪位

}
 shu=arr->pbase[weizhi];//覆盖
  arr->cent ++;//加入元素以后应该给这个数组的有效个数加一
 return true;

}

bool zhuijiahanshu(struct donald *arr,int shu){
 if(shifouweiman(arr))//确保数组有空间支持再加一位
  return false;
  arr->pbase[arr->cent]=shu;
  arr->cent++;//给数组有效个数加一
  return true;
}
int daozhihanshu(struct donald*arr){//导致函数
int i=0;
int j=arr->cent-1;
    while(i<j)
{int t;
t=arr->pbase[i];
arr->pbase[i]=arr->pbase[j];
arr->pbase[j]=t;
i++;
j--;
}
return;
}
bool shanchu(struct donald*arr,int*shu,int weizhi){
if(is_empty(arr))//判断数组中是否为空空的话就删不了
return false;
if(weizhi<1||weizhi>arr->cent)//保证删除的位置在有效个数之内
return false;
for(int i=weizhi;i<=arr->cent;i++){//挪位置整体向左移
    arr->pbase[i-1]=arr->pbase[i];
}
*shu=arr->pbase[weizhi-1];//将删除的那个书返回
arr->cent--;//删除后整体有效个数减一
return true;
}




int main(){
int len;
int shu;
int weizhi;//插入元素的位置
int shanchudeweizhi;
int shanchudeshu;
struct donald parr;//声明一个donald 变量
 shifouweiman(&parr);
charuyuansu(&parr,shu,weizhi);//插入函数
shanchu(&parr,&shanchudeshu,shanchudeweizhi);

zhuijiahanshu(&parr,shu);//追加函数
 chushihua(&parr,&len);//初始化prr中的变量
 daozhihanshu(&parr);//导致函数

 shuchu(&parr);
return 0;



















}