#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
void push(Node**head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void InsertAtMiddle(Node* middle, int new_data){
    Node* new_node = new Node();
    new_node->next = middle->next;
    middle->next = new_node;
    new_node->data = new_data;
}
void Insertatend(Node** head_ref, int new_data){
    Node* last = *head_ref;
    if(*head_ref=NULL){
        cout<<"NO LIST"<<endl;
    }
    while(last != NULL){
        last = last->next;
    }
    Node* new_node = new Node();
    last->next = new_node;
    new_node->data = new_data;
}
void PrintList(Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main(){
    Node* a = NULL;
    push(&a, 8);
    push(&a, 7);
    Insertatend(&a, 9);
    Insertatend(&a, 19);
    PrintList(a);
    return 0;
}