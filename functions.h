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
        Node *temp;
        while (top != nullptr)
        {
            temp = top;
            top = top->getNext();
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
            cerr << "Stack is Empty!!" << endl;
            return;
        }
        Node *temp = top;
        top = top->getNext();
        delete temp;
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
            cerr << "Stack is Empty!!!" << endl;
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
        Node *temp;
        while (top != nullptr)
        {
            temp = top;
            top = top->getNext();
            delete temp;
        }
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
        Node *temp;
        while (top != nullptr)
        {
            temp = top;
            top = top->getNext();
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
            Node *it = top;
            while (it->getNext() != nullptr)
            {
                it = it->getNext();
            }
            it->setNext(temp);
        }
        ++count;
    }

    void dequeue()
    {
        if (top == nullptr)
        {
            cerr << "Queues is Empty!!" << endl;
            return;
        }
        Node *temp = top;
        top = top->getNext();
        temp->setNext(nullptr);
        delete temp;
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
            cerr << "Queue is Empty!!!" << endl;
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
            cout << "Queue is Empty!!" << endl;
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
        Node *temp;
        while (top != nullptr)
        {
            temp = top;
            top = top->getNext();
            delete temp;
        }
        count = 0;
    }
};

#endif