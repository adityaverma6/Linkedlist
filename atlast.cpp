#include <iostream>
#include <vector>
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
int main()
{
    vector<int> arr = {1, 2, 6, 8, 6, 7};
    node *head = NULL;
    node *tail = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->next = new node(arr[i]);
        }
    }
    node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << "-> ";
        temp=temp->next;
    }
    cout << " NULL";
}
