#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array a1){
    int i;
    cout<<"Element are: "<<endl;
    for(i=0; i< a1.length; i++){
    cout<<a1.A[i]<<endl;
    }
}
int LinearSearch( struct Array arr,int key){
    int i;
    for(i=0; i<arr.length; i++){
        if(key==arr.A[i])
        return i;
    }
    return -1;
}

int  main(){
     struct Array arr={{2,3,4,5,6},10,5};
     
     int k=LinearSearch(arr,7);
     if(k<5 && k>=0){
        cout<<"Element Found at : "<<k;
     }else{
        cout<<"Not FOUND";
     }
    return 0;
}