#include <iostream>
using namespace std;


int PointOfEquilibrium(int* arra, int length){
int sumLeft = 0;
int sumRight = 0;

if(length <3){
    return -1;
}
for(int i =1; i<length ; i++){
        int k,j;
    for(k =0,j=i+1; k<i&&j<length-1 ; k++,j++)
      sumLeft += arra[k];
      sumRight += arra[j];

      if(sumLeft == sumRight){
        return i;
      }
}
return -1;
}


int main(){

    int arrayexample[] = {1,8,3,7,10,2};
   cout << PointOfEquilibrium(arrayexample , 6);

return 0;
}
