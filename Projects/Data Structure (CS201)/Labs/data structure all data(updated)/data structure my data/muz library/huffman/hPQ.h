#include<iostream>
#include<conio.h>
//#include "bnode.h"
#include "queue2.h"
using namespace std;

//template<class P>
template<class T>
class PQ {
 private:
        SinglyLinkList<T> Q;
        int Pfield;
 public:   
      //  PQ():Q(0),Pfield(0) {}
      //  ~PQ() {}
        
       void Enque(T value)  {
            Q.InsertToLast(value);
            }
       T Deque()  {
            return Q.DeleteFromTop();
            }
        T Process()  {
            return Q.GetTop();
            }
       bool IsEmpty() {
            return Q.Empty();
            }
      
};
/*
int main() {
PQ<int> P;
P.Enque(5);
P.Enque(6);
P.Enque(7);
cout<<P.Process();
cout<<P.Deque();
cout<<P.Process();
cout<<P.Deque();
cout<<P.Process();
getch();
return 0;
}
*/
