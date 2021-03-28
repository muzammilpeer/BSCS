#include <iostream>
using namespace std;
int main()
{
    int i=5,j,*p,*q;
    //p=(int*)i;
    i=*&p;
    cout<<*p<<endl;
    system("pause");
    return 0;
}
