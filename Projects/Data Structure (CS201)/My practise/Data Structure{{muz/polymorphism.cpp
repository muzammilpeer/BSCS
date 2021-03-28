#include <iostream>
using namespace std;
class class1
{
      public:
             virtual void f()
             {
                     cout<<"ITS F() IN CLASS1\n";
             }
             void g()
             {
                  cout<<"ITS G() IN CLASS 1\n\n";
              }
};
class class2:public class1
{
      public:
             virtual void f()
             {
                     cout<<"ITS F() IN CLASS2\n";
             }
             void g()
             {
                  cout<<"ITS G() IN CLASS 2\n\n";
              }
};
class class3:public class1
{
      public:
            virtual void f()
             {
                  cout<<"ITS F() IN CLASS3 r\n";
//                  class1::f();
             }
};


int main()
{
    class1* obj1=new class1();
    class1* p=new class3();
    class2* obj2=new class2();
    class3* obj3=new class3();
   // p=&obj1;
    obj1->f();
    obj1->g();
   // p=(class1*)(&obj2);
    obj2->f();
    obj2->g();
 //   p=(class1*)(&obj3);
    obj3->f();
    obj3->g();
    p->f();
    p->g();
    
    system("pause");
    return 0;
}
