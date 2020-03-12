#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next = NULL;
    }
};
class Queue{
public:
    int sz;
    Node *front, *tail;
    Queue(int data){
        front = NULL;
        tail = NULL;
    }
    void push(int data)
    {
        Node *node = new Node(data);
        if (front==NULL)
        {
            tail = node;
            front = node;
        }
        else
        {
            tail->next = node;
            tail=node;
        }
        sz++;
    }
    void pop(){
        if(front!=NULL)
        {
            front = front->next;
        }
        else {
            tail=NULL;
        }
    }
    bool empty(){
        if(front==NULL)
            return true;
        return  false;
    }
    int site(){
        return  tail->data;
    }
    int fronty(){
        return front->data;
    }
};
int main(){}






//#include <iostream>
//using namespace std;
//int gcd (int a, int b) {
//    while (a>0 && b>0) {
//        if (a>b) {
//            a=a%b;
//        }
//        else b=b%a;
//    }
//    if (a!=0)
//        return a;
//    return b;
//}
//
//int main () {
//    int t, a, b;
//    cin>>t>>b;
//    for (int i=2; i<=t; ++i) {
//        cin>>a;
//        b=gcd (a, b);
//    }
//    cout<<b;
//    return 0;
//}
