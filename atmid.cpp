#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node *create(int arr[], int size, int index)
{
    if (index == size)
        return NULL;
    node *temp = new node(arr[index]);
    temp->next = create(arr, size, index + 1);
    return temp;
}
void insertmid(node *temp, int add, node *head)
{
    int count = 0;
    node *temp1 = head;
    while (count < add - 1)
    {
        temp1 = temp1->next;
        count++;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = create(arr , 5 ,0);
    node *temp= head;
    cout << "Before Insertion: " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    node *temp1 = new node(6);
    insertmid(temp1, 2, head);
    cout << "After Insertion: " << endl;
    temp = head;    
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}