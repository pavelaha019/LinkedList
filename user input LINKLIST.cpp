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
Node* head = nullptr;
Node* current = nullptr;

int numNodes;

    cout<<"Enter the number of nodes : ";
    cin>>numNodes;

    cout<<"Enter the data for each nodes : ";
    for(int i=0; i< numNodes; i++){
        int data;
          cout<< "Nodes "<< i+1 << ": "  ;
          cin>> data;

    Node* newNode = new Node();
    newNode ->data = data;
    newNode ->next = nullptr;

    if (head == nullptr){
        head = newNode;
        current = newNode;
    }
    else {
        current ->next = newNode;
        current = newNode ;
    }
    }
    cout << "LINKED LIST : ";
    printlist(head);
return 0;
}