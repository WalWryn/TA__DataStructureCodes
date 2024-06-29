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


class Binary_tree{
	public:
		node* root;
		
		node* get_root(){
			return root;
		}
		
		void pre_order(node* n){
			if(n == nullptr)
				return;
			
			cout<<n->value<<" ";
			pre_order(n->left);
			pre_order(n->right);
		}
		
		void post_order(node* n){
			if(n == nullptr)
				return;
				
			post_order(n->left);
			post_order(n->right);
			cout<<n->value<<" ";
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
	Binary_tree  bt;
	bt.root = new node(2);
	bt.root->left = new node(3);
	bt.root->right = new node(6);
	bt.root->left->left = new node(7);
	bt.root->left->right = new node(1);	
	bt.root->right->left = new node(0);	
	bt.root->right->right = new node(4);
	
	cout<<"Pre Order :  ";
	bt.pre_order(bt.root);	
	cout<<endl;
	
	cout<<"Post Order :  ";
	bt.post_order(bt.root);	
	cout<<endl;
	
	cout<<"In Order :  ";
	bt.in_order(bt.root);	
	cout<<endl;
}