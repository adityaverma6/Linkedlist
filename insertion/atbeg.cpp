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
    vector<int> arr = {2, 5, 8, 4, 6, 7, 4};
    node *head = NULL;
    for (int i = 0; i < arr.size(); i++)
    {

        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    node *temp1 = head;
    while (temp1!=NULL)
    {
        // node *temp1 = head;
        cout << temp1->data << "-> ";
        temp1 = temp1->next;
    }
    cout<<"NULL";
}