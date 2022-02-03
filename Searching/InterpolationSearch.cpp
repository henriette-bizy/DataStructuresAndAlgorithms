
#include <iostream>
using namespace std;

int Searching(int* arr,int n , int key){

int lo =0;
int hi = n-1;
int Pos = -1;


while(lo<=hi){
      Pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo]))* (key - arr[lo]));

     if(arr[Pos] == key){
        return Pos;
}
      else if(arr[Pos]>key){
        hi = Pos-1;
      }
      else{
          lo=Pos+1;
      }
      }
      return -1;
}

int main(){


    int S[7] = {3,4,5,9,12,19,45};
    cout <<Searching(S,7,45);

return 0;
}
