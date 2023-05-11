#include <iostream>
#include <string>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal)
    {
      val = initialVal;
      next = nullptr;
    }
  
};

//iterative func
void printList(Node* head) 
{
  Node* current = head;
  while(current != nullptr)
  {
    std::cout << current->val <<std::endl;
    current = current->next;
  }   
}

int main() 
{
  Node a("A");
  Node b("B");
  Node c("C");
  Node d("D");
  a.next = &b;
  b.next = &c;
  c.next = &d;

  printList(&a);
}