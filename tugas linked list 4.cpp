#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertdepan(Node *&head, int nilai);
void printList(Node *head);

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int n, nilai;

    cout << "Masukan jumlah data : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "data ke : " << i+1 << " : ";
        cin >> nilai;
        Node *newNode = new Node;
        newNode->data = nilai;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Masukan data yang di tambahkan di awal : ";
    cin >> nilai;
    insertdepan(head, nilai);

    printList(head);

    return 0;
}

void insertdepan(Node *&head, int nilai) {
    Node *newNode = new Node;
    newNode->data = nilai;
    newNode->next = head;
    head = newNode;
}

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << "->";
        temp = temp->next;
    }
    cout << "->NULL" << endl;
}
