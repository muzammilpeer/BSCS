#include <iostream>
using namespace std;
template <class T>
class Node {
  public:
    Node(): next(0) {}
    Node(T item,Node<T>* link):data(item),next(link) {}
    Node(T item):data(item),next(0) {}
    ~Node() {}
    T Get() {
    return data;
    }
    void Set(const T d) {
    data=d;
    next=0;
    }
    Node<T>* GetNextPtr() {
    return next;
    }
    void SetNextPtr(Node<T>* link) {
    next=link;
    }     
  private:       
    T data;
    Node<T>* next;
};
template <class T>
class SinglyLinkList {
  public:
    SinglyLinkList():head(0) {}
    SinglyLinkList(const SinglyLinkList& rhs) {
    }
    SinglyLinkList& operator = (const SinglyLinkList& rhs) {
    }
    ~SinglyLinkList();
    void Insert(T);
    void InsertToHead(T);
    void InsertToLast(T);
    void SplitIntoHalf();
    void DeleteList();
    void Reverse();
    void R_Reverse(Node<T> node);
    void PrintList();
    void PrintHead();
    void PrintLast();
    void DeleteNode();
    void call();
//  private:
    Node<T>* head;  
};
template <class T>
void SinglyLinkList<T>::DeleteList() {
       if (head==0) {
         return;
       } else {
              Node<T>* temp=head;
              while (head!=NULL)
                {
                  head=head->GetNextPtr();
                  temp->SetNextPtr(0);
                  delete temp;
                  temp=head;
                }
                head=0;
              } 
       
     }
template <class T>
void SinglyLinkList<T>::Insert(T item) {
       head = new Node<T>(item,head);
     }
template <class T>
void SinglyLinkList<T>::PrintList() {
       Node<T>* temp= head;
       while (temp!=NULL)
        {
         cout<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        }
     }
template <class T>
void SinglyLinkList<T>::InsertToHead(T item) {
       if (head!=NULL) {
         Node<T>* temp;
         temp = new Node<T>(item,head);
         head=temp;
       } else {
              head = new Node<T>(item);
              }         
     }
template <class T>
void SinglyLinkList<T>::InsertToLast(T item) {
       if (head!=NULL) {
         Node<T>* temp=head;
         Node<T>* newdata;
         while(temp->GetNextPtr()!=NULL) {
           temp = temp->GetNextPtr();
         }
          temp->SetNextPtr(new Node<T>(item));
       } else {
              head = new Node<T>(item);
              } 
    }
template <class T>
void SinglyLinkList<T>::R_Reverse(Node<T> node) {
     if (head!=0) {
                    if (node->GetNextPtr()!=0) {
                                                R_Reverse(node->GetNextPtr());
                                                node->SetNextPtr(node->SetNextPtr(0));
                                                node->SetNextPtr(node->SetNextPtr(node));
                                                node->SetNextPtr(0);
                                               }
                                               else {
                                                    head = node;
                                                    }
                  }
     }
template <class T>
void SinglyLinkList<T>::call() {
/*      R_Reverse(head<char>);
  */    }     
template <class T>
void SinglyLinkList<T>::Reverse() {
     if (head!=0) {
                  Node<T>* pred=head;
                  Node<T>* curr=head->GetNextPtr();
                  Node<T>* succ=head->GetNextPtr()->GetNextPtr();
                  pred->SetNextPtr(NULL);
                  curr->SetNextPtr(pred);
                
                  while (succ!=NULL) {  
   
                         curr=succ;
                         succ=succ->GetNextPtr();
   
                         curr->SetNextPtr(pred);
                         pred=curr;
                        }
                  head=curr;      
                  }
     }
template <class T>
SinglyLinkList<T>::~SinglyLinkList() {
                if (head!=NULL) {
                DeleteList();
                }
                head=0;                  
                }
   
int main()
{
    SinglyLinkList<int> s1;
    for (int i=0;i<10;i++) {
      s1.Insert(i);
    }
    /*s1.InsertToHead(50);
    s1.InsertToLast(15);
    s1.DeleteList();
    s1.InsertToHead(99);
    s1.InsertToLast(78);
    s1.InsertToLast(49);
    for (int i=0;i<10;i++) {
      s1.Insert(i);
    }
    s1.PrintList();
    cout<<"\nReverse List"<<endl;
    s1.call();
    */s1.PrintList();
    system("pause");
    return 0;
}
