#include <iostream>
using namespace std;
class Node{
	int data;
	Node *left, *right;
	Node(int data)
	{
		this->data = data;
	}
}
class BST {
	Node* root;
	BST(){
		root = NULL;
	}

	Node* insert(Node *node, int data)
	{
		if (node == NULL)
		{
			node = new Node(data);
		}
		return node;
		if(node->data <= data)
			node->left=insert(node->left,data)
		else 
			node ->right=insert(node->right,data)
		return node;
	}
	Node* find_max(Node* node)
	{
		while(node -> right!=null)
			node=node->right;

		return node;
	}
	Node* find_min(Node* node)
	{
		while(node -> left!=null)
			node=node->left;

		return node;
	}
	Node* remove(int data, Node* node)
	{
		Node* node;
		if (node == NULL)
			return NULL;
		else if (data < node->data)
			node->left = remove(data,node->left)
		else if (data > node->data)
			node->right=remove(data,node->right);
		else if(node->left && node->right)
		{
			node = find_min(node->right)
			{
				node = findMin(node->right);
            	node->data = node->data;
            	node->right = remove(node->data, node->right);
			}
		}
		else
        {
            node = node;
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            delete node;
        }

        return t;

	}
}
int main(){
	return 0;
}