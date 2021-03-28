/*
  Name: M.Muzammil Peer
  Copyright: Macer MX
  Author: Angel Eyes
  Date: 12/10/08 01:39 am
  Roll Number :07-0057
  Description: Question 1 of Assignment 2
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
template <class T,class Ti>
class Node {
  public:
    Node(): next(0) {}
    Node(T item,T meti,Ti sig,Node<T,Ti>* link):data(item),next(link) {
           ex=meti;
           sign=sig;
           }
    Node(T item,T meti,Ti sig):data(item)/*,ex(meti)*/,next(0) {
           ex=meti;
           sign=sig;
           }
    ~Node() {}
    
    T Get() {
    return data;
    }
    T GetPower() {
    return data;
    }
    T GetExp() {
    return ex;
    }
    void Set(const T d) {
    data=d;
    next=0;
    }
    Node<T,Ti>* GetNextPtr() {
    return next;
    }
    void SetNextPtr(Node<T,Ti>* link) {
    next=link;
    }     
  private:       
    T data;
    T ex;
    Ti sign;
    Node<T,Ti>* next;
};
template <class T,class Ti>
class SinglyLinkList {
  public:
    SinglyLinkList():head(0),tail(0) {}
    SinglyLinkList(const SinglyLinkList& rhs) {
    }
    ~SinglyLinkList();
    int fact(int data) {
     if(data==0) return 1;
     else
     return data*fact(data-1);  
     }

    int size(Node<T,Ti>*);
    bool Find(T);
    void Insert(T,T,Ti);
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
    SinglyLinkList<T,Ti>& operator = (const SinglyLinkList& rhs);
    SinglyLinkList<T,Ti>& operator + (const  SinglyLinkList& rhs);
    T operator [] (T pass);
    void Combination(int);
    void Generate(int);
  private:
    Node<T,Ti>* tail;  
    Node<T,Ti>* head;  
};
template <class T,class Ti>
bool SinglyLinkList<T,Ti>::Find(T data) {
     Node<T,Ti>* temp= head;
        do
        {
         if (data == temp->Get()) return true;     
         temp=temp->GetNextPtr();
        }while (temp!=tail->GetNextPtr());
       return false;
     } 
template <class T,class Ti>
void SinglyLinkList<T,Ti>::PrintHead() {
     if (head!=NULL) {
                     cout<<head->Get()<<endl;
                     }
                     else cout<<"List is Empty () "<<endl;
     }
/*template <class T,class Ti>
void SinglyLinkList<T>::PrintLast() {
     if (head!=NULL) {
                     cout<<tail->Get()<<endl;
                     }
                     else cout<<"List is Empty () "<<endl;
     }*/
