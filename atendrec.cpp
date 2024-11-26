#include <bits/stdc++.h>
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
node *atbeg()
{
    int x;
    cout << "Enter the value of node: ";
    cin >> x;
    if (x == -1)
        return NULL;
    else
    {
        node *temp = new node (x);
        temp->next = atbeg();
        return temp;
    }
}
void traverse(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
}
int main()
{
    node *head = atbeg();
    traverse(head);
    cout << NULL;
}