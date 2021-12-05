#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct bofd{
    char *m;
    int length;
}NODE,*PNODE;
bool init(PNODE L){
    L->m=(PNODE)malloc(sizeof(NODE)*100);
    L->length=100;
    if(L->m==NULL)return false;
    return true;
}
bool init2(PNODE L){
    L->m=(PNODE)malloc(sizeof(NODE)*10);
    L->length=20;
    if(L->m==NULL)return false;
    return true;
}
BF(PNODE L,PNODE S){
    int i=1,j=1;
    while(i<=L->length||j<=S->length){
        if(L->m[i]==S->m[j]){i++;j++;}
        else {i=i-(j-1)+1;j=1;}//回溯算法就相当于，让l这个串从一开始的第一个位置查找s一旦有错误然后返回从l的第二个开始尝试有没有和s一样的
        //假设s长度为j刚好试了一个自身长度，然后她走过次数就为j-1；所以用i-（j-1）就相当于l这个串又回到一开始试的位置上面然后加1，从下一个位置开始试s串
    }
            if(j>S->length)return j-S->length;return false;//失败可能是第一个串试完了仍然没有找到与s匹配的串，返回的值是第一个串试验一次找到了与s匹配的串用此时的i减去s串的长度就为能匹配到s串的那个位置


}




int main(){
NODE L,S;
init(&L);init2(&S);
BF(&L,&S);





    return 0;
}