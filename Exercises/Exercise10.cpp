#include <iostream>
using namespace std;

int OddValent(int arr[], int size){
    //checking if elements in the array really make an array;
   if(size <= 1){
    return 0;
    }

    //our odd;
  bool IsOdd = false;
  int counter = 1;

  //first loop
  for(int i =0 ; i<size ; i++){
      
    //checking for the odd in the arrat
    if(!IsOdd && arr[i]%2 !=0){
        IsOdd = true;
    }
    
  // the second counter
   for(int j =i+1; j<size ; j++){
    if(arr[i] == arr[j] && counter <2){
        counter++;
  }
   }
   cout << counter<<endl;
 if(IsOdd && counter>1){
    return 1;
 }
  }
 return 0;
  
}
int main(){
    int arrayE[] = {8, 8, 8, 4, 4, 7, 2};
    cout << OddValent(arrayE,7);
    return 0;
}
