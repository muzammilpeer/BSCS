#include <iostream>
using namespace std;

int main()
{
	int n,i,j,k;
    char space=' ';
	char character='X';
	cout<<"Enter a Number";
	cin>>n;
	for (i=1;i<n+1;i++)
	{
        for (j=n-i;j>0;j--)
        {
          cout<<" ";
        }
          for (k=0;k<2*(i-1)+1;k++)
              {
              cout<<"*";
              }
       cout<<"\n";
    } 
	system("pause");
	return 0;
}
