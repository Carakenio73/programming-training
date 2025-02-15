#include<stdio.h>

int main(){
    
    int A[6]={5,2,4,6,1,3},i,j=1,key;
    
    for (j;j<6;j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
     for(int k=0;k<6;k++)
     printf("%d...",A[k]);
    
    
    return 0;
}