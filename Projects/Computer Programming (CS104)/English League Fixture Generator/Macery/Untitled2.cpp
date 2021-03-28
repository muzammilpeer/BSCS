#include <iostream>
#include <fstream.h>
#include <conio.h>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;



class specified_system
{
 private:
    
  string question;
  string sys_name;
  string sys_type;
  char drive[2];
  char path[40];
  //char filename[];
  
   
  
 public:
        
  void title()
   {
    system("cls");
    cout<<"____________________________________________________________________\n\n";
    cout<<setw(130) <<"[ GENERIC RECRUITMENT SYSTEM ]\n";
    cout<<"____________________________________________________________________\n\n\n\n";
    cout<<setw(122) <<" - SETUP WIZARD -\n\n\n\n";
   }          
        
        
   void concat_drive_filename(char filename[])
    {
     
     path[0]=drive[0];   
     path[1]=drive[1];   
     path[2]='/';
     
     int i=0; 
     int path_index=3;
            
     do
      { 
       path[path_index++]=filename[i++];   
      }
     while( i<=strlen(filename)+1 );   // (+1) for including NULL character
     
    } 
     
  
  void CQS()
   {
     
  
       
  }//function 


        
   
  void specify_system()
   {
    title();
    
    cout<<"Enter Drive For Setup Files  [Drive:]\n>> "; 
    cin>>drive;
    concat_drive_filename("sys_info.txt");
  
    
    
    system("cls"); title(); 
    cin.get();
    cout<<"Enter Your System Name\n";
    getline(cin,sys_name);
    
    system("cls"); title();
    cout<<"Enter System Type\n\n";
    cout<<"CQS (common questioning system) Common questions for all candidates\n"; 
    cout<<"IQS (individual questioning system) Individual questions for each candidate\n\n";
    cin>>sys_type;
    
    
    
    ofstream sysinfo(path);
    sysinfo<<sys_name <<"\n" <<sys_type;
    sysinfo.close();
    
    if (sys_type=="CQS")
     { CQS(); }                    
    else
     { IQS(); }
     
     
     
 } //end of function          
 
 
 
          
  
  void interface()
   {
     system("cls");
     
     cout<<"\n\n\n\n\n\n\n";
     cout<<setw(63) <<"[ GENERIC   R E C R U I T M E N T   SYSTEM ]\n\n\n\n\n";
     cout<<setw(50) <<"[L] Load System into Memmory\n";
     cout<<setw(43) <<"[S] Setup New System\n\n";
     cout<<setw(35) <<" >>";
     getch();
     
     specify_system();
     //system("cls");
   }
   
       
 





}; //end of class

      



int main()
{
    
    specified_system fast_admission;
    
    fast_admission.interface();
    
      
    cout<<"\n\n\nPress any key to exit";
    
    
    getch();
    return 0;    
}
    

