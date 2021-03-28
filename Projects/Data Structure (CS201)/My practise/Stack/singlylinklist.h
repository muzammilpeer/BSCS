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
    void PrintList();
    void PrintHead();
    void PrintLast();
    void DeleteNode();
    bool Empty();
    T  DeleteTop();
    T GetTop();
  private:
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
       while (head!=NULL)
        {
         cout<<head->Get()<<", ";
         head=head->GetNextPtr();
        }
     }
template <class T>
void SinglyLinkList<T>::InsertToHead(T item) {
       if (head!=NULL) {
         Node<T>* temp;
         temp = new Node<T>(item,head);
         head=temp;
       } else {
              head = new Node<
              T>(item);
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
T SinglyLinkList<T>::GetTop() {
 if (head)
 return head->Get();
 /*else {
      cout<<"Stack is Empty"<<endl;
      return  "-1";
  }*/
 }
template <class T>
bool SinglyLinkList<T>::Empty() {
if (head==0){
    return false;
 } else {
     return true;
     }
}
template <class T>
T SinglyLinkList<T>::DeleteTop() {
 T  result=head->Get();
 Node<T>* temp=head;
 head=head->GetNextPtr();
 temp->SetNextPtr(0);
 delete temp;
 return result;
 }
 
template <class T>
SinglyLinkList<T>::~SinglyLinkList() {
                if (head!=NULL) {
                DeleteList();
                }
                head=0;                  
                }
   
