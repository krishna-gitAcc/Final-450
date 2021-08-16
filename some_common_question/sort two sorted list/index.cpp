#include <iostream>
using namespace std;
class node {
public:
  int data;
  node *next;
  node(int key) {
    data = key;
    next = NULL;
  }
};
node *insertnode() {
  int data;
  cin >> data;
  node *head = NULL;
  while (data != -1) {
    node *newnode = new node(data);
    if (head == NULL) {
      head = newnode;
    } else {
      node *temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newnode;
    }
    cin >> data;
  }
  return head;
}
// node *mergenode(node *head1, node *head2) {
//   node *head = NULL;
//   node *tail = NULL;
//   while (head1 != NULL && head2 != NULL) {
//     if (head1->data <= head2->data) {
//       if (head == NULL) {
//         head = head1;
//         head1 = head1->next;
//         tail = head;

//       } else {
//         tail->next = head1;
//         head1 = head1->next; // should increase head1;
//         tail = tail->next;
//       }

//     } else {
//       if (head == NULL) {
//         head = head2;
//         head2 = head2->next;
//         tail = head;

//       } else {
//         tail->next = head2;
//         head2 = head2->next;
//         tail = tail->next;
//       }
//     }
//   }
//   if(head2 != NULL) {
//     tail->next = head2;
//     // tail=tail->next;
//   }
//   if(head1 != NULL) {
//     tail->next = head1;
//     // tail=tail->next;
//   }
//   return head;
// }
node *mergenode(node *head1, node *head2) {
  node *head = NULL;
  while (head1 != NULL && head2 != NULL) {
    if (head1->data <= head2->data) {
      if (head == NULL) {
        head = head1;
        head1 = head1->next;
        head->next = NULL; // added
      } else {
        node *temp = head;
        while (temp->next != NULL) {
          temp = temp->next;
        }
        temp->next = head1;
        head1 = head1->next;
        temp->next->next = NULL; // added
      }

    } else {
      if (head == NULL) {
        head = head2;
        head2 = head2->next;
        head->next = NULL; // added

      } else {
        node *temp = head;
        while (temp->next != NULL) {
          temp = temp->next;
        }
        temp->next = head2;
        head2 = head2->next;
        temp->next->next = NULL; // added
      }
    }
  }
  // modified the while loop
  if (head2 != NULL) {
    node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = head2;
    // head2 = head2->next;
  }
  // modified the while loop
  if (head1 != NULL) {
    node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = head1;
    // head1 = head1->next;
  }
  return head;
}
void printnode(node *head) {
  while (head != NULL) {

    cout << head->data << "->";
    head = head->next;
  }
  cout << "NULL" << endl;
}
int main() {
  node *head1 = insertnode();
  node *head2 = insertnode();
  // printnode(head1);
  node *head = mergenode(head1, head2);
  printnode(head);
  return 0;
}