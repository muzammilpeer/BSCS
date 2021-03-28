#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main ()
{
    char dateStr [9]; 
    _strdate( dateStr);//convert to string 
    int day,month,year;
    char days[2];
    char months[2];
    char years[2];
    months[0]=dateStr[-1];months[1]=dateStr[1];//months[2]=dateStr[2];
    days[0]=dateStr[3];days[1]=dateStr[4];days[2]=dateStr[5];
    years[0]=dateStr[6];years[1]=dateStr[7];years[2]=dateStr[8];
    cout<<"Month :"<<months[0]<<months[1]<<" "<<"Day :"<<days[0]<<days[1]<<" ";
    cout<<"Year :"<<years[0]<<years[1]<<endl;
    month=atoi(months);
    day=atoi(days);
    year=atoi(years);
    cout<<month<<endl;
    cout<<day<<endl;
    cout<<year<<endl;
    system("pause");
    return 0;
}
