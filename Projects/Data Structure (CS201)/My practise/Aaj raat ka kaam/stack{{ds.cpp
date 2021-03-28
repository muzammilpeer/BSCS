#include<iostream>
#include<conio.h>
#include<assert.h>
//#include "ali.h"
using namespace std;

template <class T>
class List;
template <class T>
class Node {
// declare class List a friend so that it can access
//Node's private vars.
//friend class List<T>;
public:
// constructors
Node() { nextPtr = 0; }
Node(const T & d) { data = d; nextPtr = 0; }
Node(const T & d, Node<T> *n)
{data = d; nextPtr = n; }
private:
T data; // data
Node<T> *nextPtr; // next node in the list
};
//Class List
// The List will contain nodes linked together by pointers
template <class T>
class List {
public:
List() { head = 0; } // constructor
List(const List<T> &); // copy constructor
~List(); // destructor
void deleteList();
void insertAtFront( const T & );
void removeAtFront();
void print() const;
unsigned int getSize() const ;
List& operator = (const List<T> &);
bool isempty() {
    if(head==NULL) return 0;
   else return 1; 
     }
T gethead() {
         if(head!=NULL)  return head->data;
 } 
   
private:
Node<T> *head; // pointer to first node
};
//Destructor
// Destructor
template<class T>
List<T>::~List()
{
//deleteList();
}
//DeleteList
template<class T>
void List<T>::deleteList()
{
if (head != 0) { // List is not empty
cout << "Destroying nodes ...\n";
Node<T> *currentPtr = head;
Node<T> *tempPtr;
while ( currentPtr != 0 ) { // not end of list
tempPtr = currentPtr;
cout << "Deleting " << tempPtr->data << endl;
currentPtr = currentPtr->nextPtr; // move ptr
tempPtr->nextPtr=0;
delete tempPtr; // delete last node
}
cout << "All nodes destroyed\n\n";
}
}
//insertAtFront
// Insert a node at the front of the list
template<class T>
void List<T>::insertAtFront( const T &value )
{
// create a new node with the value in it.
Node<T> *newPtr = new Node<T>(value);
assert(newPtr != 0);
if ( head == 0 ) // if List is empty
head = newPtr; // point to new node
else { // if List is not empty
newPtr->nextPtr = head; // point to list
head = newPtr; // move up firstPtr
}
}
//removeAtFront
// Delete a node from the front of the list
template<class T>
void List<T>::removeAtFront()
{
if ( head == 0 ) // List is empty
cout << "Error: list is empty!\n";
else {
Node<T> *tempPtr = head;
cout <<"Deleting " << tempPtr->data << endl;
head = head->nextPtr; // move to next node
delete tempPtr;
}
}
//print
// Display the contents of the List
template<class T>
void List<T>::print() const
{
if ( head == 0 ) {
cout <<"The list is empty\n\n";
}
else {
Node<T> *currentPtr = head;
cout <<"The list's Contents are : ";
while ( currentPtr != 0 ) { // not end of list
cout <<currentPtr->data << " -> ";
currentPtr = currentPtr->nextPtr;
}
cout <<"\n";
}
}
//getSize
template<class T>
unsigned int List<T>::getSize() const
{
unsigned int count=0;
if ( head == 0 ) {
return 0;
}
else {
Node<T> *currentPtr = head;
while ( currentPtr != 0 ) { // not end of list
count++;
currentPtr = currentPtr->nextPtr;
}
return count;
}
}
//CopyConstructor
// copy constructor
template<class T>
List<T>::List(const List<T> &rhs) {
head = 0;
Node<T> *ptr = rhs.head;
Node<T> *newPtr, *lastPtr;
while (ptr != 0) {
// create a new node with the value in it.
newPtr = new Node<T>(ptr->data);
assert(newPtr != 0);
if(head == 0)
head = newPtr; // first node
else
lastPtr->nextPtr = newPtr; // set up last link
lastPtr = newPtr; // save last ptr
ptr = ptr->nextPtr; // move up ptr
}
}
//Assignment Operator
// assignment operator
template<class T>
List<T> & List<T>::operator =(const List<T> &rhs) {
if (this != &rhs) {
deleteList();
head= 0;
Node<T> *ptr = rhs.head;
Node<T> *newPtr, *lastPtr;
while (ptr != 0) {
// create a new node with the value in it.
newPtr = new Node<T>(ptr->data);
assert(newPtr != 0);
if(head == 0)
head = newPtr; // first node
else
lastPtr->nextPtr = newPtr; // set up last link
lastPtr = newPtr; // save last ptr
ptr = ptr->nextPtr; // move up ptr
}
}
}
//using namespace std;


template<class T>
class stack {
  
  private: List<T> stck;
  
  public:
         stack() {}
//         ~stack() {
  //             stck.deleteList();   
    //              }
         
       bool push(const T& l) {
            stck.insertAtFront(l); 
            }    
       bool pop() {
            stck.removeAtFront(); 
            }
       T& peek() {
         if(!stck.isempty()) {
                          T temp=stck.gethead();
                         return temp;  }
                }            
     
     bool isempty() {
          stck.isempty();  }

      bool isfull() {
          if(assert(stck!= 0)) return 1;
          else return 0; 
           }
           
      void clear() {
             ~stack(); 
              }
           
};
      
  

int main()
{
    
stack<float> s;
getch();
return 0;
}
