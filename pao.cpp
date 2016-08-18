#include <iostream>
using std::cin;
using std::cout;

//冒泡排序
int pao(){
    const int ARRAY_SIZE = 10;
    int t;
    int intArray[ARRAY_SIZE] = {4,7,5,9,8,4,4,4,3,10};
    
    //ARRAY_SIZE个数排序，需进行ARRAY_SIZE-1趟
    for(int i=1; i<=ARRAY_SIZE-1;i++){
        //从第一位比较直到最后一个尚未归位的数
        for(int j=0;j<ARRAY_SIZE-i;j++){
            //比较大小并交换
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

