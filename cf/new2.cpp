#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val) {
    data = val;
    next = nullptr;
    prev = nullptr;
  }
};
class DoublyLinkedList {
public:
  Node *head;
  DoublyLinkedList() { head = nullptr; }
  void insert(int val) {
    Node *newNode = new Node(val);
    if (!head) {
      head = newNode;
      return;
    }
    Node *temp = head;
    while (temp->next) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
  void display() {
    Node *temp = head;
    while (temp) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
  void removeEvenNodes() {
    if (!head || !head->next)
      return;
    Node *temp = head;
    int position = 1;
    while (temp && temp->next) {
      Node *evenNode = temp->next;
      temp->next = evenNode->next;
      if (evenNode->next) {
        evenNode->next->prev = temp;
      }
      delete evenNode;
      temp = temp->next;
      position += 2;
    }
  }
};
int main() {
  DoublyLinkedList myList;
  int val;
  cout << "Enter number of elements: ";
  int num = 5;
  cout << "Enter elements: ";
  for (int i = 0; i < num; i++) {
    cin >> val;
    myList.insert(val);
  }
  myList.removeEvenNodes();
  cout << "List after removing even-positioned nodes: ";
  myList.display();
  return 0;
}
