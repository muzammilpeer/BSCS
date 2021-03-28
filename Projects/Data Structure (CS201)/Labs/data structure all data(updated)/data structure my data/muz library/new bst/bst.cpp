#include <iostream>
#include "BST.h"
using namespace std;
int main() {
srand(time(NULL));
BSTree<int> bt;
int t[10];
for (int i=0;i<10;i++){
t[i]=rand()%10;
bt.Insert(t[i]); }
for (int i=0;i<10;i++){
cout<<t[i]<<",";
}
cout<<endl<<endl;
bt.DisplayInOrder();
cout<<endl;
bt.DisplayPreOrder();
cout<<endl;
bt.DisplayPostOrder();
cout<<endl;system("pause");   
return 0;
}
