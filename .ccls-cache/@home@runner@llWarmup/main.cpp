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

//recursive func
void printList(Node* head) 
{
  if(head == nullptr)
    return;
  std::cout <<head->val <<std::endl;
  printList(head->next);
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