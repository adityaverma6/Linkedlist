#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};
 node * insertAtHead(int arr[],int index ,int size , node *pre)
{
    if(index == size)
    return pre;
    node* temp = new node(arr[index]);
    temp->next = pre;
    insertAtHead(arr,index+1,size,temp);

}
    int main ()
    {
        int arr[]={ 5, 8 , 10, 15, 20 };
        node *head = insertAtHead(arr, 0, 5, NULL);
        node *temp = head;
        cout << " Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << "-> "<< temp->next << endl;
            temp = temp->next;
        }
        cout << head->data;
    }
