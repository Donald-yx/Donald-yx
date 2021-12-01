#include <stdio.h>
int main(){
    int low=0,high=5;
    int a[6]={9,8,-10,6,5,1};
kuaisupaixu(a,low,high);
for(int i=0;i<6;i++){
    printf("%d",a[i]);
}
    return 0;
}
int kuaisupaixu(int *a,int low ,int high){
if(low<high){
    int pow=zhaochudiyigeweizhi(a,low,high);
    kuaisupaixu(a,low,pow-1);
    kuaisupaixu(a,pow+1,high);
}
}
int zhaochudiyigeweizhi(int*a,int low ,int high){
    int vail=a[low];
while(low<high){
while(low<high&&a[high]>=vail)
high--;
a[low]=a[high];
while(low<high&&a[low>=vail])
low++;
a[high]=a[low];
}
a[low]=vail;
}