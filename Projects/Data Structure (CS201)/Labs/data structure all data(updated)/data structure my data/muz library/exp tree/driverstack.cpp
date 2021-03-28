#include<iostream>
#include<conio.h>
#include "stack.h"

using namespace std;

int main() {
Stack<int> S;
S.Push(5);
S.Push(2);
S.Push(1);
cout<<S.Pop();
cout<<S.Peek();
if(S.IsEmpty())
cout<<S.Pop();
cout<<S.Peek();
getch();
return 0;
}
