#pragma once
#include "_lib.h"
#include "_Struck.h"

template <typename T>
class Stack
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& newData) : data(newData), next(nullptr) {}
    };

    Node* topNode;

public:
    Stack() : topNode(nullptr) {}

    ~Stack()
    {
        // Destructor to deallocate memory when the stack is destroyed
        while (!empty())
        {
            pop();
        }
    }

    void push(const T& element)
    {
        Node* newNode = new Node(element);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop()
    {
        if (!empty())
        {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
        else
        {
            std::cerr << "Error: Stack is empty. Cannot pop." << std::endl;
        }
    }

    T top() const
    {
        if (!empty())
        {
            return topNode->data;
        }
        else
        {
            std::cerr << "Error: Stack is empty. No top element." << std::endl;
            return T(); // Return a default-constructed object for simplicity.
        }
    }

    bool empty() const
    {
        return topNode == nullptr;
    }

    size_t size() const
    {
        size_t count = 0;
        Node* current = topNode;
        while (current != nullptr)
        {
            ++count;
            current = current->next;
        }
        return count;
    }

    void display() const
    {
        if (empty())
        {
            std::cout << "Stack is empty." << std::endl;
        }
        else
        {
            std::cout << "Stack content: ";
            Node* current = topNode;
            while (current != nullptr)
            {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
    }

     void ToArrayHistory(Record HistoryArr[]) const
    {
        int i = 0;

            Node* current = topNode;
            while (current != nullptr)
            {
                HistoryArr[i].Resid = current->data.Resid;
                HistoryArr[i].tableid = current->data.tableid;
                HistoryArr[i].cusname = current->data.cusname;
                HistoryArr[i].phonenumber = current->data.phonenumber;
                HistoryArr[i].cusnum = current->data.cusnum;
                HistoryArr[i].money = current->data.money;
                HistoryArr[i].dayT = current->data.dayT;
                HistoryArr[i].mothT = current->data.mothT;
                HistoryArr[i].yearT = current->data.yearT;
                HistoryArr[i].AddorRemove = current->data.AddorRemove;
                i++;
                current = current->next;
            }
    }
};