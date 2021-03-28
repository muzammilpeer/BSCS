#include <iostream>
#include "singlylinklist.h"
using namespace std;
template <class T>
class Stack
{
     private:
             SinglyLinkList<T> st;
     public:
             T Peek()
                  {
                         return (st.GetTop());
                  }
             void Push(T data)
                  {
                         st.Insert(data);
                  }
             T Pop()
               {
                   return st.DeleteTop();
               }
             void Clear()
                  {
                         cout<<"Stack cleared"<<endl;
                         st.DeleteList();
                  }
                 bool IsEmpty()
                  {
                      return st.Empty();
                  }
        
};
