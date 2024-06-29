//  ostad goftan be jaye AVL , BST ham mitonid befrestid
#include<iostream>
using namespace std;


class node{
	public:
		int value;
		node* left;
		node* right;	
		node(int x){
			value = x;
			left = nullptr;
			right = nullptr;
		}
};


class bst{
	public:
		node* root;
		
		bst(int x){
			root = new node(x);
		}
		
		node* insert(node* n, int x){
			if (n == nullptr){
				return new node(x);
			}
			else if(x < n->value){
     		   n->left = insert(n->left, x);
			}
			else{
     		   n->right = insert(n->right, x);
			}
			
			
			return n;
				
		}
		
		void in_order(node* n){
			if(n == nullptr)
				return;
				
			in_order(n->left);
			cout<<n->value<<" ";
			in_order(n->right);
		}

};





int main(){
	bst b(5);
	b.insert(b.root , 10);
	b.insert(b.root , 2);
	b.insert(b.root , 3);
	b.insert(b.root , 6);
	b.insert(b.root , 9);
	b.insert(b.root , 0);
	cout<<"Root : "<<b.root->value<<endl;
	cout<<"In Order : ";
	b.in_order(b.root);

	
}