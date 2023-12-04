#pragma once
#include "_lib.h"
#include "_Struck.h"

template <typename T>
struct Node
{
    T data;
    Node<T>* next;

    Node(T val)
    {
        data = val;
        next = nullptr;
    }
};
template <typename T>
class LinkedList
{
private:
    Node<T>* head;

public:
    LinkedList()
    {
        head = nullptr;
    }

   
    void insert(T val)
    {
        Node<T>* newNode = new Node<T>(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }


    Node<T>* findNodeByID(string id)
    {
        Node<T>* temp = head;
        while (temp != nullptr)
        {
            if (temp->data.id == id)
            {
                return temp; 
            }
            temp = temp->next;
        }
        return nullptr; 
    }

    
    void setStatementFalse(string id)
    {
        Node<T>* node = findNodeByID(id);
        if (node != nullptr)
        {
            node->data.statement = false;
        }
    }

    void Replace(string id, Node<T> NewNode)
    {
        Node<T>* node = findNodeByID(id);
        if (node != nullptr)
        {
            node->data = NewNode.data;
        }
    }
    void printList()
    {
        Node<T>* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    void ToArray(Restaurant Chain[])
    {
        Node<T>* temp = head;
        int i = 0;
        while (temp != nullptr)
        {
            Chain[i].id = temp->data.id;
            Chain[i].type = temp->data.type;
            Chain[i].Capacity = temp->data.Capacity;
            Chain[i].Tablearr->id = temp->data.Tablearr->id;
            Chain[i].Tablearr->statement = temp->data.Tablearr->statement;
            Chain[i].profit = temp->data.profit;
            Chain[i].staff = temp->data.staff;
            i++;
            temp = temp->next;

        }
    }

    // Sort Ranking of Restaurants 
    
    void bubbleSort()
    {
        if (head == nullptr || head->next == nullptr)
        {
           
            return;
        }

        bool swapped;
        Node<T>* ptr1;
        Node<T>* lptr = nullptr;

        do
        {
            swapped = false;
            ptr1 = head;

            while (ptr1->next != lptr)
            {
                if (ptr1->data.Capacity > ptr1->next->data.Capacity)
                {
                    
                    T temp = ptr1->data;
                    ptr1->data = ptr1->next->data;
                    ptr1->next->data = temp;

                    swapped = true;
                }

                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }

    void removeByID(string id)
    {
        Node<T>* current = head;
        Node<T>* prev = nullptr;

        while (current != nullptr && current->data.id != id)
        {
            prev = current;
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "Node with ID " << id << " not found in the list." << endl;
            return;
        }

        // Overwrite current node's data with the next node's data
        if (current->next != nullptr)
        {
            current->data = current->next->data;
            current->next = current->next->next;
        }
        else
        {
            // Last node in the list, remove it by updating prev's next pointer
            prev->next = nullptr;
        }
    }

    
};

