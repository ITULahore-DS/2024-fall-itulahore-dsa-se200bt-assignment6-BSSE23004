#include "functions.h"

int main()
{
    Stack stack;
    Queue queue;
    int choice, data;

    while (true)
    {
        cout << "-------------Assignment 6-------------\n";
        cout << "0. Exit\n";
        cout << "1. Push to Stack\n";
        cout << "2. Pop from Stack\n";
        cout << "3. Peek Stack\n";
        cout << "4. Print Stack\n";
        cout << "5. Enqueue to Queue\n";
        cout << "6. Dequeue from Queue\n";
        cout << "7. Peek Queue\n";
        cout << "8. Print Queue\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter data to push: ";
            cin >> data;
            stack.push(data);
            cout << "Data pushed to stack.\n";
        }
        else if (choice == 2)
        {
            stack.pop();
            cout << "Operation Done.\n";
        }
        else if (choice == 3)
        {
            data = stack.peek();
            if (data != -1)
                cout << "Top element of the stack: " << data << endl;
        }
        else if (choice == 4)
        {
            stack.printStack();
        }
        else if (choice == 5)
        {
            cout << "Enter data to enqueue: ";
            cin >> data;
            queue.enqueue(data);
            cout << "Data enqueued to queue.\n";
        }
        else if (choice == 6)
        {
            queue.dequeue();
            cout << "Operation Done.\n";
        }
        else if (choice == 7)
        {
            data = queue.peek();
            if (data != -1)
                cout << "Front element of the queue: " << data << endl;
        }
        else if (choice == 8)
        {
            queue.printQueue();
        }
        else if (choice == 0)
        {
            cout << "Exiting program.\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Please try again.\n";
        }

        cout << endl;
    }

    return 0;
}
