/*
  Name: M.Muzammil Peer
  Copyright: Macer MX
  Author: Angel Eyes
  Date: 12/10/08 01:39 am
  Roll Number :07-0057
  Description: Question 2 of Assignment 2
*/

/*
THIS CODE IS NOT FOR N==2 AND N==2 it works fine for 3! and 4!;
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int coc=0;
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
    void Set(T d) {
    data=d;
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
    SinglyLinkList():head(0),tail(0) {
                                     curr=tail;
                                     part=tail;
                                     }
    SinglyLinkList(const SinglyLinkList& rhs) {
    }
    SinglyLinkList& operator = (const SinglyLinkList& rhs) {
    }
    ~SinglyLinkList();
    int fact(int data) {
     if(data==0) return 1;
     else
     return data*fact(data-1);  
     }

    int size();
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
    void Swap(T,T);
    void Combination(int);
    void Generate(int);
    void Delete(T);
    void  Deletes(T);
    void test(int);
  private:
    Node<T>* tail;  
    Node<T>* head;  
    Node<T>* curr; 
    Node<T>* part; 
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
       ofstream out("A2P2out1.txt",ios::app);
        do
        {
         cout<<temp->Get()<<", ";
         out<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        }while (temp!=tail->GetNextPtr());
        cout<<endl;
        out<<endl;
        out.close();
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
template <class T>
int SinglyLinkList<T>::size() {
       Node<T>* temp= head;
        int count=0;
        do
        {
         temp=temp->GetNextPtr();
         count++;
        }while (temp!=tail->GetNextPtr());
        return count;
        }
/*template <class T>
Node<T> SinglyLinkList::curr=0;
*/
template <class T>
void SinglyLinkList<T>::Deletes(T data) {
            if (head!=NULL) {
                if (Find(data)==true) {
                Node<T>* temp= head;
                while (temp->GetNextPtr()->Get()!=data) {
                        temp=temp->GetNextPtr();
                  }
              /* cout<<"temp"<<temp->GetNextPtr()->Get()<<temp->Get()<<endl;
                while (temp->Get()!=data) {
                   
                        temp=temp->GetNextPtr();
                  }
                temp=temp->GetNextPtr();
                */ //
                 /*if (temp->GetNextPtr()==tail) {
                 cout<<"hrer";
                                               DeleteFromBottom();
                                               } else {
                  */ cout<<"temp"<<temp->GetNextPtr()->Get()<<temp->Get()<<endl;
                  Node<T>* Temp=temp->GetNextPtr();
                  if (temp->GetNextPtr()==tail) {
                 //   cout<<"me:"<<endl;
                    temp->SetNextPtr(head);
                    tail=temp;
                    }
                    else {
                         temp->SetNextPtr(temp->GetNextPtr()->GetNextPtr());
                         }
                             Temp->SetNextPtr(0);
                             delete Temp;
                             //temp=temp->GetNextPtr();
                    }
                    //}
                  }
     }
template <class T>
void SinglyLinkList<T>::Delete(T data) {
              cout<<"Data is  "<<data<<endl;
                if (head!=NULL) {
                if (Find(data)==true) {
                Node<T>* temp= head;
                while (temp->GetNextPtr()->Get()!=data) {
                        temp=temp->GetNextPtr();
                  }
                temp=temp->GetNextPtr()->GetNextPtr();
                  Node<T>* Temp=temp->GetNextPtr();
                  if (temp->GetNextPtr()==tail) {
                 //   cout<<"me:"<<endl;
                    temp->SetNextPtr(head);
                    tail=temp;
                    }
                    else {
                         temp->SetNextPtr(temp->GetNextPtr()->GetNextPtr());
                         }
                             Temp->SetNextPtr(0);
                             delete Temp;
                    }
                  }
                }
template <class T>
void SinglyLinkList<T>::Swap(T first,T second) {
       Node<T>* temp=head;
       Node<T>* temp2=head;
       while (temp->Get()!=first) {
                temp=temp->GetNextPtr();
             }
             temp->Set(second);
             temp=temp->GetNextPtr();
             while(temp->Get()!=second) {
                                        temp=temp->GetNextPtr();
                                        }
             temp->Set(first);
     }
     
template <class T>
void SinglyLinkList<T>::Generate(int sizes) {
     Node<T>* temp= head;
     curr=tail;
     for (int i=0;i<sizes;i++) {
          PrintList();
          
             coc++;
          while (temp->GetNextPtr()!=curr) {
                 temp=temp->GetNextPtr();
             } 
          curr=temp;
         if(curr==head){
         curr=tail;
          while (temp->GetNextPtr()!=curr) {
                 temp=temp->GetNextPtr();
             } 
          curr=temp;
          }
          Swap(curr->Get(),curr->GetNextPtr()->Get());
            }
   //-------------------------------//         
Swap(head->Get(),part->Get());
cout<<endl<<endl<<endl;
     }

template <class T>
void SinglyLinkList<T>::Combination(int sizes) {
     //part=head;
     if (sizes==0) {
                  return;
                  }
                  else  {
                        part=part->GetNextPtr();
                       // cout<<"size is "<<(fact(size())/size());
                        Generate(fact(size())/size());
                        Combination(sizes-1);
                        }/*

SinglyLinkList<int> s1;

for(int i =1;i<=4;i++)
s1.Insert(i);
Node<T>* temp=head;
for (int l =0;l<24;l++) {
for(int i=0;i<6;i++)   {   
while(temp!= head) { 
     }
   }
  }*/
 }   
template <class T>
void SinglyLinkList<T>::test(int sizes) {
     part=head;
     Combination(sizes);
     }

int main()
{
    ofstream out("A2P2out1.txt",ios::trunc);
    out<<"Combinations :"<<endl;
    out.close();
    SinglyLinkList<string> s1;
    char* str;
    str =new char[255];
    int limit=0;
    ifstream in("A2P2in1.txt");
    while (!in.eof()) {
       in>>limit;
          for (int i=0;i<limit;i++) {
            in>>str;
               s1.Insert(str);
            }
     }
s1.test(s1.size());
cout<<"Total :: "<<coc<<endl;
in.close();
    system("pause");
    return 0;
}

