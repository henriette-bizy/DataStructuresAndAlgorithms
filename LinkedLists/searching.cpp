#include <iostream>
using namespace std;

// we can use class or structure
class Node {
	public:
		int data;
		Node *next;

	public:
		Node(){
			this->next == NULL;
		}

		Node(int data){
			this -> data = data;
			this -> next = NULL;
		}
};

class linkedList {
	public:
		Node *head;

	public:
		linkedList(){
			this->head == NULL;
		}

		void addNewNode(int data){
			Node *newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return ;
			}

			Node *current = head;
			while(current -> next != NULL){
				current = current -> next;
			}
			current->next = newNode;
		}

		void insertNode(int position, int data){
			Node *newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return;
			}

			int size = 0;
			Node *current = head;
			while(current != NULL){
				size ++;
				current = current->next;
			}

			// check conditions
			if(position > size || position < 1){
				cout<<"Invalid operation"<<endl;
				return ;
			}

			// Insert before head
			if(position == 1){
				Node *temp = head;
				newNode->next = temp;
				head = newNode;
				return ;
			}

			current = head;
			Node *previous;

			while(position --){
				if(position == 0){
					previous->next = newNode;
					newNode->next = current;
				}else{
					previous = current;
					current = current->next;
				}
			}
		}

		void display(){
			if(head == NULL) {
				cout <<"Empty list"<<endl;
				return ;
			}

			Node *current = head;
			while(current != NULL){
				cout<<current->data<<"\t";
				current = current->next;
			}
			cout<<endl;
		}

		void deleteNode(int position){
			if(head == NULL){
				cout<<"Empty list"<<endl;
			}

			if(position == 1){
				Node *temp = head;
				head = head->next;
				delete temp;
				return ;
			}

			Node *previous;
			Node *current = head;
			int nodeCount;




			while(current != NULL){
				nodeCount ++;
				current = current->next;
			}

			if(nodeCount < position){
				cout<<"Invalid opperations"<<endl;
				return ;
			}
			current = head;

			while(position > 1){
				position --;
				previous = current;
				current = current -> next;
			}

			previous->next = current->next;
			delete current;
		}

	//	Node *findByPosition(int position){
	int findByPosition(int position){
		if(head == NULL){
			cout<<"Invalid operation";
			return -1;
		}

		int size = 0;
		Node *current = head;
		while(current != NULL){
			size ++;
			current = current->next;
		}

		if(size < position){
			cout<<"Out of range";
			return -1;
		}

		size = 0;
		current = head;
		while(current != NULL){
			size ++;
			if(size == position)
				return current->data;
			current =current->next;
		}

	}

};


int main(){

	cout<<"Hello world"<<endl;
	linkedList list;
	list.addNewNode(1);
	list.addNewNode(2);
	list.addNewNode(3);
	list.addNewNode(4);

	list.display();
	cout<<list.findByPosition(2)<<endl;
	//	list.insertNode(4, 10);
	//	list.deleteNode(3);
	list.display();

	return 0;
}












