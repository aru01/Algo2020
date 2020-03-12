#include <iostream>
using namespace std;

class Node{  //сперва создаем класс котрый будет нашей ячейки; в посд из котроты хбущеь состоять наш стэк
public:
    int data; //ячекйи будут содержать какие либо данные
    Node *next; // и указатель типа нод на слд элемент
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Stack{
public:
    Node *top; //указатель на вершину стека
    int sz;
    
    void push(int data) // принмает переменную которач будет записываться в ячейку
    {
        Node *node = new Node(data);//созадем новый указтель нод класса Node и выделяем память для нового элемента и записываем число в  data
        if(top==NULL) //Если вершины нет, то есть стек пустой
            top = node; //вершиной стека будет новый элемент
        else{  //если стек не пустой
            node->next=top; //Проводим связь от нового элемента, к вершине. Тоесть кладем книжку на вершину стопки.
            //нашей ячейки достаем указатель на следующий элемент *next и заменяем его на указатель, который указывает на вершину стека *top
            top = node; //Обозначаем, что вершиной теперь является новый элемент
        }
        sz++;
    }
    void pop(){
        if(top!=NULL)
        {
            top=top->next; //передвигаем вершину на следующий элемент
            sz--;
        }
    }
    bool empty(){
        if(top==NULL)
            return true;
        return  false;
    }
    int top_v(){
        return top->data;
    }
    int size()
    {
        return sz;
    }
};

int main (){
    
    Stack *myStack = new Stack();
    myStack->push(2);
    myStack->push(3);
    myStack->push(4);
    cout<<myStack->size()<<endl;
    myStack->pop();
    cout<<myStack->top_v()<<endl;
    return 0;
    
}
