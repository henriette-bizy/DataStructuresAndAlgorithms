#include <iostream>
using namespace std;

//checking for the prime number
bool isPrime(int n){

if(n<=1){
    return false;
}
for(int i = 2; i<n; i++){
if(n%i == 0){
    return false;
}
return true;
}
}

//checking for the fine array
int isFine(int arr[], int size){
    for(int i =0; i<size;i++){
        if(isPrime(arr[i])){
            bool isPresent = false;
            for (int j = i+1; j<size;j++){
                if(isPrime(arr[j])){
                 if((arr[i] == arr[j]+2) || (arr[j] = arr[i]-2)){
                     isPresent = true;
                 }
                }
            }
            if(!isPresent){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main(){
    int arrayE[] = {4, 7, 9, 6, 5};
    cout << isFine(arrayE, 5);
    return 0;
}