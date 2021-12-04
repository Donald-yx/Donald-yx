#include<stdio.h>
int input(int n){
int *m;
for(int i=0;i<n;i++)scanf("%d",&m[i]);return m;
}
void sort(int *m,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m[i]<m[j]){
                int t;
                t=m[i];m[i]=m[j];m[j]=t;
            }
        }
    }
}
void search(int*m,int n,int l){
   
    if(m[])
}
int main(){
    int n,l;
scanf("%d",&n);
sort(input(&n),&n);
search(input(&n),&n,&l);
    return 0;
}