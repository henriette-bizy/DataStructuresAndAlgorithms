#include<iostream>
using namespace std;
const int SIZE = 50;
 
int top=-1;
    int stack[SIZE];

// checking if it is full
    int isFull(){
        cout << "the first top" << top<<" AND THE SIZE"<< SIZE<<endl;
    if(top == SIZE-1){
        
        cout << "stackoverflow"<<endl;
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

    push(300);
    push(100);
    display();
    
    int last = peek();
    cout << "the picked element " << last;
    return  1;
}



