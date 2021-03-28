#include<iostream>
#include<fstream>

using namespace std;

main() {
       ifstream in("p2.txt",ios::in);      
       
         int n,k;
         in>>n>>k;
         int arr[n][k];
         for (int i=0;i<n;i++) {
         for (int j=0;j<k;j++) {
          in>>arr[i][j];
          }
         }
         int count=0;
         for (int i=0;i<n;i++) {
         for (int j=0;j<k;j++) {
            if(arr[i][j]==0 || ()  ){
                      } 
         }
         }
       
       cout<<"n="<<n<<"k="<<k<<endl;    
       
       return 0;
}
