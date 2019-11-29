#include <iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
} * start;

class list
{
public:
    node *create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last();
    void delete_pos();
    void display();
    list()
    {
        start = NULL;
    }
};

main()
{
    int choice, nodes, element, position, i;
    list sl;
    start = NULL;
    while (1)
    {
        cout << "_____MENU_____\n\n1__Insert Node at beginning\n2__Insert node at last\n3__Insert node at position\n4__Delete a Particular Node\n5__Display Linked List\n6__Exit\n\n >>>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Inserting Node at Beginning: " << endl;
            sl.insert_begin();
            cout << endl;
            break;
        case 2:
            cout << "Inserting Node at Last: " << endl;
            sl.insert_last();
            cout << endl;
            break;
        case 3:
            cout << "Inserting Node at a given position:" << endl;
            sl.insert_pos();
            cout << endl;
            break;
        case 4:
            cout << "Delete a particular node: " << endl;
            sl.delete_pos();
            break;
        case 5:
            cout << "Display elements of link list" << endl;
            sl.display();
            cout << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            exit(1);
            break;
        default:
            cout << "Wrong choice" << endl;
        }
    }
}

node *list::create_node(int value)
{
    struct node *temp, *s;
    temp = new (struct node);
    if (temp == NULL)
    {
        cout << "Memory not allocated " << endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void list::insert_begin()
{
    int value;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *p;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout << "Element Inserted at beginning" << endl;
}

void list::insert_last()
{
    int value;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *s;
    temp = create_node(value);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    cout << "Element Inserted at last" << endl;
}

void list::insert_pos()
{
    int value, pos, counter = 0;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout << "Enter the postion at which node to be inserted: ";
    cin >> pos;
    int i;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1 && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout << "Positon out of range" << endl;
    }
}

void list::delete_pos()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the position of value to be deleted: ";
    cin >> pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout << "Position out of range" << endl;
        }
        free(s);
        cout << "Element Deleted" << endl;
    }
}
void list::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout << "The List is Empty" << endl;
        return;
    }
    temp = start;
    cout << "Elements of list are: \n"
         << endl;
    while (temp != NULL)
    {
        cout << temp->info << "\t";
        temp = temp->next;
    }
}
