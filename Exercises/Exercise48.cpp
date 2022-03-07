#include<iostream>
using namespace std;

int checkMeandra(int arr[], int size){
bool isMeandra = true;

if(size<=1){
    return 0;
}

for(int i=0; i<size; i++){
for(int j =0+i; j<size ; j++){

if(arr[j] == -(arr[i])){
isMeandra = false;
break;
}
 }
  }
if(isMeandra == false){
    return 0;
}
return 1;
};


int main(){
    int arr[4] = {1,2,8,4};
   int result = checkMeandra(arr,4);
   cout<< result<<endl;
    return 0;
}