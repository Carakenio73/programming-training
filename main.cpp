#include<iostream>

using namespace std;

int main(){
    int key,i,j=1;
    int A[6]={5,2,4,6,1,3};
    for(j; j<6;j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1]=A[i];
            i-=1;
        }
        A[i+1]=key;
    }
    for(int k=0;k<6;k++){
       cout<<A[k];
       cout<<"..";
    }
    
    return 0;
}