#include <iostream>
#include <vector>

using namespace std;
void sieve(int n, vector<bool> &prime, int &count) {
  for (int i = 1; i <= n; i++) {
    prime[i] = true;
    count++;
  }
  prime[1] = false;
  for (int p = 2; p <= n; p++) {
    if (prime[p]) {
      for (int i = 2 * p; i <= n; i += p) {
        prime[i] = false;
      }
    }
  }
}
class List;
class Node {
public:
  int data;
  friend List;
  Node *next;
  Node(int d) {
    data = d;
    next = NULL;
  }
};
class List {
public:
  Node *head = NULL;
  void build(int arr[], int size) {
    head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < size; i++) {
      Node *node = new Node(arr[i]);
      mover->next = node;
      mover = mover->next;
    }
  }
  void display() {
    Node *temp = head;
    while (temp) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};
int main() {
  int n1 = 5, n2 = 7;
  int arr1[5] = {1, 2, 3, 4, 5};
  List list1;
  list1.build(arr1, n1);

  int arr2[7] = {6, 7, 8, 9, 10, 11, 12};
  List list2;
  list2.build(arr2, n2);
  vector<bool> prime(n1 + n2);
  int count = 0;
  sieve(n1 + n2, prime, count);
  if (count < n2) {
    cout << "Not enough prime numbers to insert" << endl;
    return 0;
  }
  Node *curr = list1.head;
  Node *ptr = list2.head;
  int cnt = 1, i = 1;
  while (curr != NULL && cnt <= n2) {
    if (prime[i + 1]) {
      Node *temp = ptr;
      ptr = ptr->next;
      temp->next = curr->next;
      curr->next = temp;
      cnt++;
    }
    curr = curr->next;
    i++;
  }
  list1.display();
  return 0;
}
