#include <iostream>
using namespace std;


template<class T>

class Stack{
	public:
	T* arr;
	int top;
	int capacity;
	
	
		Stack()
		{
			capacity = 10;
			top = -1;
			arr = new T[capacity];
		}
	
	
	void push(T x)
	{
		if(top==capacity-1){
			cout<<"Stack is full"<<endl;
			return;
		}
		
		top++;
		arr[top] = x;
		
		
		
	}
	
	void pop(){
		
		if(top==-1){
			cout<<"No element to pop"<<endl;
			return;
		}
		
		top--;
	}
	
	T Top(){
		
		if(top==-1){
			cout<<"No element in stack"<<endl;
			return 0;
		}
		
		return arr[top];
		
		
	}
	
	bool empty(){
		return top==-1;
		
	}
	
	void display(){
		
		if(top==-1){
			cout<<"Stack is empty"<<endl;
		}
		
		cout<<"Stack = ";
		
		for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
	
		
	}
	
	int size(){
		return top+1;
		
	}
	

	
	void reverse(){
		
		if(top==-1){
			cout<<"Stack is empty. Can't reverse"<<endl;
		}
		
		
		int start = 0;
        int end = top;
        while (start < end) {
            T temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
		
		
	}
	
};


int prec(char ch) {
	if (ch == '^')
		return 3;
	else if (ch == '/' || ch == '*')
		return 2;
	else if (ch == '+' || ch == '-')
		return 1;
	else
		return -1;
}




int main(){
	
	Stack<string> s;
	
	string ele , s1;
	
	int choice;
	
	
	
	
	s.push("A");
	s.push("B");
	s.push("C");
	s.push("D");
	s.display();
	cout<<endl;
	
	
	do {
        cout << "Menu:\n";
        cout << "1. Push an Element\n";
        cout << "2. Pop last Element\n";
        cout << "3. Reverse\n";
        cout << "4. Size\n";
        cout << "5. Element at top\n";
        cout << "6. Inflix to Postfix\n";
        cout << "7. Exit\n"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
            case 1:
                cout<<"Enter element to be pushed : ";
                cin>>ele;
                cout<<endl;
                s.push(ele);
                cout<<endl;
                s.display();
                break;
            case 2:
                s.display();
                cout<<endl;
                s.pop();
                s.display();
                cout<<s.Top();
                break;
            case 3:
            	s.display();
            	cout<<endl;
            	s.reverse();
            	s.display();
            	cout<<endl;
                break;    
                
            case 4:
            	cout<<"Size of Stack = "<<s.size()<<endl<<endl;
            	break;
            	
            case 5:
            	cout<<"Element at Top = "<<s.Top()<<endl<<endl;
            	break;
            	
            case 6:
            	
            	
            	
				break;
            case 7:
                cout<<"Exiting the program.\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

	
}
