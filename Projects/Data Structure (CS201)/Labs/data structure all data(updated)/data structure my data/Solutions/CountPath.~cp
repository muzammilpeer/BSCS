#include<iostream>

using namespace std;

unsigned int count=0;
unsigned int result=0;


unsigned int countpath(int r, int c, int n)
{
 
 if (c==n) result= 1;
 else 
 if (r==n) result=result+1 ;
 else 
 result=countpath(r+1,c,n)+ countpath(r,c+1,n);          
  return result;
        
         
         
         
}

int main()
{
    int r=0,c=0,n=4;
    cout<<result <<endl;
    cout<< countpath(0,0,1) <<endl;
    cout<<countpath(0,0,2) << endl;
    cout<<countpath(0,0,3) <<endl;
    cout<<countpath(0,0,4) <<endl;
    
    
    
    
    
system("pause");
return 0;    
}
