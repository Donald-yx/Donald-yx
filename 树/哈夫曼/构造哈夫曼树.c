#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
typedef struct donald{
    int quanzhi;
    int parent,lchild,rchild;
}NODE,*PNODE;
chushihua(PNODE L,int n){
    if(n<=1)return ;int m;
    m=2*n-1;//有n个节点，然后要进行n-1此合并权值并生成n-1个节点所以，应该创造的节点个数应该为2n-1个
    L=(PNODE)malloc(sizeof(NODE)*(m+1));//这里m+1原因是不适用0号位置，所以创造m+1个减去0位置就为索要的m个节点
    for(int i=1;i<=m;i++){
        L[i].parent=0;L[i].lchild=0;L[i].quanzhi=0;L[i].rchild;//初始化所有节点的内容；
    }
for(int i=1;i<=n;i++){scanf("%d",&L[i].quanzhi);}//输入每个节点的权值


}
bool shengcheng(PNODE L,int n){
    int m;int shu1,shu2;
 m=2*n-1;for(int i=n+1;i<=m;i++){
     select(L,i-1,&shu1,&shu2);//这是从已经给的节点中找出权值最小的两个//////select函数后面写
     L[shu1].parent=i;L[shu2].parent=i;//将空节点视为这两个权值最小的节点的双亲，并在双亲域中填写
     L[i].lchild=shu1;L[i].rchild=shu2;//将这两个权值最小的两个节点反过来作为这个空节点的孩子，可以不分左右
     L[i].quanzhi=L[shu1].quanzhi+L[shu2].quanzhi;//最后将这两个孩子的权值相加赋值给双亲的权，结束
 }
}


int main(){
NODE L;int n;//n是构成哈夫曼树一开始的节点个数，用户自己输入b,必须还得给出一个权的集合，依次输入到n个节点当中去
chushihua(&L,n);
shengcheng(&L,n);


    return 0;
}