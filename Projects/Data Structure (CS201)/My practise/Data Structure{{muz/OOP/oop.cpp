#include <iostream>
using namespace std;
template<class tem>
class class1
{
      public :
             class1()
             {}
                    double operator () (tem x)
                    {
                           return 2*x;
                    }
} ;      
template<class F>
double sum(F f,int n)
{double result=0;
       for (int i=n;i<5;i++)
       {
          result += f(i);
       }
       return result;
}
int main ()
{
    //class1 f1;
    cout<<"Sum is "<<sum(class1<int>(),1)<<endl;
    system("pause");
    return 0;
}
