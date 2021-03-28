#include <iostream>
using namespace std;

class dsarray 
{
      private :
            unsigned int  size;
             int* data;
       public:
       
       dsarray():data(NULL),size(0){}
       
       dsarray(int s):data(new int[s]),size(s)
       {
       memset(this->data,0,this->size*sizeof(int));
       }
       
       dsarray(const dsarray& rhs)
       {
        delete []this->data;
        this->size=rhs.size;
        this->data=new int [this->size];
        //memset(this->data,0,this->size*sizeof(int));
        memcpy(this->data,rhs.data,size*sizeof(int)+1);
         cout<<"Alaga hai\n";
           for (int i = 0;i  < this->size;i++)
            {//this->data[i]=i;
                cout<<"Element # "<<i<<" "<<this->data[i]<<endl;
            }
        
        }
       dsarray& operator = (const dsarray& rhs)
       {
                if  (this == &rhs)
                {
                 return *this;  
                }
                else  
                {
                      delete [] this->data;
                      this->size=rhs.size;
                      this->data=new int[this->size];
                      //memset(this->data,0,this->size*sizeof(int));
                      memcpy(this->data,rhs.data,this->size*sizeof(int));
                      return *this;
                }
       }
       
       int&  operator [](unsigned int s )
       {
                 return this->data[s];
       }
       void resize(int s)
       {/*d1.resize(5);if == then no return type [][]][] thissize is < s grow up and cpy. else == return *this else new allocation and cpy && empty potion should be init.*/
        //this->size=s;
        int* temp;
        temp=new int[s];
        unsigned int limit;
        memset(temp,0,s*sizeof(int));
        if (this->size > s)
        {
         memset(temp,0,s*sizeof(int));
         limit=s;
        // memcpy(temp,this->data,s*sizeof(int));
        }
        else 
        {
         limit=this->size;
         //memcpy(temp,this->data,this->size*sizeof(int));
         }
         memcpy(temp,this->data,limit*sizeof(int));
         this->size=s;
         delete [] this->data;
         this->data=temp;
         
       }
       void getdata()
       {
            for (int i = 0;i  < this->size;i++)
            {
                cout<<"Element # "<<i;cin>>this->data[i];
            }
        }
       void showdata()
       {
            for (int i = 0;i  < this->size;i++)
            {
                cout<<"Element # "<<i<<" "<<this->data[i]<<endl;
            }
        }
              
};
int main()
{
    dsarray d1(5),d3(3);
    d1.getdata();
    cout<<"Get For D3\n";
    d3.getdata();
    cout<<"D1\n";
    d1.showdata();
    cout<<"D2\n";
    d3.showdata();
   // d3=d1;
    d3.showdata();
    d3.resize(6);
    cout<<"Last are \n";
    d3.showdata();
   //* dsarray */d2(d3);
   //cout<<"D3\n";
  
   //d2.showdata();
   
//    cout<<"YEH "<<d3[1];
    system("pause");
    return 0;
}
