#include <iostream>
using namespace std;

pair<int*, int> ReturnCommon(int array1[], int array2[], int length1 , int length2){
if(!array1 || !array2){
        return {NULL,0};
}
int s1, s2;
int* OuterArray;
int* InnerArray;

if(length1<length2){
    s1 = length1;
    s2 = length2;
    OuterArray = array1;
    InnerArray = array2;
}
else{
    s1 = length2;
    s2 = length1;
    OuterArray = array2;
    InnerArray = array1;
}

int* cArray;
int k = 0;
for(int i = 0; i<s1 ; i++){
    for(int j=0 ; j<s2 ; j++){
        if(OuterArray[i] == *(InnerArray+j){
            *(cArray+k) = *(OuterArray+i);
            k++;
            break;
        }
    }
}
int z;
int* CommonArray = new int[k];

for(z=0; z<k ; z++){
 CommonArray[z] = cArray[z];
}
return {CommonArray , k} ;
}

int main(){
int array1[] = {1,2,3,4};
int array2[] = {1,3,6,4,7};


//some random codes

pair<int*,int> Commonarray = ReturnCommon(array1, array2,4,5);

    int length = Commonarray.second;
    cout << length<<endl;

    cout << "{";
        for(int i=0; i < length; i++){
           if(i == length-1){
               cout << Commonarray.first[i];
           }else{
                cout << Commonarray.first[i] << ",";
            }
        }
    cout << "}" << endl;


return 0;
}
