#include <iostream>
using std::cin;
using std::cout;

const int ARRAY_SIZE=10;
int intArray[ARRAY_SIZE] = {4,7,5,9,8,4,4,4,3,10};

void quicksort(int left,int right){
    int i,j,t,temp;
    if(left>right){
        return;
    }
    //
    temp = intArray[left];
    i = left;
    j = right;
    while(i!=j){
        //
        while(intArray[j]>=temp && i<j){
            j--;
        }
        //
        while(intArray[i]<=temp && i<j){
            i++;
        }
        //
        if(i<j){
            t=intArray[i];
            intArray[i]=intArray[j];
            intArray[j]=t;
        }
    }

    //
    intArray[left]=intArray[i];
    intArray[i]=temp;

    //
    quicksort(left,i-1);
    //
    quicksort(i+1,right);
}

int  main(){

    quicksort(0,ARRAY_SIZE-1);
    
    for(int i=0;i<=ARRAY_SIZE-1;i++){
        cout << intArray[i];
        cout << "\n";
    }

}

