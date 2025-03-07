#include<stdio.h>

int main(){
    int A[7]={4,3,5,76,4,84,90};
    int largest=A[0];

for (int i=1;i<=6;i++){
    if (A[i]>largest)
    largest=A[i];
    }
    
printf("The largest number of the list is %d", largest);

    
    return 0;
}