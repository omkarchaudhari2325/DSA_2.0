#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout << "The value " << this->data << " is " << " deleted" << endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{

    Node *newNode = new Node(data);
    newNode->next = head;
    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}
void insertAtTail(Node *&tail, Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        tail = newNode;
    }
    else
    {

        tail->next = newNode;
    }
    if (head == NULL)
    {
        head = newNode;
    }
    tail = newNode;
}
int findLen(Node *&head, Node *tail)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtPostition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // inserting at the first position
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // inserting at the last position
    int len = findLen(head, tail);
    // if(position == len);
    if(position >= len){
        insertAtTail(tail,head,data);
        return;
    }
    int i = 1;
    Node * prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    Node * curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}  
void deleteNode(int position, Node *&head, Node *&tail){
    // deleting the first node 
    if(position == 1){
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    // position is the last position 
   int len = findLen(head,tail);
   if(position == len){
    Node * prev = head;
    Node * temp = tail;
    int i = 1;
    while(i < position -1){
        prev = prev->next;
        i++;
    }
    prev->next = NULL;
    tail = prev;
    delete temp;
    return;

   }
//    deleting at the middle position 
    Node * prev = head;
    int i = 1;
    while(i < position - 1){
        prev = prev->next ;
        i++;
    }
    Node * curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtTail(tail, head, 77);
    print(head);
    // insertAtPostition(900,0,head,tail);
    deleteNode(5,head,tail);
    print(head);
    deleteNode(3,head,tail);
    print(head);
   
    return 0;
}