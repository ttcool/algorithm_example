#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char* argv[]){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    p = &a[0];
   cout<< *(p++) <<endl;
   p = &a[0];
   cout<< *p++ <<endl;
   p = &a[0];
   cout<< *(++p) <<endl;
}
