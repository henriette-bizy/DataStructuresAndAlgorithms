#include<iostream>
using namespace std;

//first approach
/*int findCenteredArray(int* arr, int size){
if(size <3){
    return 0;
}

if(size%2 == 0){
    return 0;
}
int Center = (size-1)/2;
for(int i =0; i<size/2 ; i++){
if(arr[i] <= arr[Center] || arr[i+Center+1]<= arr[Center]){
    return 0;
}
   return 1;
}
}
*/

//second approach

bool compare(int a, int b){
    return a>=b;
}
int centeredArr(int *arr, int n){
    int start = 0;
    int end = n-1;
    int mid = (start + end) /2;
    while(start < mid && end > mid) {
        if(compare(arr[mid], arr[start]) || compare(arr[mid], arr[end])){
            return 0;
        }
        start ++;
        end --;
    }
    return 1;
}


int main(){

   int arrayNum[] = {6,7,3,0,5};
   int sizeArray = sizeof(arrayNum)/sizeof(arrayNum[0]);

   cout << sizeArray<<endl;
   //cout << findCenteredArray(arrayNum , sizeArray);
   cout << centeredArr(arrayNum , sizeArray);



return 0;
}


