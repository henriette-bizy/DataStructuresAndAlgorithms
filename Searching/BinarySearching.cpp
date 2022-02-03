#include <iostream>
using namespace std;

int SearchingBinary(int* arr,int n , int key){

int start =0;
int ending = n-1;
int Pos = -1;


while(start<=ending){
      int mid = (start + ending)/2;

     if(arr[mid] == key){
        return mid;
}
      else if(arr[mid]>key){
        ending = mid-1;
      }
      else{
        start=mid+1;
      }
      }
      return Pos;
}

int main(){


    int S[7] = {3,4,5,9,12,19,45};
    cout <<SearchingBinary(S,7,4);

return 0;
}
