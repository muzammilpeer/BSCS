#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int inpno,i;
    int j=10;
    cout<<"Enter a number:";
    cin>>inpno;
    for (i=1;i<201;i++)
    {
        cout<<setw(5)<<i*inpno<<setw(5);
        if (i == j)
        {
        cout<<'\n';
        j=j+10;
        } 
   }
     
    system("pause");
	return 0;
}
