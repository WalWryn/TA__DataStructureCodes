#include<iostream>
using namespace std;

class search{
	private:
		
	public:
		bool linear_seacrh(int *arr , int num ,int size){
			bool found = false;
			for(int i=0;i<size && found == false;i++){
				if (arr[i] == num)
					found = true;
			}
			return found;
		}
		
		bool binary_search(int *arr , int num , int back , int front){
			int mid;
			mid = (back + front)/2;
			if(arr[mid] == num)
				return true;
			else if((mid == front) or (mid == back)){
				return 0;
			}
			else{
				if (arr[mid] < num)
					return (binary_search(arr , num , mid , front));
				else
					return (binary_search(arr , num , back , mid));
			}
			
		//	return 0;
			
		}
		
		
};

class bst{
	public:
		int value = -1;
		bst* left = nullptr;
		bst* right = nullptr;
		
		bst(int x){
			value = x;
		}
		
		void insert(int x){
			if (value > x){
				if (left == nullptr)
					left = new bst(x);
				else
					left->insert(x);
			}
			else{
				if (right == nullptr)
					right = new bst(x);
				else
					right->insert(x);
			}
		}
		
		bool search(int x){
			if (value == x)
				return true;
			else if (value > x){
				if (left == nullptr)
					return false;
				else
					return	left->search(x);
			}
			else{
				if (right == nullptr)
					return false;
				else
					return	right->search(x);
			}	

		}
		
};





int main(){
	int arr[] = {9,1,3,5,7,89,1,3,4,1,6,886,5,4,0};
	search s;
//	cout<<sizeof(arr)/4;
	cout<< s.linear_seacrh(arr,0,sizeof(arr)/4);
	
	int arr2[] = {1,4,6,8,9,10};
	cout<<endl<< s.binary_search(arr2,7,0,sizeof(arr2)/4)<<endl;
	
	bst b1(5);
	b1.insert(6);
	b1.insert(9);
	b1.insert(2);
	b1.insert(4);
	cout<<b1.search(2);
	return 0;
}