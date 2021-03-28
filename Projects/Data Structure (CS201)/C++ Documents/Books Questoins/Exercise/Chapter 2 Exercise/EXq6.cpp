#include <iostream>
using namespace std;

int main()
{
	float dollor,pound,franc,deutshemark,yen;
	cout<<"Enter Amount in Dollors\n";
	cin>>dollor;
	pound *=1.487;
    franc *=0.172;
    deutshemark *= 0.584;
    yen *= 0.00955;
    cout<<"The monetary units are\n"
    <<"Pound ="<<pound<<endl
    <<"Franch ="<<franc<<endl
    <<"Deutshemark ="<<deutshemark<<endl
    <<"Yen ="<<yen<<endl;
	system("pause");
	return 0;
}
