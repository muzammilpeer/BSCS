#include "Heap.h"

template <class T>
Heap<T>::Heap(int size)
{
 maxheapsize=size;
 heapsize=1;
 hlist= new T[size];
  
}
template <class T>
Heap<T>::~Heap()
{
 maxheapsize=0;
 heapsize=0;
 delete hlist;
 
}

template <class T>
void Heap<T>::HeapUp(int i)
{
    T  temp; 
    while (i>1)
    {
    if (hlist[i]>hlist[i/2])
      {
       temp=hlist[i];
       hlist[i]=hlist[i/2];
       hlist[i/2]=temp;
       i=i/2;
      }
    else break;
    }        
}
 
template <class T>
void Heap<T>::HeapDown(int i)
{
    T  temp; 
    while (2*i+1<=heapsize)
    {
    if ((hlist[2*i]>hlist[2*i+1]) && (heapsize>=(2*i+1)))
      {
       if (hlist[2*i]>hlist[i])
         {//swap
           temp=hlist[i];
           hlist[i]=hlist[2*i];
           hlist[2*i]=temp;
           i=2*i;
         }
       else break;
       
      }
    else
    {
       if ((hlist[2*i+1]>hlist[i])&& (heapsize>=(2*i+1)))
         {
           temp=hlist[i];
           hlist[i]=hlist[2*i+1];
           hlist[2*i+1]=temp;
           i=2*i+1;
         }
       else break;
         
    }//end else
}//end while
   /* if (heapsize<(2*i+1) && heapsize==2*i)
       if (hlist[2*i]>hlist[i])
         {//swap
           temp=hlist[i];
           hlist[i]=hlist[2*i];
           hlist[2*i]=temp;
           i=2*i;
         }
    
     */     
}

template <class T>
void Heap<T>::Insert(const T&  item)
{
  if(heapsize<maxheapsize)  
  {
   hlist[heapsize]=item;
   HeapUp(heapsize);
   heapsize++;
                  
  } 
  else
  cout<<"Heap is full";
}

template <class T>
void Heap<T>::Display()
{
  for (int i=1;i<heapsize;i++)
   cout<<hlist[i];
}

template <class T>
T Heap<T>::Delete()
{T temp=0;
  
  if(heapsize>1)  
  {  
      heapsize--;
      temp=hlist[1];
      hlist[1]=hlist[heapsize];
      hlist[heapsize]=temp;
      heapsize--;
      HeapDown(1);
      return temp;             
  } 
  else
  cout<<"Heap is empty";
}

int main()
{
    Heap<int> H(6);// new Heap<int>(2);
    H.Insert(2);
    H.Insert(15);
    H.Insert(17);
    H.Insert(25);
 //   H.Display();
    H.Delete();
    H.Display();
    
system("pause");
return 0;}
