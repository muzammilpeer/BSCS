#include <iostream>
using namespace std;
template <class T>
class Heap{
      
      private:
            T* hlist;
            int maxheapsize;
            int heapsize;
            
            void HeapDown(int i);
            void HeapUp(int i);
       
       public:
              Heap(int maxsize);
              Heap(T arr[], int n);
              Heap(const Heap<T>& h);
              ~Heap();
               bool isEmpty(void);
              bool isFull(void);
              void Insert(const T& item);
              T Delete(void);
              void Display();
              void ClearHeap();
                              
      };

