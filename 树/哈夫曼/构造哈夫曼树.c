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
hafumanbianma(PNODE L,int n,char**hc){



   char * p=(char *)malloc(sizeof(char)*n);//临时空间，存放每个字符哈夫曼编码数，//这个空间为最大的字符的哈夫曼编码的空间，后面用的时候可以将其缩小,这里应该是/0占用一个
    int i;p[n-1]='\0';
    int c=0;int father=0;int start=n-1;//c是记录当前回溯到的点的位置，father是存放每个节点的父节点，start这个数是为了记录指向每个边为"0""还是"1"
    //然后存放在临时的属于当前字符的数组当中，，是倒着存放；
    for(i=1;i<=n;i++){
        c=i;//记录当前位置
        father=L[i].parent;//记录父节点
        while(father!=NULL){//判断双亲结点是否为0若为0的话说明已经到达了根节点
            if(L[father].lchild==i){--start;p[start]='0';}//判断第i个位置在双亲中是左孩子还是右孩子
            else {p[--start]='1';}
            c=father;//将所要判断的位置移动到双亲结点上，然后判断双亲结点在它的双亲结点中是做孩子还是右孩子
            father=L[father].parent;//第i个位置的双亲的双亲，判断双亲在双亲的双亲中是做孩子还是右孩子
        }
        hc[i]=(char*)malloc(sizeof(char)*(n-start));//为当前这个位置，开辟一个空间存放哈夫曼编码，，n-start意思是在得到的哈夫曼编码临时数组当中，二进制编码数字的个数不算'\0'
        strcpy(hc[i],&p[n-start]);//意思是将所得到的当前位置的那个字符的哈夫曼编码复制到hc这个哈夫曼编码的总表当中

    }
    free(p);
}
bool select(PNODE L,int n,int *s1,int *s2){
        for(int i=1;i<=n;i++){
            if(L[i].parent==NULL){
                *s1=i;break;//初始化s1，找到一个双亲几点为0的节点
            }
        }
        for(int i=1;i<=n;i++){
            if(L[i].parent==NULL&&L[*s1].quanzhi>L[i].quanzhi){//每次进行哈夫曼编码的节点都应该是双亲节点为0//开始与整个所给数据当中的权值进行比较，找到一个范围内最小的权值
                *s1=i;
            }
        }
        for(int i=1;i<=n;i++){//初始化s2，找到一个双亲几点为0的节点
            if(L[i].parent==NULL&&*s2!=*s1){
               *s2=i;
               break;
            }
        }
        for(int i=1;i<=n;i++){
            if(L[i].parent==NULL&&L[*s2].quanzhi>L[i].quanzhi&&*s2!=*s1){//同样道理，找到一个和s1不相同到全职次小的节点
                *s2=i;
            }
        }


}
int main(){
NODE L;int n;//n是构成哈夫曼树一开始的节点个数，用户自己输入b,必须还得给出一个权的集合，依次输入到n个节点当中去
chushihua(&L,n);int s1,s2;
select(&L,n,&s1,&s2);
shengcheng(&L,n);
char* hc=(char*)malloc(sizeof(char)*n);//想要获得的哈夫曼编码表,一维数组，是所有字符的哈夫曼编码的综合
hafumanbianma(&L,n,hc);


    return 0;
}