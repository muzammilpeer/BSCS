/*Split  Half Function is  not  fine in working  return not exact mid of list./*
/*  
  Name: Muzammil Peer
  Copyright: Macer MX  2008     
  Author: Angel Eyes
  Date: 17/09/08 12:48
  Description: Bonus[Mid-1] for Part 3.  question with  three  function "[]" , "+" and "reverse".
*/
#include <iostream>
using namespace std;
template <class T>
class DNode {
  public:
    DNode(): next(0),prev(0) {}
    DNode(T item,DNode<T>* Next,DNode<T>* Prev):data(item),next(Next),prev(Prev) {}
    DNode(T item):data(item),prev(next),next(0) {}
    ~DNode() {}
    
    T Get() {
    return data;
    }
    void Set(const T d) {
    data=d;
    next=0;
    }
    DNode<T>* GetNextPtr() {
    return next;
    }
    void SetNextPtr(DNode<T>* link) {
    next=link;
    }     
   DNode<T>* GetPrevPtr() {
    return prev;
    }
    void SetPrevPtr(DNode<T>* link) {
    prev=link;
    }     
  private:       
    T data;
    DNode<T>* next,*prev;
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
    void PrintListQueue();
    void PrintListStack();
    void PrintHead();
    void PrintLast();
    void DeleteFromTop();
    void DeleteFromBottom();
    SinglyLinkList<T>& operator + (const  SinglyLinkList& rhs);
    T operator [] (int);
  private:
    DNode<T>* tail;  
    DNode<T>* head;  
};
template <class T>
bool SinglyLinkList<T>::Find(T data) {
     DNode<T>* temp= head;
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
              DNode<T>* temp=head;
                do
                {
                  temp->SetNextPtr(0);
                  temp->SetPrevPtr(0);
                  delete temp;
                  head=head->GetNextPtr();
                  temp=head;
                }while (temp!=head); 
                tail=head=0;
              } 
     }
     
template <class T>
void SinglyLinkList<T>::DeleteFromTop() {
         if (head->GetNextPtr()!=0) {
                     DNode<T>* temp=head;
                     head=head->GetNextPtr();
                     head->SetPrevPtr(tail);
                     tail->SetNextPtr(head);
                     
                     temp->SetNextPtr(NULL);
                     temp->SetPrevPtr(NULL);
                     delete temp;
                     }
         }
         
template <class T>
void SinglyLinkList<T>::DeleteFromBottom() {
         if (head->GetNextPtr()!=0) {
                        DNode<T>* temp=tail;
                        tail=tail->GetPrevPtr();
                        tail->SetNextPtr(head);
                        head->SetPrevPtr(tail);
                       
                        temp->SetNextPtr(0);
                        temp->SetPrevPtr(0);
                        delete temp;
                       }
         }
template <class T>
T SinglyLinkList<T>::SplitIntoHalf() {
     DNode<T>* curr= head;
     DNode<T>* half= head;
     DNode<T>* temp= head;
        do
        {
          half=half->GetNextPtr();
          curr=curr->GetNextPtr()->GetNextPtr();
        } while (curr!=head);
        return half->Get();
   }         
template <class T>
void SinglyLinkList<T>::Insert(T item) {
       if (head==NULL) {//or tail
                       head = new DNode<T>(item,head,head);
                       tail=head;
                       } else  {
                               tail->SetNextPtr(new DNode<T>(item,head,tail));
                               tail=tail->GetNextPtr();
                               head->SetPrevPtr(tail);
                               }
       }

template <class T>
void SinglyLinkList<T>::InsertBefore(T before,T data) { 
     if (Find(before)==true) {
                            DNode<T>* temp= head;
                            do {
                                if (before == head->Get()) {
                                    InsertToHead(data);
                                    return;
                                    }else if (before == temp->GetNextPtr()->Get()) {
                                             temp->SetNextPtr(new DNode<T>(data,temp->GetNextPtr(),temp));
                                             temp=temp->GetNextPtr();
                                             temp->GetNextPtr()->SetPrevPtr(temp);
                                             return;
                                             }
                            temp=temp->GetNextPtr();
                            } while (temp!=tail->GetNextPtr());

                            }
                            else cout<<"Can't Insert After B/C "<<before<<" Does Not Exist in List.\n";  
     }