template <class T,class Ti>
void SinglyLinkList<T,Ti>::DeleteList() {
       if (head==0) {
         return;
       } else {
              Node<T,Ti>* temp=head;
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
/*     
template <class T>
    void SinglyLinkList<T,class Ti>::DeleteFromTop() {
         if (head!=0) {
                     Node<T>* temp=head;
                     head=head->GetNextPtr();
                     temp->SetNextPtr(NULL);
                     delete temp;
                     }
         }
template <class T,class Ti>
void SinglyLinkList<T,class Ti>::DeleteFromBottom() {
         if (head!=0) {
                        Node<T,class Ti>* temp=head;
                        while (temp->GetNextPtr()!=tail) {
                        temp=temp->GetNextPtr();
                        }
                        tail->SetNextPtr(0);
                        delete tail;
                        temp->SetNextPtr(head);
                        tail=temp;
                       }
         }
template <class T,class Ti>
T SinglyLinkList<T,class Ti>::SplitIntoHalf() {
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
        return half->Get();
   
   }    */     
template <class T,class Ti>
void SinglyLinkList<T,Ti>::Insert(T item,T meti,Ti sig) {
       if (head==NULL) {//or tail
                       head = new Node<T,Ti>(item,meti,sig,head);
                       tail=head;
                       } else  {
                               tail->SetNextPtr(new Node<T,Ti>(item,meti,sig,head));
                               tail=tail->GetNextPtr();
                       }
       }
/*
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
     }*/
template <class T,class Ti>
void SinglyLinkList<T,Ti>::PrintList() {
       if (head!=0) {
       ofstream out("A2P1out1.txt",ios::app);
       Node<T,Ti>* temp= head;
        do
        {
         cout<<temp->GetExp()<<"x"<<"^"<<temp->Get()<<", ";
         out<<temp->GetExp()<<"x"<<"^"<<temp->Get()<<", ";
         temp=temp->GetNextPtr();
        }while (temp!=tail->GetNextPtr());
        cout<<endl;
        out<<endl;
        out.close();
        } else {
               cout<<"No Data Member Link List Is Empty() "<<endl;
               }
     }/*
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
     }*/
template <class T,class Ti>
SinglyLinkList<T,Ti>&  SinglyLinkList<T,Ti>:: operator = (const  SinglyLinkList& rhs) {
                  if (this==&rhs) {
                                    return *this;
                                    } else {
                                           if (head!=0) 
                                           DeleteList();
                                           }
                                           if (rhs.head!=0) {
                                           Node<T,Ti>* TEMP=rhs.head;
                                                        do 
                                                        {
                                                        Insert(TEMP->GetPower(),TEMP->GetExp(),'+');
                                                        TEMP=TEMP->GetNextPtr();
                                                        } while (TEMP!=rhs.tail->GetNextPtr());
                                                return *this;
                                                }
                  }
template <class T,class Ti>
SinglyLinkList<T,Ti>& SinglyLinkList<T,Ti>:: operator + (const  SinglyLinkList& rhs) {
if (head==0 && rhs.head==0) {
                                               return *this;
                                                }
                                                else if (rhs.head==0) {
                                                                      return *this;
                                                                      } else {
                                                        SinglyLinkList<T,Ti>* Return= new  SinglyLinkList<T,Ti>();
                                                        int checkforlistend=0;
Node<T,Ti>* first;//=head;//first list head
Node<T,Ti>* second;//=rhs.head;//second list head
Node<T,Ti>* ft;//=tail;//first list head
Node<T,Ti>* st;//=rhs.tail;//For unbalance and balance powers.
//cout<<"size "<<size(first)<<"rhs.size "<<size(second)<<endl;
if (size(head) > size(rhs.head)) {
first=head;//first list head
second=rhs.head;//second list head
ft=tail;//first list head
st=rhs.tail;//For unbalance and balance powers.
} else {
first=rhs.head;//first list head
second=head;//second list head
ft=rhs.tail;//first list head
st=tail;//For unbalance and balance powers.
       }

T t;
do {
if (first->GetPower()  >  second->GetPower()) {
t=first->GetExp();
Return->Insert(first->GetPower(),t,'+');
first=first->GetNextPtr();
} else if (first->GetPower()  <  second->GetPower()) {
t=second->GetExp();
Return->Insert(second->GetPower(),t,'+');
second=second->GetNextPtr();
} else if (first->GetPower()==second->GetPower()) {
t=second->GetExp()+first->GetExp();
Return->Insert(second->GetPower(),t,'+');
second=second->GetNextPtr();
first=first->GetNextPtr();
}

if (first->GetNextPtr()==ft) {
checkforlistend=1;
}
if (second==st) {
checkforlistend=0;
}
}while(first!=ft || second!=st->GetNextPtr()) ;
//Return->PrintList();
//============================================================================//

if (checkforlistend==0) {
do {
Return->Insert(first->GetPower(),first->GetExp(),'+');
first=first->GetNextPtr();
}while(first!=ft->GetNextPtr());

} else if (checkforlistend==1) {
do {
Return->Insert(second->GetPower(),second->GetExp(),'+');
second=second->GetNextPtr();
} while(second!=st->GetNextPtr());
}
return *Return;
}
}/*
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
 */ 
template <class T,class Ti>
SinglyLinkList<T,Ti>::~SinglyLinkList() {
                if (head!=NULL) {
                DeleteList();
                }
                head=0;                  
                }
template <class T,class Ti>
int SinglyLinkList<T,Ti>::size(Node<T,Ti>* Temp) {
       Node<T,Ti>* temp= Temp;
        int count=0;
        do
        {
         temp=temp->GetNextPtr();
         count++;
        }while (temp!=Temp);
        return count;
        }
int main()
{
   ofstream out("A2P1out1.txt",ios::trunc);
   out<<endl;
   out.close();
   SinglyLinkList<int,char> s1;
  //S1.Insert(Power,Exponent,sign of term);
   s1.Insert(3,1,'+');
   s1.Insert(2,4,'+');
   cout<<"First Polynomial"<<endl;
  // out<<"First Polynomial"<<endl;
   s1.PrintList();
   SinglyLinkList<int,char> s2;
   s2.Insert(5,3,'+');
   s2.Insert(3,2,'+');
   s2.Insert(2,5,'+');
   s2.Insert(1,9,'+');
   cout<<"Second Polynomial"<<endl;
  // out<<"Second Polynomial"<<endl;
   s2.PrintList();
   SinglyLinkList<int,char> s3;
   s3=s1+s2;
   cout<<"Result\n============================="<<endl;
 //  out<<"Result\n============================="<<endl;
   s3.PrintList();
   system("pause");
    return 0;
}

