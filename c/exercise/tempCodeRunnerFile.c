#include<stdio.h>
int main(){
int m,n,i,j=0;
for(m=2;m<=1000;m++){
    for(i=1;i<=m/2;i++){
    if((m%i)==0){
        j=j+i;
    }}
if(m==j){
    printf("%2d its facctors are 1,",m);
  for(i=1;i<=m/2;i++){
    if((m%i)==0)printf("%d ,",i);}
printf("\n");}
}

    return 0;
}
