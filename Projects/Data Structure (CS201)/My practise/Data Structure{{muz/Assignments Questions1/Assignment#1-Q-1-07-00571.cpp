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
ifstream inFile("p1in.txt");
class Shape {
  public:
     Shape() {
    // inFile.open("p1in.txt");
     }
   virtual double Area() {
   }
   virtual double Volume() {
   }
   //ifstream inFile;
   virtual void GetDetail()=0;
   virtual string GetShapeName()=0;
   void read();
   
  protected :
    char shape_type;
 
  private:
    static Shape* shape[];  
    static int n;
    friend iostream& operator >> (iostream& in,Shape T);
 };// [\] Shape Class.
 
//---Point  Class---//
class Point : public Shape {
  public:
   Point() {
         }
   virtual void  GetDetail() {
     return Shape::GetDetail();
     } 
   virtual string GetShapeName() {
   return Shape::GetShapeName()+"Point::";
   }
           
  protected:
   double x;
   double y;
};//[\] Point Class.

//------Circle Class
class Circle : public Point {
  public:
   virtual string GetShapeName() {
    return Point::GetShapeName()+"Circle";
   }
   
   virtual void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>radius;
      cout<<GetShapeName()<<x<<y<<radius<<endl;
   }
    
  private:
   double radius;
};//[\]Circle Class.

//---------------Rectangle Class-------
class Rectangle : public Point {
  public:
  virtual string GetShapeName() {
   return Point::GetShapeName()+"Rectangle";
   }
  virtual void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>width;
      inFile>>height;
      cout<<GetShapeName()<<setw(5)<<x<<setw(5)<<y<<setw(5)<<width<<setw(5)
      <<height<<setw(5)<<(width*height)<<setw(5)<<0<<endl;
  }
   
  private:
   double width;
   double height;
};//[\] Rectangle

//-------------Point 3D---------------
class Point3D : public Point {
  public:
  virtual string GetShapeName() {
    return Point::GetShapeName()+"Point3D";
  virtual void GetDetail() {
          }
  protected:
   double z;
};//[\]Point 3D

//-------Rectagular Box---------------
class RectangularBox : public Point3D {
  public:
    virtual string GetShapeName() {
    return Point3D::GetShapeName()+"Rectangular Box";
   }
   virtual void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>width;
      inFile>>heigth;
      inFile>>depth;
      cout<</*GetShapeName()*/<<x<<y<<z<<width<<heigth<<depth<<endl;
   }
   
  private:
   double width;
   double heigth;
   double depth;
};//[\]Rectangular Box

//-----Sphere----------------------
class Sphere : public Point3D {
  public:
  virtual string GetShapeName() {
    return Point3D::GetShapeName()+"Sphere";
   }
   virtual void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>radius;
      cout<<GetShapeName()<<x<<y<<z<<radius<<endl;
   }
  
  private:
   double radius;
};//[\]Sphere

//------------------Explicit Defination of ABS(Shape)-----------
string Shape::GetShapeName() {
return "Shape ::";
}
void Shape::GetDetail() {
}
int  Shape::n=0;
Shape* Shape::shape[10];       
void Shape::read() {
      while(!inFile.eof())
      {
       inFile>>shape_type;
         switch (shape_type)
          {
            case 'C':{shape[n] = new Circle();break;}
            case 'R':{shape[n] = new Rectangle();break;}
            case 'S':{shape[n] = new Sphere();break;}
            case 'B':{shape[n] = new RectangularBox();break;}
          }
          shape[n++]->GetDetail();
     }
} 
 
int main()
{
   Shape* sh;
   sh = new Point();
   sh->read();
   system("pause");
   return 0;
}
