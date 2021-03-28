#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
class Shape {
  public:
   
   virtual double Area() {
   }
   virtual double Volume() {
   }
   
   virtual string GetDetail()=0;//{cout<<"Detail"<<endl;}
   virtual void GetShapeName()=0;
   static Shape* Shape::shape[5];
   static int n;
   //ifstream inFile("p1in.txt");
   
   virtual void ShowDetail() {
   ifstream inFile("p1in.txt");
   char shape_type;
   inFile>>shape_type;
   cout<<"Show Detail()"<<endl<<" Shape Type "<<shape_type<<endl;
   }
  
  private:
};
int Shape::n=0;
Shape* Shape::shape[5];
class Point : public Shape {
  public:
         
   virtual string GetDetail() {
     Shape::GetDetail();
     cout<<"x";
     cin>>x;
     cout<<"y";
     cin>>y;
     cout<<"X="<<x<<" Y="<<y<<endl;
     return "Double Hello";
   } 
   virtual void ShowDetail() {
   Shape::ShowDetail();
   ifstream inFile("p1in.txt");
   char temp;
   inFile>>temp;
   inFile>>x;inFile>>y;
   cout<<"x="<<x<<" y="<<y<<endl;
   }
  
   virtual void GetShapeName() {
   Shape::GetShapeName();
 //  return "One Hello";
   }
            
  private:
   double x;
   double y;
   char shape_type;  
};
class Circle : public Point {
  public:
   virtual string GetDetail() {
     Point::GetDetail();
     cout<<"Radius";
     cin>>radius;
     return "Hello";
  }
   virtual void GetShapeName() {
   Point::GetShapeName();
   cout<<"Circle is Called"<<endl;
 //  return "One Hello";
   }
   virtual void ShowDetail() {
   Point::ShowDetail();
   ifstream inFile("p1in.txt");
   char ch;double x,y;
   inFile>>ch>>x>>y>>radius;
   cout<<"Radius"<<radius<<endl;
   }
  
  private:
   double radius;
};
class Rectangle : public Point {
  public:
  virtual string GetDetail() {
     Point::GetDetail();
     cout<<"width";
     cin>>width;
     cout<<"height";
     cin>>height;
     return "Hello";
  }
   virtual void GetShapeName() {
   Point::GetShapeName();
   cout<<"Rectangle is Called"<<endl;
 //  return "One Hello";
   }
   
  private:
   double width;
   double height;
};
class Point3D : public Point {
  public:
  
  private:
   double z;
};
class RectangularBox : public Point3D {
  public:
  
  private:
   double width;
   double heigth;
   double depth;
};
class Sphere : public Point3D {
  public:
  
  private:
   double radius;
};
void Shape::GetShapeName() {
     char shape_type;
     ifstream inFile("p1in.txt");
       //cout<<"Insert Shape Type";
       inFile>>shape_type;
       switch (shape_type) {
         case 'C' : { cout<<"Circle"<<endl; shape[n] = new Circle;break;}
         case 'R' : { cout<<"Rectangle"<<endl;shape[n] = new Rectangle;break;}
         default : cout<<"Wrong Selection"<<endl;
       }
       shape[n++]->GetDetail(); 
       cout<<shape[n]; 
    //   return "One Hello";
}
string Shape::GetDetail() {
      cout<<"Give The Detail of Shape "<<endl;
      return "One Hello";
}         

int main()
{
    Shape* sh;
   sh = new Circle();
 //  sh->GetShapeName();
   sh->ShowDetail();
   //sh->GetDetail();
   system("pause");
   return 0;
}
