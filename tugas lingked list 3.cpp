#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void trav(struct Node *p);

int main(){
    Node *n1 = NULL;	
    Node *n2 = NULL;	
    Node *n3 = NULL;
    
    n1 = new Node;
    n2 = new Node;
    n3 = new Node;
    
    n1->data = 20;
    n1->next = n2;
    
    n2->data = 30;
    n2->next = n3;
    
    n3->data = 40;
    n3->next = NULL;
    
    cout << "data linked list \n";
    trav(n1);
}

void trav(struct Node *p)
{
    int i = 0;
    int total = 0;      
    
    while (p != NULL) {
        cout << "data ke : " << i+1 << " : ";
        cout << p->data;
        
        total += p->data; 
        
        p = p->next;
        cout << endl;
        i++;
    }
    cout << "Jumlah data : " << i << endl;
    cout << "Total nilai adalah : " << total << endl;
}
