#include<iostream>

using namespace std;

class Node{
    public :
    int data ;
    Node* next;
};
void printlist(Node* n){
    while (n != nullptr)
    {
        cout<< n->data << " ";
        n = n-> next;
    }
}
int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *forth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();

    head->data =7;
    head->next = second;
    second->data =4;
    second->next = third;
    third->data =3;
    third->next = forth;
    forth->data =11;
    forth->next = NULL;

    printlist(head);

    return 0;
}