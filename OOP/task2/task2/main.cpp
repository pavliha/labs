#include <iostream>
using namespace std;

class Node
{
public:
    char d; //данные
    Node *next;//показатель на следующий узел
    Node (char dat=0){d=dat; next=0;}//конструктор
};

class Stack
{
    Node *top;//показатель на вершину стека
public:
    Stack(){top=0;}//конструктор
    ~Stack();//деструктор
    void push(char d);//внесение элемента в стек
    void print();//вывод стека

};

void Stack::push(char d)
{
    Node *pv=new Node(d);//выделение памяти под новый узел
    if(!top){top=pv;}//создание вершины стека
    else//связывание нового узла с предыдущим
    { pv->next=top;
        top=pv;}//обновление показателя на вершину стека
}

void Stack::print()
{
    Node *pv=top;
    cout<<"\nStack:";
    while(pv){cout<<pv->d<<" ";
        pv=pv->next;}
    cout<<endl;
}

Stack::~Stack()
{
    if(top)
    {
        Node *pv=top;
        while(pv)
        {
            pv=pv->next;
            delete top;
            top=pv;
        }
    }
}

int main()
{
    Stack S;
    S.push('B');
    S.push('E');
    S.push('T');
    S.push('A');
    S.print();
}
