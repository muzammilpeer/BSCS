#include <iostream>
#include <fstream>
using  namespace std;
class  person
{
 protected:
           char  name[80];
           int  age;
 public:
        void  getdata()
        {
        cout<<"Enter Name";cin>>name;
        cout<<"Age";cin>>age;
        }
        void  showdata()
        {
              cout<<"Name:"<<name<<endl;
              cout<<"Age:"<<age<<endl;
        }
};
int main()
{
    system("color A5");
    char ch;
    person pers;
    fstream out;
    out.open("person.dat");
    
    do 
    {
     cout<<"Enter  Person Data"<<endl;
     pers.getdata();
     out.write(reinterpret_cast<char*>(&pers),sizeof(pers));
     cout<<"Another Person(y/n) ";
     cin>>ch;
    } while (ch=='y');
     out.seekg(0);
     //  ifstream  in("person.dat",ios::binary);
  system("pause");
    out.read(reinterpret_cast<char*>(&pers),sizeof(pers));
    do
    {  pers.showdata();
     out.read(reinterpret_cast<char*>(&pers),sizeof(pers));
   
     //if (out.eof()==true)
    // break;
    //  return true;
    }while(!out.eof());
    out.close();
    
    system("pause");
    return 0;
}
