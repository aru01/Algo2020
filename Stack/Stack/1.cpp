#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Stack{
public:
    int sz;
    Node *top;
    void push(int data){
        Node *node = new Node(data);
        if (top==NULL)
        {
            top=node;
        }
        else {
            node->next=top;
            top=node;
        }
        sz++;
    }
    void pop(){
        if (top!=NULL)
        {
            top=top->next;
            sz--;
        }
    }
    bool empty(){
        if (top==NULL)
            return true;
        return false;
        
    }
    int top_v(){
        return  top->data;
    }
    int size(){
        return  sz;
    }
};
int main(){}
