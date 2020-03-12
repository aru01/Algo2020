//
//  main.cpp
//  LinkedList
//
//  Created by Аружан Туткенова on 3/12/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

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
class LList{
public:
    int sz;
    Node *head, *tail;
    LList(int data){
        head=NULL;
        tail=NULL;
    }
    
    void insert(int data)   //в конец
    {
        Node *node = new Node(data);
        if(head==NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next=node;
            tail = node;
        }
    }
    void insert_start(int data)
    {
        Node *node = new Node(data);
        node->next=head;
        head=node;
    }
    
    void insert_position(int position, int data)
    {
        Node *node = new Node(data);
        Node *current = new Node(data);
        Node *previous = new Node(data);
        current=head;
        for(int i=1;i<position;i++)
        {
            previous = current;
            current = current -> next;
        }
        previous->next=node;
        node->next=current;
    }
    void delete_first(int data)
    {
        if(head!=NULL){
            head=head->next;
        }
    }
    void delete_last(int data)
    {
        Node *current = new Node(data);
        Node *previous = new Node(data);
        current=head;
        while(current->next!=NULL)
        {
            previous=current;
            current=current->next;
        }
        tail=previous;
        previous->next=NULL;
        delete current;
    }
    
    void delete_position(int pos, int data)
    {
        Node *current = new Node(data);
        Node *previous = new Node(data);
        current=head;
        for(int i=1;i<pos;i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
 
