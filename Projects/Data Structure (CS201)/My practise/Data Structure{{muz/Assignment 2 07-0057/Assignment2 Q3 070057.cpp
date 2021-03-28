/*
  Name: M.Muzammil Peer
  Copyright: Macer MX
  Author: Angel Eyes
  Date: 12/10/08 01:39 am
  Roll Number :07-0057
  Description: Question 3 of Assignment 2
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
template <class T>
class DNode {
  public:
    DNode(): next(0),prev(0) {data= new char[15];}
    DNode(T item,DNode<T>* Next,DNode<T>* Prev):next(Next),prev(Prev) {
           // data=new char[strlen(item)];
            data=item;
            }
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
    SinglyLinkList<T>& operator = (const SinglyLinkList& rhs);
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
         if (head!=0) {
                        DNode<T>* temp=tail;
                        tail=tail->GetPrevPtr();
                        tail->SetNextPtr(head);
                        head->SetPrevPtr(tail);
                       
                        temp->SetNextPtr(0);
                        temp->SetPrevPtr(0);
                        delete temp;
                       }
                       else cout<<"List Is Empty()"<<endl;
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
       ofstream out ("A2P3out1.txt",ios::trunc);
        do
        {
         cout<<temp->Get()<<", ";
         out<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        } while (temp!=tail->GetNextPtr());
        out<<endl;
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }
template <class T>
void SinglyLinkList<T>::PrintListStack() {
       if (head!=0) {
       DNode<T>* temp= tail;
       ofstream out ("A2P3out1.txt",ios::trunc);
       do
        {
         cout<<temp->Get()<<", ";
         out<<temp->Get()<<", ";
         temp=temp->GetPrevPtr();
        } while (temp!=tail);
        out<<endl;
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
                  tail->SetNextPtr(tail);
                  tail->SetPrevPtr(tail);
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
                                                        SinglyLinkList<T>* Return= new  SinglyLinkList<T>();
                                                        DNode<T>* TEMP=head;
                                                        do 
                                                        {
                                                        Return->Insert(TEMP->Get());
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=tail->GetNextPtr());
                                                        TEMP=rhs.head;
                                                        do 
                                                        {
                                                        Return->Insert(TEMP->Get());
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=rhs.tail->GetNextPtr());
                                                        
                                                        return *Return;
                                                     }
                                                
                   }
template <class T>
SinglyLinkList<T>& SinglyLinkList<T>:: operator = (const  SinglyLinkList& rhs) {
                   if (this==&rhs) {
                                    return *this;
                                    } else {
                                           if (head!=0) 
                                           DeleteList();
                                           }
                                           if (rhs.head!=0) {
                                           DNode<T>* TEMP=rhs.head;
                                                        do 
                                                        {
                                                        Insert(TEMP->Get());
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=rhs.tail->GetNextPtr());
                                                return *this;
                                                }
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
    SinglyLinkList<string> s1;
    ifstream in("A2P3in1.txt");
    char* str;
    str=new char[10];
     cout<<"str:\n======\n"<<endl;
    while (!in.eof()) {
          in>>str;
       //   cout<<str<<endl;
          s1.Insert(str);
         // s1.PrintList();
          } 
    cout<<"\n>>>>> Forward Navigation\n";
    s1.PrintListQueue();
    cout<<"\n\n>>>>> Backward Navigation\n";
    s1.PrintListStack();
    
    cout<<endl;
    system("pause");
    return 0;
}


