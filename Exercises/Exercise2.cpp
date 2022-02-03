#include <iostream>
using namespace std;

int SumOfOddAndEven(int arra[]){
int SumOdd = 0;
int SumEven = 0;
int sum;
int s = sizeof(arra)/sizeof(int);
cout<<s;
for(int i = 0; i<4 ; i++){
    if(arra[i]%2 != 0){
        SumOdd+=arra[i];
        cout<<SumOdd<<endl;
    }
    else if(arra[i]%2 == 0){
    SumEven+=arra[i];
    cout<<SumEven<<endl;
    }
}


return SumOdd - SumEven;

}


int main(){

int arrayTest[] = {3,2,3,4};
cout << SumOfOddAndEven(arrayTest);





return 0;
}
