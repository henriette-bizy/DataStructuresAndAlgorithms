#include<iostream>
using namespace std;


int isBalanced(int arr[], int len){

bool Balanced = false;
if(len<2){
    return 0;
}

for(int i=0; i<len; i++){
    cout << arr[i]<<endl;
    for(int j=0; j<len; j++){
        if((arr[j] = -arr[i]) && (j != i)){
        Balanced = true;
        }
    }
    if(Balanced){
    return 1;
}
}

// return 0;
}


int main(){
    int Example[] = {3,-3,6,-6,2};
    cout << isBalanced(Example,5);
    return 0;
}