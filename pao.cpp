#include <iostream>
using std::cin;
using std::cout;

int pao(){
    const int ARRAY_SIZE = 10;
    int t;
    int intArray[ARRAY_SIZE] = {4,7,5,9,8,4,4,4,3,10};
    
    for(int i=1; i<=ARRAY_SIZE-1;i++){
        for(int j=0;j<ARRAY_SIZE-i;j++){
            if(intArray[j]<intArray[j+1]){
                t=intArray[j];
                intArray[j]=intArray[j+1];
                intArray[j+1]=t;
            }
        }
    }

    for(int i=0;i<ARRAY_SIZE;i++){
        cout << intArray[i];
        cout << "\n";
    }
}

int  main(){
    pao();
}

