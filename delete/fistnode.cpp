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
node *insertAtHead(int arr[], int index, int size)
{
    if (index == size)
        return NULL;
    node *temp = new node(arr[index]);
    temp->next = insertAtHead(arr, index + 1, size);
    return temp;
}
void traverse(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deletenode(node *&temp)
{
    if (temp!=NULL)
    {
        node *temp1 = temp;
    temp = temp->next;
    delete temp1;
}
    }
    
    
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    node *head = insertAtHead(arr, 0, 5);
    cout << "befour delete Linked List: ";
    traverse(head);
    deletenode(head);
    cout << "after delete Linked List: ";
    traverse(head);

    

    return 0;
}
