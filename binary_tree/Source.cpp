#include <iostream>
using namespace std;

struct node
{
	
	int value;
	node* left;
	node* right;

	friend ostream& operator<<(ostream& out, const node& node);
};

struct node* new_node(int data)
{
	node* node = reinterpret_cast<::node*>(malloc(sizeof node));
	node->value = data;
	node->left = nullptr;
	node->right = nullptr;
	return node;
}

ostream& operator<<(ostream& out, const node& node)
{
	out << node.value;
	return out;
}

int main()
{
	node* root = new_node(1);
	root->left = new_node(2);
	root->right = new_node(3);
	cout<<*root;
	getchar();
}