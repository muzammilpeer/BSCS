#include <iostream>
#include "bnode.h";
using namespace std;

template <class T>
class BSTree {
      public:
      BSTree():root(0),check(0),parent(0){}
      ~BSTree(){}
      //-----global function
      void Insert(T);
      void DisplayInOrder();
      void DisplayPreOrder();
      void DisplayPostOrder();
      T Delete(T);
      bool Search(T);
      int Height();
      int Width();
      bool CheckBalance();
      bool check;
      
      private:
      //-----local function
      void insert(BNode<T>*&,T);
      void displayinorder(BNode<T>*&);
      void displaypreorder(BNode<T>*&);
      void displaypostorder(BNode<T>*&);
      bool search(BNode<T>*&,T);
      BNode<T>*& getparent(BNode<T>*&,T);
      void deletes(BNode<T>*&,T);
      T findmin(BNode<T>*);
      BNode<T>* root;
      BNode<T>* parent;
    
};      

template <class T>
void BSTree<T>::insert(BNode<T>*& head,T data) {
     if (head==NULL) {
         head=new BNode<T>(data);
      } else if (data<head->Get()) {
          insert(head->GetLftPtr(),data);
          } else if (data>=head->Get()) {
              insert(head->GetRhtPtr(),data);
              }
  }
template <class T>
void  BSTree<T>::Insert(T info) {
  insert(root,info);
  }
template <class T>
void BSTree<T>::displayinorder(BNode<T>*& head) {
     if (head!=NULL) {
      displayinorder(head->GetLftPtr());
      cout<<head->Get()<<",";
      displayinorder(head->GetRhtPtr());
      } 
  }
template <class T>
void BSTree<T>::DisplayInOrder() {
  displayinorder(root);
  }
template <class T>
void BSTree<T>::displaypreorder(BNode<T>*& head) {
     if (head!=NULL) {
      cout<<head->Get()<<",";
      displaypreorder(head->GetLftPtr());
      displaypreorder(head->GetRhtPtr());
      }
  }
template <class T>
void BSTree<T>::DisplayPreOrder() {
  displaypreorder(root);
  }
template <class T>
void BSTree<T>::displaypostorder(BNode<T>*& head) {
     if (head!=NULL) {
      displaypreorder(head->GetLftPtr());
      displaypreorder(head->GetRhtPtr());
      cout<<head->Get()<<",";
      }
  }
template <class T>
void BSTree<T>::DisplayPostOrder() {
  displaypostorder(root);
  }
template <class T>
bool BSTree<T>::search(BNode<T>*& head,T data) {
    if (head!=NULL) {
      if (data==head->Get()) {
          check = true;
      }
      search(head->GetLftPtr(),data);
      search(head->GetRhtPtr(),data);
      }
     return check;
  }
template <class T>
bool BSTree<T>::Search(T data) {
return search(root,data);
}
template <class T>
BNode<T>*& BSTree<T>::getparent(BNode<T>*& head,T data) {
    if (head!=NULL) {
      if (head->GetLftPtr()==NULL && head->GetRhtPtr()!=NULL) {
         if (data==head->GetRhtPtr()->Get()){
                     parent=head;
          }
           } else if (head->GetRhtPtr()==NULL && head->GetLftPtr()!=NULL) {
                     if (data==head->GetLftPtr()->Get()){
                        parent=head;}
          }
      getparent(head->GetLftPtr(),data);
      getparent(head->GetRhtPtr(),data);
      }
     return parent;
  }
template <class T>
T BSTree<T>::findmin(BNode<T>* node) {
  BNode<T>* temp=node;
   while(node!=NULL){
    if (node->GetLftPtr()==0) {
      T TE=node->Get();
   BNode<T>* te=node;
    while (te!=temp->GetLftPtr())
    temp=temp->GetLftPtr();
    BNode<T>* de=temp->GetLftPtr();
      temp->SetLftPtr(0);
      delete de;
       return TE;
     }
    node=node->GetLftPtr();
    }
   // cout<<"node"<<node->Get();
    return -1;
   }
     
template <class T>
T BSTree<T>::Delete(T info) {
 if (Search(info)==true) {
     BNode<T>* path=root;
     if (path->GetLftPtr() == NULL && path->GetRhtPtr() == NULL) {// element is root and tree having only root.
         delete root;
         cout<<"element is root and tree having only root.";
         root=NULL;
      } else if ( path->GetLftPtr() == NULL && path->GetRhtPtr() != NULL ) {
                 if (info == path->Get()) {//the element is root and its right child exist
                    BNode<T>* temp=root;
                    root = root->GetRhtPtr();
                    delete temp;
                 } 
           } else if (path->GetRhtPtr() == NULL && path->GetLftPtr() != NULL) {
                    if (info == path->Get()) {//the element is root and its left child exist
                        BNode<T>* temp=root;
                        root = root->GetLftPtr();
                        delete temp;
                     }
              } else if (info == path->GetLftPtr()->Get()){
                        path->GetLftPtr()->Set(findmin(path->GetLftPtr()->GetRhtPtr()));
                 } else if (info == path->GetRhtPtr()->Get()){
                        path->GetRhtPtr()->Set(findmin(path->GetRhtPtr()->GetRhtPtr()));
                 } else {
                        Delete(info);
                        }
                  /*if (info < path->GetLftPtr()->Get()){
                        path->GetLftPtr()->Set(findmin(path->GetLftPtr()->GetRhtPtr()));
                    }*/
 }   
     return -1;
  }
