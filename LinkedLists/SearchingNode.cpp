#include <iostream>
using namespace std;

class Node{
    public: int data;
            Node *next;
    
    public: Node(){
        this->next=NULL;
    }
            Node(int data){
                this->data=data;
                this->next=NULL;
            }
};

 class LinkedList{
     public: Node *head;
     public: LinkedList(){
         head=NULL;
     }
     void addNewNode(int data){
         Node *newNode=new Node(data);
         if(head==NULL){
             head=new Node;
             return;
         }
         Node *temp=head;
         while(temp->next!=NULL){
             temp=temp->next;
         }
         temp->next=newNode;
     }
     void insertNewNode(int position,int data){
         Node *newNode=new Node(data);
         if(head==NULL){
             head=newNode;
             return;
         }
         int size=0;
         Node *current=head;
         while(current!=NULL){
             size++;
             current=current->next;
         }
         if(position>size){
             cout<<"Invalid operation";
             return;
         }
         if(position==1){
             Node *temp=head;
             newNode->next=temp;
             head=newNode;
             return;
         }
         current=head;
         Node *previous=NULL;
         while(position--){
             if(position==0){
                 previous->next=newNode;
                 newNode->next=current;
             }
             else{
                 previous=current;
                 current=current->next;
             }
         }
        
     }
     int findByPosition(int position){
         if(head==NULL){
             cout<<"Invalid operation";
             return -1;
         }
         int size=1;
         Node *current=head;
         while(current!=NULL){
             size++;
             current=current->next;
             if(size==position){
                 cout<<endl<<"the element at position: "<<position<<" is: "<<current->data;
                 return current->data;
             }
         }
         if(size<position){
             cout<<"Out of range operation";
         }
         return 0;
        
     }
     int findByKey(int key){
         if(head==NULL){
             cout<<"Invalid operation";
             return -1;
         }
         Node *current=head;
         int position=1;
         while(current!=NULL){
             if(current->data==key){
                 cout<<endl<<"element: "<<key<<" is at position: "<<position;
                 return current->data;
             }
             position++;
             current=current->next;
         }
     }
      void display(){
          if(head==NULL){
              cout<<"you've got an empty list";
              return;
          }
          Node *current=head;
          while(current!=NULL){
              cout<<current->data<<" ";
              current=current->next;
          }
      }
    //  void deleteNode(int position){
    //      if(head==NULL){
    //          cout<<"you have no linked list to delete from";
    //      }
    //      Node *temp=head;
    //      if(position==0){
    //          head=temp->next;
    //          return;
    //      }
    //  }
 };
int main(){
    LinkedList mylist;
    mylist.addNewNode(19);
    mylist.addNewNode(5);
    mylist.addNewNode(8);
    mylist.addNewNode(11);
    mylist.addNewNode(14);
    mylist.insertNewNode(1,30);
    mylist.display();
    mylist.findByPosition(4);
    mylist.findByKey(14);
    return 0;
}