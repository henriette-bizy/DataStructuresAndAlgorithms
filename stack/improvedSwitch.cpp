#include<iostream>
using namespace std;




const int SIZE = 50;

int top=-1;
    int stack[SIZE];

// checking if it is full
    int isFull(){
    if(top == SIZE-1){
        cout << "stackoverflow";
        return 1;
    }
    return 0;
    }


//checking if it is empty
int isEmpty(){
    if(top == -1){
        cout << "stackunderflow";
        return 1;
    }
    return 0;
}

//adding
void push(int data){
    cout << 1;
    if(!isFull()){
       top++;
         stack[top] = data;
         cout <<"this is the current top" +top<<endl;
    }
    else{
        cout << 2;
    }
}

//deleting
    void pop(){
        if(!isEmpty()){
            top--;
        }
    }
//acccesing
int peek(){
    if(!isEmpty()){
        return stack[top];
    }
    return INT8_MIN;
}

//displaying
void display(){
    if(!isEmpty()){
        for(int i = top; i>=0 ; i--){
            cout <<stack[i];
        }
        cout << endl;
    }
}


int main(){

int choice = 1;

do{
cout << "enter the operation you wanna do "<<endl;
cout << "1.push"<<endl;
cout << "2.peek"<<endl;
cout << "3.pop"<<endl;

int operation, inputs;
cin >> operation;
// a switch
switch (operation){
case 1:
    cout << "enter a number to push"<<endl;
    cin >> inputs;
    push(inputs);
    display();
    break;

case 2:
    peek();
    break;

case 3:
   pop();
   display();
break;
}
}

while(choice == 1);

return 1;

}
