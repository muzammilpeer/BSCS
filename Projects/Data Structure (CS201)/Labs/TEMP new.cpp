#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
using namespace std;
/*getShapeName(): This function should output the shape name in small letters. The name
of the shape is same as the name of class in the above diagram.
getDetails(): This function will output the details about the shape. This is exactly the
details present about the shape in the input file minus the first character.
Output: The output file will contain the return values of the above 4 function calls
EXACTLY in the same order the objects were entered.*/
//ifstream inFile("p1in.txt");
#define PI 3.14159265358979323846
class Shape {
  public:
         
     Shape() {}
     ~Shape() {}
     virtual double Area() {
     }
     virtual double Volume() {
     }
     void read();
     virtual void GetDetail()=0;
     virtual string GetShapeName()=0;
    
     char shape_type;
  friend istream& operator >>(istream& in,Shape& par);     
  protected :
  
       static ifstream inFile;
       static ofstream outFile;
     
  private:
     static Shape* shape[];  
     static int n;
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
     return typeid(*this).name();
 }
           
  protected:
   double x;
   double y;
};//[\] Point Class.

//------Circle Class
class Circle : public Point {
  public:
   string GetShapeName() {
     return typeid(*this).name();
 }
   
   void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>radius;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<radius<<" "
      <<(PI*radius*radius)<<" "<<0<<endl;
   }
    
  private:
   double radius;
};//[\]Circle Class.

//---------------Rectangle Class-------
class Rectangle : public Point {
  public:
  string GetShapeName() {
     return typeid(*this).name();
 }
  void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>width;
      inFile>>height;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<width<<" "
      <<height<<" "<<(width*height)<<" "<<0<<endl;
  }
   
  private:
   double width;
   double height;
};//[\] Rectangle

//-------------Point 3D---------------
class Point3D : public Point {
  public:
  virtual string GetShapeName() {
    return typeid(*this).name();
  }
  virtual void GetDetail() {
          }
  protected:
   double z;
};//[\]Point 3D

//-------Rectagular Box---------------
class RectangularBox : public Point3D {
  public:
   string GetShapeName() {
   return typeid(*this).name();
   }
   void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>width;
      inFile>>height;
      inFile>>depth;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<z<<" "<<width<<" "<<height<<" "<<depth
      <<" "<<2*((width*height)+(height*depth)+(depth*width))<<" "<<(width*height*depth)<<endl;
   }
   
  private:
   double width;
   double height;
   double depth;
};//[\]Rectangular Box

//-----Sphere----------------------
class Sphere : public Point3D {
  public:
  string GetShapeName() {
   return typeid(*this).name();
   }
  void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>radius;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<z<<" "<<radius<<" "
      <<(4*PI*radius*radius)<<" "<<((float)4/3)*(PI*radius*radius*radius)<<endl;
     }
  
  private:
   double radius;
};//[\]Sphere

//------------------Explicit Defination of ABS(Shape)-----------
string Shape::GetShapeName() {
     return typeid(*this).name();
     }
void Shape::GetDetail() {
   }
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
          cout<<"Type Id "<<typeid(*shape[n]).name()<<endl;
          shape[n++]->GetDetail();
    }
   } 
int  Shape::n=0;
Shape* Shape::shape[10];       
ifstream Shape::inFile("p1in.txt");
ofstream Shape::outFile("p1out.txt",ios::trunc);
istream& operator >> (istream& in,Shape& par)
{
 in >> par.shape_type;
 cout<<par.shape_type<<endl;
 return in;
} 
int main()
{
    ifstream inFile("p1in.txt");
   //Shape* sh;
   //sh = new Point();
  // inFile>>*sh;
   //sh->read();
   system("pause");
   return 0;
}
