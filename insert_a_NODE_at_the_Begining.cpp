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
        cout << "_____MENU_____\n\n1__Insert Node at beginning\n2__Display Linked List\n3__Exit\n\n>>>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Inserting Node at Beginning: \n"
                 << endl;
            sl.insert_begin();
            cout << endl;
            break;
        case 2:
            cout << "Display elements of link list\n"
                 << endl;
            sl.display();
            cout << endl;
            break;
        case 3:
            cout << "Exiting...\n"
                 << endl;
            exit(1);
            break;
        default:
            cout << "Wrong choice\n"
                 << endl;
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
    cout << "\nElement Inserted at beginning\n"
         << endl;
}

void list::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout << "\nThe List is Empty\n"
             << endl;
        return;
    }
    temp = start;
    cout << "\nElements of list are: \n"
         << endl;
    while (temp != NULL)
    {
        cout << temp->info << "\t";
        temp = temp->next;
    }
    cout<<"\n\n";
}
