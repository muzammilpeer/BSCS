#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
/*getShapeName(): This function should output the shape name in small letters. The name
of the shape is same as the name of class in the above diagram.
getDetails(): This function will output the details about the shape. This is exactly the
details present about the shape in the input file minus the first character.
Output: The output file will contain the return values of the above 4 function calls
EXACTLY in the same order the objects were entered.*/
//ifstream inFile("p1in.txt");
#define PI 3.14159265358979323846
#define m 5
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
     int strlength(string& pass,int i=0)
     {
         if(pass[i]=='\0') {
             return -1;
           } else { pass[i++];
                   return strlength(pass,i)+1;
                  }
     }
     
     char shape_type;
  protected :
  
       static ifstream inFile;
       static ofstream outFile;
       static string shape_name;
    
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
        shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
   }
           
  protected:
   double x;
   double y;
};//[\] Point Class.

//------Circle Class
class Circle : public Point {
  public:
   string GetShapeName() {
        shape_name=typeid(*this).name();
      return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
   }
   virtual double Area() {
     return (PI*radius*radius);
     }
     virtual double Volume() {
     return (PI*radius*radius)*0;
     }
     
   
   void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>radius;
      cout<<setw(m)<<x<<setw(m)<<y<<setw(m)<<radius;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<radius<<" "
      <<Area()<<" "<<Volume()<<endl;
   }
    
  private:
   double radius;
};//[\]Circle Class.

//---------------Rectangle Class-------
class Rectangle : public Point {
  public:
  string GetShapeName() {
      shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10+1),strlength(shape_name));
   }
 virtual double Area() {
     return (width*height);
     }
     virtual double Volume() {
     return (width*height)*0;
     }
     
  void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>width;
      inFile>>height;
      cout<<setw(m)<<x<<setw(m)<<setw(m)<<y<<setw(m)<<width<<setw(m)<<height;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<width<<" "
      <<height<<" "<<Area()<<" "<<Volume()<<endl;
  }
   
  private:
   double width;
   double height;
};//[\] Rectangle

//-------------Point 3D---------------
class Point3D : public Point {
  public:
  virtual string GetShapeName() {
       shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
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
        shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
   }
   virtual double Area() {
     return 2*((width*height)+(height*depth)+(depth*width));
     }
     virtual double Volume() {
     return (width*height*depth);
     }
     
   void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>width;
      inFile>>height;
      inFile>>depth;
      cout<<setw(m)<<x<<setw(m)<<y<<setw(m)<<z<<setw(m)<<width<<setw(m)<<height<<setw(m)<<depth;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<z<<" "<<width<<" "<<height<<" "<<depth
      <<" "<<Area()<<" "<<Volume()<<endl;
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
        shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
   }
   virtual double Area() {
     return (4*PI*radius*radius);
     }
     virtual double Volume() {
     return ((double)4/3)*(PI*radius*radius*radius);
     }
     
  void GetDetail() {
      inFile>>x;
      inFile>>y;
      inFile>>z;
      inFile>>radius;
      
      cout<<setw(m)<<x<<setw(m)<<y<<setw(m)<<z<<setw(m)<<radius;
      outFile<<GetShapeName()<<" "<<x<<" "<<y<<" "<<z<<" "<<radius<<" "
      <<Area()<<" "<<Volume()<<endl;
     }
  
  private:
   double radius;
};//[\]Sphere

//------------------Explicit Defination of ABS(Shape)-----------
string Shape::GetShapeName() {
          shape_name=typeid(*this).name();
   return shape_name.substr((strlength(shape_name)/10)+1,strlength(shape_name));
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
          cout<<setw(20)<< shape[n]->GetShapeName();
          shape[n]->GetDetail();
          cout<<" "<<shape[n]->Area()<<" "<<shape[n]->Volume()<<endl;
          n++;
          }
   } 
int  Shape::n=0;
string Shape::shape_name="";
Shape* Shape::shape[100];       
ifstream Shape::inFile("p1in1.txt");
ofstream Shape::outFile("p1out1.txt",ios::trunc);

int main()
{
   Shape* sh;
   sh = new Point();
   sh->read();
   system("pause");
   return 0;
}