template <class T>
void SinglyLinkList<T>::InsertAfter(T after,T data) {
     if (Find(after)==true) {
                            DNode<T>* temp= head;
                            do {
                                if (after == tail->Get()) {
                                    InsertToLast(data);
                                    return;
                                    } else if (after == temp->Get()) {
                                temp->SetNextPtr(new DNode<T>(data,temp->GetNextPtr(),temp));
                                temp=temp->GetNextPtr();
                                temp->GetNextPtr()->SetPrevPtr(temp);
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
       DNode<T>* temp= head;
        do
        {
         cout<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        } while (temp!=tail->GetNextPtr());
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }
template <class T>
void SinglyLinkList<T>::PrintListQueue() {
       if (head!=0) {
       DNode<T>* temp= head;
        do
        {
         cout<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        } while (temp!=tail->GetNextPtr());
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }
template <class T>
void SinglyLinkList<T>::PrintListStack() {
       if (head!=0) {
       DNode<T>* temp= tail;
       do
        {
         cout<<temp->Get()<<", ";
         temp=temp->GetPrevPtr();
        } while (temp!=tail);
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }
template <class T>
void SinglyLinkList<T>::InsertToHead(T item) {
       if (head!=NULL) {
          DNode<T>* temp;
          head = new DNode<T>(item,head,tail);
          head->GetNextPtr()->SetPrevPtr(head);
          tail->SetNextPtr(head);
          head->SetPrevPtr(tail);
          } else {
                  head = new DNode<T>(item,head,head);
                  tail=head;
                 }         
     }
template <class T>
void SinglyLinkList<T>::InsertToLast(T item) {
          Insert(item);
        }
template <class T>
void SinglyLinkList<T>::Reverse() {
     if (head!=0) {
                  DNode<T>* pred=head;
                  DNode<T>* curr=head->GetNextPtr();
                  DNode<T>* succ=head->GetNextPtr()->GetNextPtr();
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
                                                        DNode<T>* TEMP=rhs.head;
                                                        do 
                                                        {
                                                        Insert(TEMP->Get());
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=rhs.tail->GetNextPtr());
                                                        tail=TEMP;
                                                        tail->SetNextPtr(head);
                                                     }
                                                return *this;
                   }
template <class T>
T SinglyLinkList<T>:: operator [] (const int index) {
                   if (head!=0) {
                   DNode<T>* temp= head;
                   int i=0;
                   do
                   {
                       if ( index == i ) {
                                        return temp->Get();
                                        }
                    temp=temp->GetNextPtr();
                    i++;
                   } while (temp!=tail->GetNextPtr());
                   cout<<"\nOut of Bound. \n";
                   return -1;
                   } else {
                   cout<<"\nLink List is Empty() \n";
                           return -1;
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
    
    for (int i=0;i<10;i++) {
      s1.Insert(i);
    }
    for (int i=10;i<=20;i++) {
      s2.Insert(i);
    }
    cout<<"\n\nS2 Orignal  List () \n==================\n";
    s2.PrintList();
    cout<<"\nStack\n";
    s2.PrintListStack();
    cout<<"\nQueue\n";
    s2.PrintListQueue();
   /* cout<<"S1 Orignal  List () \n=================\n";
    s1.PrintList();
    cout<<"\nS1 After Reverse () \n=================\n";
    s1.Reverse();
    s1.PrintList();
    cout<<"\n\nS2 Orignal  List () \n==================\n";
    s2.PrintList();
    cout<<"\n\n[] Operator  .Founding  cout<< s1[5] \""<<s1[10]<<"\""<<endl;
    cout<<"\n\n + operator() Adding  S2+S1 \n============================\n";
    s2+s1;
    s2.PrintList();
    //----------------Extra Functions---------in Working State.Tested
    s2.DeleteFromTop();
   */ 
    s2.DeleteList();
    s2.InsertToLast(25);
    s2.InsertToHead(99);
    s2.InsertToHead(98);
    s2.InsertToHead(97);
    s2.InsertAfter(99,49);
    s2.InsertAfter(25,57);
    s2.InsertBefore(57,32);
    s2.InsertBefore(97,3);
    s2.DeleteFromTop();
    s2.DeleteFromTop();
    s2.DeleteFromBottom();
    s2.DeleteFromBottom();
    s2.DeleteFromTop();
    s2.DeleteFromTop();
    s2.DeleteFromBottom();
    s2.DeleteFromBottom();
    /*cout<<"\n S2\n";
    s2.PrintList();
    cout<<"\nSplit is "<<s2.SplitIntoHalf()<<endl; // i m not  staisfy with  split  half function.
    */
    cout<<"\n\n>>>>> Stack\n";
    s2.PrintListStack();
    cout<<"\n>>>>> Queue\n";
    s2.PrintList();
    cout<<endl;
    system("pause");
    return 0;
}


