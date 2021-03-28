#include <iostream>
using namespace std;

int main()
{
	float celsius;
	cout<<"Enter the Temperature in degree Celsius\n";
	cin>>celsius;
	float farhen=((celsius)*9/5)+32;
	cout<<"The Temperature in Fahrenheit is >>"<<farhen<<endl;
	system("pause");
	return 0;
}
