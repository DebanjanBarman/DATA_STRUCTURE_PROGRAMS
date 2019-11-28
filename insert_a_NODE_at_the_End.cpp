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
    void insert_last();
    void display();
    list()
    {
        start = NULL;
    }
};

int main()
{
    int choice, nodes, element, position, i;
    list sl;
    start = NULL;
    while (1)
    {
        cout << "_____MENU_____\n\n1--Insert node at last\n2--Display Linked List\n3--Exit\n\n>>>";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Inserting Node at Last: " << endl;
            sl.insert_last();
            cout << endl;
            break;
        case 2:
            cout << "Display elements of link list" << endl;
            sl.display();
            cout << endl;
            break;
        case 3:
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
