#include <iostream>
using namespace std;
int CountOnes(int n){

int k =0;
while(n>0){
    int rem = n%2;
    if(rem == 1){
        k++;
    }
    n = n/2;
}

return k;
}
int main(){

cout << CountOnes(3);
    return 0;
}