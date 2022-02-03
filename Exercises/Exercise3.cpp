#include <iostream>
#include <cstring>
using namespace std;

char* f(char* arra, int start , int length){
     char newArray[] = {};
    int s = sizeof(arra)/sizeof(arra[0]);

if( arra[start] == NULL){
    cout <<"there is a problem";
}
else if( length<=(3-start)){

for(start ; start<=3; start++){
    //strcat(newArray , arra[start]);
    cout <<arra[start];
}
}
else{
cout <<"there is problem of length a ";
}
}

int main(){

    char example[]={'a','b','c'};
    f(example , 0 , 3);
return 0;
}
