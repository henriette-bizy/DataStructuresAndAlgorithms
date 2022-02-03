#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
public:
    Node(){
    this->next = NULL ;
    }
    Node(int data){
    this->data = data;
    this->next = NULL;
    }
};


class Linkedlist{
public:
    Node *head ;
public:
    Linkedlist(){
    this->head = NULL;
    }

void addNewNode(int data){
    Node *newNode = new Node(data);

    cout << "atleast this is the top of the head == null ";
    if (head == NULL){
        head = newNode;
        return;
        cout << "we are reaching here";
    }

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;

    }


    temp->next = newNode;


}
void display(){

if(head == NULL){
cout << "empty list kabisa";
return;
}

Node *current = head;
while(current !=  NULL){
cout << current->data;
current = current->next;
}
}
//the end of method

};



int main(){

    Linkedlist Mylist;
    Mylist.addNewNode(2);
    Mylist.addNewNode(4);
    Mylist.addNewNode(5);
    Mylist.addNewNode(7);
    cout <<"hello world";
    Mylist.addNewNode(90);
    Mylist.display();

return 0;
}


