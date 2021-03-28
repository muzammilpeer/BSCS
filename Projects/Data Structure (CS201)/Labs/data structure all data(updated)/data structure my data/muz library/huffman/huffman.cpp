#include<iostream>
#include<conio.h>
#include "hPQ.h"
#include "bnode.h"
// #include "BST.h"
using namespace std;

template<class T>
class huffman {
  private:
       PQ<BNode<T>*> HT;
       
  public:
        void Insert(T value) {
            HT.Enque(value);
            }
        void order() {}
       
};


int main() {
huffman<char> T;

getch();
return 0;
}
