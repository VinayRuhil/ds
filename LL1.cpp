#include <iostream>
using namespace std;

class Node{
	public:
		int elem;
		Node* next;
		
		
		Node (int n){
			
		elem = n;
		next = NULL;
	
		}
	
	
};

class linkedlist{
	public:
		Node* head;
		
		linkedlist(){
			head = NULL;
		}
		
	void insertatlast(int val){
	
	Node* p = new Node(val);
	if(head==NULL){
		head = p;
		return;
	}
	
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	
	temp->next = p;
	
}

	void insertathead(int val){
		Node* p = new Node(val);
		if(head == 0){
			head = p;
		}
		
		p->next = head;
		head = p;
		
		
	}

	void insertbefore(int val , int e){
		
		Node* p = new Node(val);
		Node* q = head;
		if(head == 0){
			head = p;
		}
		
		else {
			while(q->next->elem != e){
				q = q->next;
			}
			
			Node* r = q->next;
			
			p->next = r;
			q->next = p;
		}
		
		
		
	}
	
	void insertafter(int val , int a){
		
		Node* p = new Node(val);
		Node* q = head;
		
		if(head == 0){
			head = p;
		}
		
		while(q->elem != a){
			q = q->next;
		}
			
			Node* r = q->next;
			
			p->next = r;
			q->next = p;
		}
		
	void display(){
	
	Node* temp = head;
	cout<<"Linked List = ";
	while(temp!=NULL){
		cout<<temp->elem<<" ";
		temp = temp->next;
		
	}
	cout<<endl<<endl;
	
}
	
	
};

void swap(int& a, int& b) {
    		int temp = a;
    		a = b;
    		b = temp;
		}


void deletionathead(Node* &head){
	
	Node* p = head;
	head = head->next;
	
	delete p;
}

void deletion(Node* &head , int val){
	
	Node* temp = head;
	while(temp->next->elem != val){
		temp = temp->next;
	}
	
	Node* todelete = temp->next;
	temp->next = temp->next->next;
	
	delete todelete;
	
}



void deletealternate(Node* &head){
	
	Node* curr = head->next;
	while(curr!=NULL && curr->next!=NULL){	
	
	Node* temp = curr;
	curr->next = curr->next->next;
	delete temp;
	curr = curr->next;
		
	}
	
}

void duplicates(Node* &head){
	
	Node* curr = head;
	while(curr!=NULL){
		while(curr->next!=NULL && curr->elem == curr->next->elem){
			Node* temp = curr->next;
			curr->next = curr->next->next;
			delete temp;
			
		}
		curr = curr->next;
			
	} 	
	
}

void reverseprint(Node* &head){
	if(head==NULL){
		return;
	}
	reverseprint(head->next);
	cout<<head->elem<<" ";
}

Node* reverse(Node* head){
	
	Node* curr = head;
	Node* prev = NULL;
	
	
	while(curr!= NULL){
		Node* nextptr = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextptr;
	}
	
	Node* new_head = prev;
	return new_head; 
	
}

int search(Node* head, int k){
	
	Node* p = head;
	if(p == NULL){
		cout<<"List is empty\n";
	}
	else{
	
	while(p!=NULL){
		if(p->elem == k)
			return 1;
		p = p->next;
	}
	
	return 0;	
	}
	
}

void sort(Node* head) {
    Node* current = head;
    Node* index;
    int temp;

    if (head == NULL) {
        return; // Nothing to sort
    }

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->elem > index->elem) {
                temp = current->elem;
                current->elem = index->elem;
                index->elem = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

	

int main(){
	
	int choice , val , a , b , n;
	
	
	linkedlist l1;
	
	l1.insertatlast(2);
	l1.insertatlast(1);
	l1.insertatlast(4);
	l1.insertatlast(5);
	l1.insertatlast(3);
	l1.display();
	
	
	 do {
        cout << "Menu:\n";
        cout << "1. Insertion\n";
        cout << "2. Deletion\n";
        cout << "3. Sorting\n";
        cout << "4. Searching\n";
        cout << "5. Reversal\n";
        cout << "6. Exit\n"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                do{
					cout<<"1. Insertion before an element\n";
					cout<<"2. Insertion after an element\n";
					cout<<"3. Insertion at last\n";
					cout<<"4. Insertion at head\n";
					cout<<"5. Exit\n";
					cout<<"\nEnter your choice : ";
					cin>>choice;
					cout<<endl;
				
				
				switch(choice){
					case 1:
						
						l1.display();
						cout<<"Enter element to be inserted : ";
            			cin>>val;
            			cout<<"Insert before : ";
            			cin>>a;
            			l1.insertbefore(val , a);
						cout<<endl;
						l1.display();
						break;
						
					case 2:
						l1.display();
						cout<<"Enter element to be inserted : ";
            			cin>>val;
            			cout<<"Insert after : ";
            			cin>>b;
            			l1.insertafter(val, b);
            			cout<<endl;
            			l1.display();
						break;
						
					case 3:
						l1.display();
						cout<<"Enter element to be inserted : ";
            			cin>>val;
            			l1.insertatlast(val);
            			cout<<endl;
            			l1.display();
						break;
						
					case 4:
						l1.display();
						cout<<"Enter element to be inserted : ";
            			cin>>val;
            			l1.insertathead(val);
						cout<<endl;
						l1.display(); 			
						
					
					case 5:
						cout<<"Returning to Main Menu \n"<<endl;
						break;
						
					default:
						cout<<"Invalid choice. Try again...... \n";
				}
					
				}while(choice != 5);
				
                break;
            case 2:
            	
				do{
					cout<<"1. Deletion at head\n";
					cout<<"2. Deleting a specific element\n";
					cout<<"3. Deleting alternate elements\n";
					cout<<"4. Exit\n";
					cout<<"\nEnter your choice : ";
					cin>>choice;
					cout<<endl;
				
				
				switch(choice){
					case 1:
						l1.display();
						deletionathead(l1.head);
						l1.display();
						break;
						
					case 2:
						l1.display();
						cout<<"Enter element to be deleted : ";
            			cin>>val;
            			deletion(l1.head , val);
            			l1.display();
						break;
						
					case 3:
						l1.display();
						cout<<"Deleting alternate elements......\n"<<endl;
						deletealternate(l1.head);
						l1.display();
						break;
					
					case 4:
						cout<<"Returning to Main Menu \n"<<endl;
						break;
						
					default:
						cout<<"Invalid choice. Try again...... \n";
				}
					
				}while(choice != 4);
				
                break;
            case 3:
            	sort(l1.head);
            	//sort(l1.head);
            	l1.display();
                break;
            case 4:
                if(search(l1.head, 13)){
                	cout<<"Element found\n"<<endl;
				}
				else{
				cout<<"Element not found\n"<<endl;
			}
                break;
                
            case 5:
            	cout<<"\nBefore reversal "<<endl;
				l1.display();
				cout<<"\nAfter reversal "<<endl; 
                l1.head = reverse(l1.head);
				l1.display();
                break;
                
            case 6:
                cout<<"Exiting the program.\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

}

