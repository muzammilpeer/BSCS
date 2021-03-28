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
    bool Find(T);
    void InsertToLast(T);
    void DeleteList();
    void PrintList();
    void PrintHead();
    void PrintLast();
    T DeleteFromTop();
    bool Empty() {
    if (head==0)
    return true;
    else 
     return false;
    }
    
    T GetTop() {
    if (head)
    return head->Get();     
    }
    
  private:
    Node<T>* tail;  
    Node<T>* head;  
};
template <class T>
bool SinglyLinkList<T>::Find(T data) {
     Node<T>* temp= head;
        do
        {
         if (data == temp->Get()) return true;     
         temp=temp->GetNextPtr();
        }while (temp!=tail->GetNextPtr());
       return false;
     } 
template <class T>
void SinglyLinkList<T>::PrintHead() {
     if (head!=NULL) {
                     cout<<head->Get()<<endl;
                     }
                     else cout<<"List is Empty () "<<endl;
     }
template <class T>
void SinglyLinkList<T>::PrintLast() {
     if (head!=NULL) {
                     cout<<tail->Get()<<endl;
                     }
                     else cout<<"List is Empty () "<<endl;
     }
template <class T>
void SinglyLinkList<T>::DeleteList() {
       if (head==0) {
         return;
       } else {
              Node<T>* temp=head;
                do
                {
                  temp->SetNextPtr(0);
                  delete temp;
                  head=head->GetNextPtr();
                  temp=head;
                }while (temp!=head); 
                tail=head=0;
              } 
       
     }
     
template <class T>
     T SinglyLinkList<T>::DeleteFromTop() {
         if (head!=0) {
                     T data;
                     Node<T>* temp=head;
                     head=head->GetNextPtr();
                     temp->SetNextPtr(NULL);
                     data=temp->Get();
                     delete temp;
                     return data;
                     }
         }

template <class T>
void SinglyLinkList<T>::PrintList() {
       if (head!=0) {
       Node<T>* temp= head;
        do
        {
         cout<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        }while (temp!=tail->GetNextPtr());
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }
template <class T>
void SinglyLinkList<T>::InsertToLast(T item) {
       if (head!=NULL) {
           tail->SetNextPtr(new Node<T>(item,head));
          tail=tail->GetNextPtr();
       } else {
              head = new Node<T>(item,head);
              tail=head;
              } 
    }
  
template <class T>
SinglyLinkList<T>::~SinglyLinkList() {
                if (head!=NULL) {
                DeleteList();
                }
                head=0;                  
                }
   /*
   
    bool Find(T);
    void InsertToLast(T);
    void DeleteList();
    void PrintList();
    void PrintHead();
    void PrintLast();
    void DeleteFromTop();
   
   */
int main()
{
    SinglyLinkList<int> s1;
    SinglyLinkList<int> s2;
    s1.InsertToLast(5);
    s1.InsertToLast(6);
    s1.InsertToLast(7);
    s1.PrintLast();
    s1.PrintHead();
    s1.PrintList();
    cout<<endl<<s1.Find(6);
    cout<<endl<<"top:"<<s1.DeleteFromTop();
    cout<<endl;
    s1.PrintList();
    system("pause");
    return 0;
}

