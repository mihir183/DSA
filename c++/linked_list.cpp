#include<iostream>
using namespace std;

class Node{
    public:
    int roll;
    string name;
    Node* next;

    Node(int roll,string name){
        this->roll = roll;
        this->name = name;
        this->next = NULL;
    }
};

void insert(Node* &head,int roll,string name){
    Node* newNode = new Node(roll,name);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp -> next;
    }

    temp->next = newNode;

}

void print(Node* head){
    
    if(head == NULL){
        cout<<"Linked List is Empty....!";
        return;
    }

    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->roll<<" "<<temp->name<<endl;
        temp = temp->next;
    }
    
}

int main(){
    Node* head = NULL;

    cout<<"How Many data you have Insert : ";
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<i<<") Enter Roll No : ";
        int roll;
        cin>>roll;
        cout<<i<<") Enter Name : ";
        string name;
        cin>>name;
        insert(head,roll,name);
    }

    cout<<"Linked List Output : "<<endl;
    print(head);

    
    
    
}