#include <iostream>
#include <string>
using namespace std;
struct Node
{
       char* items;
       Node* left;
       Node* right;
       int index;
       Node():left(0),right(0),items(0)
       {}
};
int main()
{
    char** Char = new char*[255];
    Node** node = new Node*[255];
    for (int i = 0; i <= 255; i++)
      {
        Char[i] = new char[255];
        Char[i] = "word";
     }
    for (int i = 0; i <= 255; i++)
      {
        cout<<"Index "<<i<<" " <<Char[i]<<endl;
      }
    system("pause");
    return 0;
}
