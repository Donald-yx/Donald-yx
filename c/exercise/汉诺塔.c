#include<stdio.h>
int hannuota(int m,char x,char y,char z){
if(m==1){
    printf("直接将%d盘子%c移动到%c上面",m,x,z);
}else{
    hannuota(m-1,x,z,y);
    printf("将%d盘子%c移动到%c上面");
    hannuota(m-1,y,x,z);
}
}
int main(){
int m;
char ta1='A';
char ta2='B';
char ta3='C';

scanf("%d",&m);
hannuota(m,'A','B','C');



return 0;
}