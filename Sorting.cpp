#include <iostream>
using namespace std;

class myarr{
	int *a;
	int size;
	
	public:
		myarr(int arr[],int n){
			size = n;
			a = new int[size];
			
			for (int i = 0; i < size; i++) {
            a[i] = arr[i];
        }
		}
		
		//int* getarr(){
		//	return a;
	
		//	}
		
		void swap(int& a, int& b) {
    		int temp = a;
    		a = b;
    		b = temp;
		}
		
		void disparr(){
			for(int i = 0 ; i<size ; i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl<<endl;
		}
		
		~myarr(){
			delete []a;
		}
		
		void selection_sort(){
			
			for(int i = 0; i<size-1 ; i++)
			{
				int min_index = i;
				for(int j = i+1 ; j<size ; j++)
				{
					if(a[j] < a[min_index]);
					min_index = j;
				
				if(i != min_index)
				{
					swap(a[i], a[min_index]);
				}
			
			}
		}
			}
			
		void bubble_sort(){
			for(int i = 0; i<size - 1; i++)
			{
				for(int j = 0; j<size-1-i; j++)
				{
					if(a[j] > a[j+1]){
						swap(a[j], a[j+1]);
					}
				}
			}
		}
		
		void insertion_sort(){
			for(int i = 0; i<size-1; i++)
			{
				int j = i+1;
				int temp = a[j];
				
			while(a[j] < a[j-1] && j>0)
			{
				a[j] = a[j-1];
				j--;
			}
			a[j] = temp;
		}
		}
		
};

int main(){
	
	int myarray[] = {45, 10, 20, 15, 5};
    int size = sizeof(myarray) / sizeof(int);
    
    int myarray1[] = {7, 2, 5, 6, 4};
    int size1 = sizeof(myarray1) / sizeof(int);

    myarr arr(myarray , size);
	myarr arr1(myarray1, size1);
	
	arr.disparr();
	arr.bubble_sort();
    arr.disparr();
    
    arr1.disparr();
    arr1.bubble_sort();
    arr1.disparr();
	
	
	
	
	
	
	
	
}
