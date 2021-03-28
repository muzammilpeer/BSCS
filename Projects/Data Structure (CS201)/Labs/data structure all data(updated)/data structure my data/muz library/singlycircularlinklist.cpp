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
    void Insert(T);
    void InsertToHead(T);
    void InsertToLast(T);
    void InsertBefore(T,T);//First Parmeter is Before which element is inserted and second for data which is inserted.
    void InsertAfter(T ,T);//First Parmeter is After which element is inserted and second for data which is inserted.
    T SplitIntoHalf();//taking mean as return the mid value
    void DeleteList();
    void Reverse();
    void PrintList();
    void PrintHead();
    void PrintLast();
    void DeleteFromTop();
    void DeleteFromBottom();
    SinglyLinkList<T>& operator + (const  SinglyLinkList& rhs);
    T operator [] (T pass);
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
    void SinglyLinkList<T>::DeleteFromTop() {
         if (head!=0) {
                     Node<T>* temp=head;
                     head=head->GetNextPtr();
                     temp->SetNextPtr(NULL);
                     delete temp;
                     }
         }
template <class T>
void SinglyLinkList<T>::DeleteFromBottom() {
         if (head!=0) {
                        Node<T>* temp=head;
                        while (temp->GetNextPtr()!=tail) {
                        temp=temp->GetNextPtr();
                        }
                        tail->SetNextPtr(0);
                        delete tail;
                        temp->SetNextPtr(head);
                        tail=temp;
                       }
         }
template <class T>
T SinglyLinkList<T>::SplitIntoHalf() {
     Node<T>* curr= head;
     Node<T>* half= head;
     Node<T>* temp= head;
        do
        {
          curr=curr->GetNextPtr()->GetNextPtr()->GetNextPtr();
          temp=temp->GetNextPtr()->GetNextPtr();
          half=half->GetNextPtr();
        }while (curr!=tail->GetNextPtr());
        /*cout<<"Get of Curr "<<curr->Get()<<endl;
        cout<<"Get of temp "<<temp->Get()<<endl;
        cout<<"Get of half "<<half->Get()<<endl;
        */return half->Get();
   
   }         
template <class T>
void SinglyLinkList<T>::Insert(T item) {
       if (head==NULL) {//or tail
                       head = new Node<T>(item,head);
                       tail=head;
                       } else  {
                               tail->SetNextPtr(new Node<T>(item,head));
                               tail=tail->GetNextPtr();
                       }
       }

template <class T>
void SinglyLinkList<T>::InsertBefore(T before,T data) { 
     if (Find(before)==true) {
                            Node<T>* temp= head;
                            do {
                            if (before == temp->GetNextPtr()->Get()) {
                                temp->SetNextPtr(new Node<T>(data,temp->GetNextPtr()));
                                return;
                                }
                            temp=temp->GetNextPtr();
                            } while (temp->GetNextPtr()!=tail->GetNextPtr());

                            }
                            else cout<<"Can't Insert After B/C "<<before<<" Does Not Exist in List.\n";  
     }
template <class T>
void SinglyLinkList<T>::InsertAfter(T after,T data) {
     if (Find(after)==true) {
                            Node<T>* temp= head;
                            do {
                            if (after == temp->Get()) {
                                temp->SetNextPtr(new Node<T>(data,temp->GetNextPtr()));
                                return;
                                }
                            temp=temp->GetNextPtr();
                            } while (temp!=tail->GetNextPtr());

                            }
                            else cout<<"Can't Insert After B/C "<<after<<" Does Not Exist in List.\n";  
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
void SinglyLinkList<T>::InsertToHead(T item) {
       if (head!=NULL) {
         Node<T>* temp;
         temp = new Node<T>(item,head);
         head=temp;
         tail->SetNextPtr(head);
          } else {
              head = new Node<T>(item,head);
              tail=head;
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
void SinglyLinkList<T>::Reverse() {
     if (head!=0) {
                  Node<T>* pred=head;
                  Node<T>* curr=head->GetNextPtr();
                  Node<T>* succ=head->GetNextPtr()->GetNextPtr();
                  pred->SetNextPtr(tail);
                  curr->SetNextPtr(pred);
                  pred=curr;
                  tail=head;
                  
                  while (succ!=head) {  
   
                         curr=succ;
                         succ=succ->GetNextPtr();
   
                         curr->SetNextPtr(pred);
                         pred=curr;
                        }
                  head=curr;      
                  }
     }
template <class T>
SinglyLinkList<T>& SinglyLinkList<T>:: operator + (const  SinglyLinkList& rhs) {
                   if (head==0 && rhs.head==0) {
                                               return *this;
                                                }
                                                else if (rhs.head==0) {
                                                                      return *this;
                                                                      } else {
                                                        Node<T>* TEMP=rhs.head;
                                                        do 
                                                        {
                                                        Insert(TEMP->Get());
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=rhs.tail->GetNextPtr());
                                                     }
                                                return *this;
                   }
template <class T>
T SinglyLinkList<T>:: operator [] (const T pass) {
                   if (head!=0) {
                   Node<T>* temp= head;
                   do
                   {
                     if ( pass == temp->Get() ) {
                                        return pass;
                                        }
                    temp=temp->GetNextPtr();
                   } while (temp!=tail->GetNextPtr());
                   cout<<"\nNot Found=====================Number Not Found ====0 Result \n";
                   return pass;
                   } else {
                   cout<<"\nLink List is Empty() \n";
                           return pass;
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
    SinglyLinkList<int> s2;
    
    s1.InsertToHead(99);
    for (int i=0;i<10;i++) {
      s1.Insert(i);
    }
    s1.InsertToHead(25);
    s1.InsertToLast(100);
   // s1.DeleteList();
    for (int i=10;i<20;i++) {
      s2.Insert(i);
    }
    s2.DeleteFromTop();
    cout<<"S1 Members () \n";
    s1.PrintList();
   // s2.DeleteFromTop();
 //   s2.DeleteFromBottom();
    s2.InsertAfter(5,49);
    s2.InsertAfter(9,23);
    s2.InsertBefore(4,13);
    cout<<"S2"<<endl;
    s2.PrintList();
    cout<<"\nReverse Order"<<endl;
    s1.Reverse();
    cout<<"S1"<<endl;
    s1.PrintList();
    cout<<"\nFound this number \"45\":"<<s1[5]<<endl;
    cout<<"\nS2 Members () \n";
    s2+s1;
   // s2.PrintList();
    cout<<"\nSplit is "<<s2.SplitIntoHalf()<<endl;
    s2.PrintList();
    system("pause");
    return 0;
}

