#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main ()
{
    time_t curtime = time(NULL);
    struct tm *loctime = localtime(&curtime);
    int t;
    t=loctime->tm_mday;
    cout<<"Current Date of month is "<<t<<endl;
    cout<<"Current date of week number is "<<loctime->tm_wday<<endl;
    cout<<"Current date number in the year is "<<loctime->tm_yday<<endl;
    system("pause");
    return 0;
}
