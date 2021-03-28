#include<iostream>
#include<fstream>

using namespace std;
int x,y;
int getmax(){
    int ret;
    ret=x>y?x:y;
    return ret;
}


main() {
       srand(time(NULL));
       ifstream in("p1.txt",ios::in);      
       
         int n,k;
         in>>n>>k;
       bool chk=false;         
       
         
       int a[n][n];
       cout<<"n="<<n<<"k="<<k<<endl;       
       int t;

        for (int i=0;i<n;i++)
       {
           for (int j=0;j<n;j++)   { 
           t=rand()%2;
           a[i][j]=t;
//           cout<<a[i][j];         
       }   
       
//       cout<<endl;
       }
//       cout<<"new\n";
       int b;
       int c1=0,c0=0;

       int h,h1;
       for (int i=0;i<n;i++) {
       for (int j=0;j<n; j++ ) 
       {                      
        if (i==0 ) 
        {
         if (a[i][j]==1) h++;
         if (a[i][j]==0) h1++;
        }
        }
       }


//       while (chk==true){
          srand(time(NULL));
              
       for (int i=0;i<n;i++) {
       for (int j=0;j<n; j++ ) 
              {                      
              if (a[i][j]==1 && c1<=k){ c1++; } else if (c1>k){a[i][j]=rand()%2;}
              if (a[i][j]==0 && c0<=h1){ c0++; } else if (c0>h1){a[i][j]=rand()%2;}
        }

//        cout<<c1<<c0<<endl;
        c1=c0=0;
        }
                for (int i=0;i<n;i++)
       {
           for (int j=0;j<n;j++)   { 
               if (i==0 && j==0) b=a[i][j];  
                else
                if (i==j ) { if (a[i][j]!=b) a[i][j]=b;}
                if ((n-1)-j==i ) { if (a[i][j]!=b) a[i][j]=b;}
//                 cout<<a[i][j];      
                                
                 
       }
  //                   cout<<endl;
       }   
        
        

  
        for (int i=0;i<n;i++) {
       for (int j=0;j<n; j++ ) 
       {                      
              if (a[i][j]==1 && c1<=k){ c1++; } 
              if (a[i][j]==0 && c0<=h1){ c0++; }                              
              
        }
        if (c1==k && c0==h1) chk=true; else {chk=false;break;}

        c1=0;c0=0;
        }
        cout<<"done"<<endl;
                 for (int i=0;i<n;i++) {
       for (int j=0;j<n; j++ ) 
              {                      cout<<a[i][j];
         }
        cout<<endl;
        c1=c0=0;
        }





        


        
        


       

//               cout<<c1<<c0<<endl;
/*       for (int i=0;i<n;i++)
       {
       for (int j=0;j<n;j++)   { 
           }
           cout<<a[i][j];         
       }   */
       
       
       in.close();
       
       system("pause");
       return 0;
}
