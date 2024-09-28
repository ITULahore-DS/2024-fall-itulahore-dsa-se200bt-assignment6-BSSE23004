#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
    }
    void setNext(Node *val)
    {
        this->next = val;
    }
    Node *getNext()
    {
        return next;
    }
    int getData()
    {
        return data;
    }
    void setData(int data)
    {
        this->data = data;
    }
};

//---------------------------Class List-------------------------------------------------

class Stack
{
    Node *top;
    int count;

public:
    Stack()
    {
        top = nullptr;
        count = 0;
    }
    ~Stack()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            temp = temp->getNext();
            delete temp;
        }
    }
    bool isEmpty()
    {
        if (count == 0)
        {
            return true;
        }
        return false;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->setNext(nullptr);
        if (top == nullptr)
        {
            top = temp;
        }
        else
        {
            temp->setNext(top);
            top = temp;
        }
        ++count;
    }

    void pop()
    {
        // checking the list
        if (top == nullptr)
        {
            cerr << "List Not Made" << endl;
            return;
        }
        Node *temp = top->getNext();
        top->setNext(nullptr);
        delete top;
        top = temp;
        --count;
    }

    Node *getTop()
    {
        return top;
    }
    void printStack()
    {
        if (top == nullptr)
        {
            cerr << "List is not made!!!" << endl;
            return;
        }
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->getData() << endl;
            temp = temp->getNext();
        }
    }
    int peek()
    {
        if (isEmpty() || top == nullptr)
        {
            cout << "Stack is Empty!!" << endl;
            return -1;
        }
        return top->getData();
    }
    int size()
    {
        return count;
    }

    void clear()
    {
        count = 0;
    }
};

class Queue
{
    Node *top;
    int count;

public:
    Queue()
    {
        top = nullptr;
        count = 0;
    }
    ~Queue()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            temp = temp->getNext();
            delete temp;
        }
    }
    bool isEmpty()
    {
        if (count == 0)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data)
    {
        Node *temp = new Node(data);
        temp->setNext(nullptr);
        if (top == nullptr)
        {
            top = temp;
        }
        else
        {
            temp->setNext(top);
            top = temp;
        }
        ++count;
    }

    void dequeue()
    {
        // checking the list
        if (top == nullptr)
        {
            cerr << "List Not Made" << endl;
            return;
        }
        Node *temp = top->getNext();
        top->setNext(nullptr);
        delete top;
        top = temp;
        --count;
    }

    Node *getTop()
    {
        return top;
    }
    void printQueue()
    {
        if (top == nullptr)
        {
            cerr << "List is not made!!!" << endl;
            return;
        }
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->getData() << endl;
            temp = temp->getNext();
        }
    }
    int peek()
    {
        if (isEmpty() || top == nullptr)
        {
            cout << "Stack is Empty!!" << endl;
            return -1;
        }
        return top->getData();
    }
    int size()
    {
        return count;
    }

    void clear()
    {
        count = 0;
    }
};

#endif