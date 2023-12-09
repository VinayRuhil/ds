#include <iostream>
using namespace std;

class integer{
	int num,a ,b;
	public:
		
		integer(void){
			
		}
		
		integer(int x , int y){
			a = x;
			b = y;
		}
		
		void getint(){
			cout<<"Enter the number = ";
			cin>>num;
		
		}
		
		void disp(){
			cout<<"Num = "<<num<<endl;
			
		}
		
		void factorial(){
			if(num<0){
				cout<<"Factorial is not defined";
				
			}
			else if (num==0 || num ==1){
				cout<<"Factorial = 1"<<endl;
			}
			
			else{
				int fact = 1;
				for(int i = 2 ; i<=num ; i++ ){
					fact*= i;
				}
				cout<<"Factorial = "<<fact<<endl;
				
			}
		}
		
		void sumofdigits(){
			int sum = 0;
			while(num>0){
				sum += num%10;
				num = num/10; 
			}
			
			cout<<"Sum of digits = "<<sum<<endl;
		}	
		
		void reverse(){
			int rev = 0;
			
			while(num != 0){
			
			rev = rev * 10 + num % 10;
			num = num/10;
		}
		cout<<"Reversed Digit = "<<rev<<endl;
		
		}
		
		void prime(){
			cout<<"Prime numbers upto "<<num<<endl;
			int i , j;
			for(i = 1 ; i <=num ; i++){
			
				for( j = 2; j <= i ; j++){
					if(i % j == 0){
						break;
					}
				
					}
					if(i==j){
						cout<<j<<endl;
					}
				}
			}
			
			void fib(){
				cout<<"\nFibonacci series upto "<<num<<endl;
				int t1 = 0 ,t2 = 1 , temp;
				
				temp = t1 + t2;
				cout<<t1<<endl<<t2<<endl;
				while(temp <= num){
					cout<<temp<<endl;
					t1 = t2;
					t2 = temp ;
					temp = t1 + t2;
				}
			}
			
			void mult(){
				int result = a * b;
				cout<<"\nResult = "<<result<<endl;
				
			}
		
				
		
			
		};


int main(){
	
	int choice;
	
	integer value;
	integer v1(5 , 2);
	integer v2(15 , 2);
	
	value.getint();
	value.disp();
	
		do{
		
		cout<<"Integer operations"<<endl;
		cout<<"1. Factorial"<<endl;
		cout<<"2. Sum of digits"<<endl;
		cout<<"3. Reverese"<<endl;
		cout<<"4. Prime numbers"<<endl;
		cout<<"5. Fibonacci numbers"<<endl;
		cout<<"6. Multiplication"<<endl;
		cout<<"7. Exit"<<endl;
		cout<<"Enter your choice (1-7)= ";
		cin>>choice;
	
	switch(choice){
		
		case 1:
			value.factorial();
			break;
			
		case 2:
			value.sumofdigits();
			break; 
			
		case 3:
			value.reverse();
			break;
		
		case 4:
			value.prime();
			break;
			
		case 5:
			value.fib();
			break;
			
		case 6:
			v1.mult();
			v2.mult();
			break;
			
		case 7:
			cout<<"Exiting the program......\n";
			break;
	
		default:
			cout<<"\nInvalid choice";
			
			
			
	}
	
	
		
	}while(choice!=7);
	
	
	
	
	
}
