#include  <iostream>
#include  <cstdlib>
using namespace std;
void first_bigger(int*& p,int threshold){
   while(*p <= threshold){
     p++;
  }
}

int main(){
    int numbers[] = {0,12,32,44,33,5,85,45,100,75};
    int* result = &numbers[0];
    cout <<"Begin at: " << *result << endl;
    first_bigger(result,60);
    cout <<"Result is: "<< *result <<endl;
}
