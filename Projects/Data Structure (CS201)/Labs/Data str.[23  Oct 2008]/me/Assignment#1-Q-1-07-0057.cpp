#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
/*getShapeName(): This function should output the shape name in small letters. The name
of the shape is same as the name of class in the above diagram.
getDetails(): This function will output the details about the shape. This is exactly the
details present about the shape in the input file minus the first character.
Output: The output file will contain the return values of the above 4 function calls
EXACTLY in the same order the objects were entered.*/
ifstream inf("p1in.txt");
class Shape {
  public:
   
   virtual double Area() {
   }
   virtual double Volume() {
   }
   ifstream inFile;
   virtual void GetDetail()=0;//{cout<<"Detail"<<endl;}
   virtual string GetShapeName()=0;
   void read();
  protected :
    char shape_type;
  private:
    static Shape* shape[];  
    static int n;
 };// [\] Shape Class.
//---Point  Class---//
class Point : public Shape {
  public:
         
   virtual void  GetDetail() {
     return Shape::GetDetail();
     } 
   virtual string GetShapeName() {
   Shape::GetShapeName();
   }
           
  protected:
   double x;
   double y;
};//[\] Point Class.
//------Circle Class
class Circle : public Point {
  public:
   virtual string GetShapeName() {
    return "Circle";
   }
   
   virtual void GetDetail() {
 //    inFile.open("p1in.txt");
      inf.get(&shape_type,sizeof(char));
      inf.get(x,sizeof(double));
      inf.read(y,sizeof(double));
      inf.read(radius,sizeof(double));
     // x=1;y=3;radius=5;
      cout<<x<<y<<radius<<endl;
   }
    
  private:
   double radius;
};
class Rectangle : public Point {
  public:
  virtual void GetDetail() {
  //   inFile.open("p1in.txt");
      inf>>shape_type;
      inf>>x;
      inf>>y;
      inf>>width;
      inf>>height;
      cout<<x<<y<<width<<height<<endl;
  }
 virtual string GetShapeName() {
   Point::GetShapeName();
   cout<<"Rectangle is Called"<<endl;
   return "One Hello";
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
string Shape::GetShapeName() {
return "Shape ::";
}
void Shape::GetDetail() {
       
}
int  Shape::n=0;
Shape* Shape::shape[10];       
void Shape::read() {
    inFile.open("p1in.txt");
      while(!inFile.eof())
     // for (int i=0;i<1;i++)
      {
       inFile>>shape_type;
       cout<<"From Base Class"<<shape_type;
         switch (shape_type)
          {
            case 'C':{shape[n] = new Circle;break;}
            case 'R':{shape[n]= new Rectangle;break;}
            default:cout<<"Error";
          }
          shape[n]->GetDetail();
     }
} 
 
int main()
{
   Shape* sh;
   sh = new Circle();
   //sh->GetShapeName();
  sh->read();
  // cout<<sh->GetDetail();
 //  Shape::GetShapeName();
   system("pause");
   return 0;
}
