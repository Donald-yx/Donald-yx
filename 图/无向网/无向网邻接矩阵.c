#include<stdarg.h>
#include<malloc.h>
#include<stdbool.h>
#define max 3448956
#define dingdianshu 100
typedef struct donald{
    char dingdian[dingdianshu];//顶点表，主要存放顶点的信息
    int juzhen[dingdianshu][dingdianshu];//索要创建矩阵
    int dingdianzonggeshu;int bianzzongshu;//总顶点的个数，表面长总个数--只是一个标志性信息
}NODE,*PNODE;
bool init (PNODE G){
    int quanzhi,v1,v2;
    for(int i=0;i<dingdianshu;i++){
        scanf("%c",&G->dingdian[i]);//主动录入每个顶点的信息
}
    scanf("%d %d",&G->bianzzongshu,&G->dingdianzonggeshu);//录入标志性信息
    for(int i=0;i<dingdianshu;i++){
        for(int j=0;j<dingdianshu;j++){
           G->juzhen[i][j]=max;//为矩阵当中全部赋值为最大值，标志着初始化，没有边链接的两个顶点权值最大
        }
    }
    for(int i=0;i<dingdianshu;i++){
        scanf("%d %d%d",&quanzhi,&v1,&v2);//录入两个顶点以及临近的边的权值
        int m=chazhao(G->dingdian,v1);//在输入的顶点查找相应的位置
        int n=chazhao(G->dingdian,v2);
        G->juzhen[m][n]=quanzhi;//找到之后将权值录入，因为是无向网，所以顺序可以颠倒
        G->juzhen[n][m]=G->juzhen[m][n];

    }
    return 0;
    
    
    
    
    }
bool chazhao(PNODE G,int v){
    for(int i=1;i<=G->bianzzongshu;i++){
        if(v==G->dingdian[i]){
            return i;
        }
    }
    return false;
}
int main(){
NODE G;
init(&G);








    return 0;
}