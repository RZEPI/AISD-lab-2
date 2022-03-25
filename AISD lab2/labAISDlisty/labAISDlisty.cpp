#include <iostream>

using namespace std;

typedef struct Node
{
    int key;
    Node* next;
} Node;


void initList(int val, Node*& list, Node*& last)
{
    list = new Node;
    list->key = val;
    list->next = NULL;
    last = list;
}

void addElement(int val, Node*& last)
{
    Node* listNew = new Node;
    listNew->key = val;
    listNew->next = NULL;
    if (last->next == NULL)
    {
        last->next = listNew;
        last = listNew;
    }
    else
    {
        addElement(val, last->next);
    }
}

void delElement(Node*& list)
{
    Node* tmp;
    tmp = list->next;
    delete list;
    list = tmp;
}

void searchElement(int index,int val, Node*& list)
{
    if (list->key == val)
    {
        cout << index << endl;
    }
    else if (list->next == NULL)
    {
        cout << "-1" << endl;            
    }
    else
    {
        index++;
        searchElement(index, val, list->next);
    }
}

int main()
{
    Node* tail = NULL;
    char instruction = 'a';
    int value;
    int valueToSearch;
    int index = 0;
    Node* head = NULL;


    while (instruction != 'q')
    {
        cin >> instruction;
        switch (instruction)
        {
        case 'i':
            cin >> value;
            if (head == NULL)
                initList(value, head, tail);
            else
                addElement(value, tail);
            break;
        case 'd':
            delElement(head);
             break;
        case 's':
            cin >> valueToSearch;
            searchElement(index, valueToSearch, head);
            break;
        case 'q':
            while (head->next != NULL)
            {
                delElement(head);
            }
            break;
        }
    }
}