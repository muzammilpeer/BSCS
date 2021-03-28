#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int lim=5;
    vector<char*> v(lim,"Hello"); 
    vector<int>::iterator it;
    cout<<"Vector Capacity is "<<v.capacity()<<endl<<endl;
    v.push_back("End");
    //v.erase(v.begin()+1);
    for(int i=0;i<=lim;i++)
    cout<<"# "<<i<<"Element is "<<v.at(i)<<endl;
    system("pause");
    return 0;
}
