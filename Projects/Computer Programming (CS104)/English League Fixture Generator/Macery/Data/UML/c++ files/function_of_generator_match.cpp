#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

class team           //team name and stadium name loading in strings. 
{
    /*ifstream t_n_i("E:/Project/files/team_line.txt");
    char buffer[20];*/
    char* t_name[20];
    char* s_name[20];
    public:
    void load_data()
    {
         ifstream tname("E:/Project/files/team_line.txt");
         char buffer[20];
         int i=0;
         while(!tname.eof())
         {
         tname.getline(buffer,20,'\n');
         t_name[i]=new(char[20]);t_name[i]=buffer;
         i++;       
         }
    }
    t_name& select_team()
    {
            
            }
      
      
};
class new_match
{
      
};
      

int main()
{
    team t1;
    t1.load_data();
    system("pause");
    return 0;
}
