#include<iostream>
using namespace std;


class sort{
	public:
		void bubble_sort(int* arr , int size){
			for (int h = size ; h > 0 ; h--){
					for(int i=0 ;i <= size;i++){
						if(arr[i] > arr[i+1] )
							swap(arr[i] , arr[i+1]);
				}
			}
		}
		
		void insertion_sort(int *arr , int size){
			bool found = false;
			for(int j=1 ;j<size;j++){
				for(int i=0 ;i<j && found == false;i++){
					if(arr[j]< arr[i]){
						found = true;
						int tmp = arr[j];
						for(int h= j-1 ; h > -1 ; h-- ){
							arr[h+1] = arr[h];
						}
						arr[i] = tmp;
					}	
				}
				found = false;
			}
		}
		
		void selection_sort(int *arr , int size){
			int tmp = 0;
			int tmp_val = arr[tmp];
			for(int j=0;j<size;j++){
				for(int i=j;i<size;i++){
					if(arr[i] < tmp_val){
						tmp_val = arr[i];
						tmp = i;
					}
				}
				swap(arr[j] , arr[tmp]);
				tmp = j+1;
				tmp_val = arr[tmp];
			}
		}
};














int main(){
	
	sort s;
	int arr[] = {3,7,10,2,1,8};
	cout<<"array :  ";
	for(int i=0;i<sizeof(arr)/4 -1 ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	s.bubble_sort(arr,sizeof(arr)/4 -1);
	cout<<"sorted by bubble sort :  ";
	for(int i=0;i<sizeof(arr)/4 ;i++){
		cout<<arr[i]<<" ";
	}
	
	
	int arr2[] = {5,3,2,1};
	cout<<endl<<endl<<"array :  ";
	for(int i=0;i<sizeof(arr2)/4 ;i++){
		cout<<arr2[i]<<" ";
	}
	s.insertion_sort(arr2 ,sizeof(arr2)/4);
	cout<<endl<<"sorted by insertion sort :  ";
	for(int i=0;i<sizeof(arr2)/4 ;i++){
		cout<<arr2[i]<<" ";
	}
	
	
	int arr3[] = {6,2,9,4,7,0,1};
	cout<<endl<<endl<<"array :  ";
	for(int i=0;i<sizeof(arr3)/4 ;i++){
		cout<<arr3[i]<<" ";
	}
	s.selection_sort(arr3 ,sizeof(arr3)/4);
	cout<<endl<<"sorted by selection sort :  ";
	for(int i=0;i<sizeof(arr3)/4 ;i++){
		cout<<arr3[i]<<" ";
	}
	
	return 0;
}