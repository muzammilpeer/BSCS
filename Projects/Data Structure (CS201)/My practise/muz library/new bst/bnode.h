#include <iostream>
using namespace std;

template <class T>
class BNode {
    
    public:
    BNode(): left(0),right(0) {}
    BNode(T item):data(item),left(0),right(0){}
    BNode(T item,BNode<T>* llink,BNode<T>* rlink):data(item),left(llink),right(rlink) {}
    ~BNode(){}
    T Get() {
    return data;
    }
    void Set(const T d) {
    data=d;
    }
    BNode<T>*& GetLftPtr() {
    return left;
    }
    BNode<T>*& GetRhtPtr() {
    return right;
    }
    void SetLftPtr(BNode<T>* link) {
    left=link;
    }     
    void SetRhtPtr(BNode<T>* link) {
    right=link;
    }     
  private:       
    T data;
    BNode<T>* left;
    BNode<T>* right;
};
