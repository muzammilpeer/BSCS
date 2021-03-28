/*
  Name: Dynamic 2D Array
  Author: Muhammad Ali Qasmi
  Date: 03/09/08 19:13
  ------------------------------------------------------------------------------
  Description: 
               dynamic2darray is template based class.
               - Header File:
                 #include "dynamic2darray.h"
               - Decleartion:
                 dynamic2darray< 'your type'> myarray( 'rows' , 'columns' );
                 e.g:
                 dynamic2darray<int> myarray(3,4);
                 dynamic2darray<char> myarray(7,9);
               
               - Functions:
                 dynamic2darray() - for default array
                 dynamic2darray(number of rows, number of columns) - for array with given dimension
                 dynamic2darray (dynamic2darrayX) - for making a copy of given array
                 initialize(value) - for initializing the array with given value.
                 set(row, column, value) - to set a value in the specified row and column
                 get(row, column) - to get a value from specified row and column
                 clear() - to clear the elements in the array
                 dynamic2darrayY = dynamic2darrayX - saves all the data in dynamic2darrayX into dynamic2darrrayY
                 dynamic2darray1(row, column) - returns a value from specified row and column
                 resize(row, column) - resizes an array without erasing the data in the array.                        
                 copyanyway(dynamic2darrayX) - copy all the data from dynamic2darray without resizing the array. 
                                               Returns a boolean check if copying is successful.
  
*/
using namespace std;
//DYNAMIC2DARRAY--------------------------------------------------------------
template <class mytype>
class dynamic2darray
{
private:
unsigned int row,
             col;
             mytype **data;

public:

//CONSTRUCTORS------------------------------------------------------------------
dynamic2darray () : row(0), col(0), data(NULL) {}
dynamic2darray (unsigned int r, unsigned int c) : row(r), col(c)
                {
                data = new mytype * [row];
                for (unsigned int i=0; i<row; i++) *(data+i) = new mytype [col];
                initialize('\0');
                }
//COPY CONSTRUCOTR--------------------------------------------------------------
dynamic2darray (const dynamic2darray &rhs)
                                {
                                row = rhs.row;
                                col = rhs.col;
                                data = new mytype * [row];
                                for (unsigned int i=0; i<row; i++) *(data+i) = new mytype [col];
                                for (unsigned int i=0; i<row; i++) memcpy(*(data+i),*(rhs.data+i),(sizeof(mytype)*(col)));
                                }
//DESTRUCTOR--------------------------------------------------------------------
~dynamic2darray ()
                {
                if (data)
                   {
                   for (unsigned int i=0; i<row; i++)
                       delete[] *(data+i);
                   delete[] data;
                   }
                }
//X VALUE INITIALIZER-----------------------------------------------------------
void initialize (mytype value)
                      {
                      for (unsigned int i=0; i<row; i++)
                          for (unsigned int j=0; j < col; j++) *(*(data+i)+j) = value;
                      }
//SET AND GET-------------------------------------------------------------------
void set (unsigned int r, unsigned int c, mytype value)
                          {
                          if (( r <= row)  && (c <= col)) *(*(data+r)+c) = value;
                          }

mytype get (unsigned int r, unsigned int c)
                          {
                          if (( r <= row)  && (c <= col)) return (*(*(data+r)+c));
                          else return (**data);
                          }
//CLEAR-------------------------------------------------------------------------
void clear ()
           {
           initlialize('\0');
           }   
//'=' , '()' OPERATORS OVERLOADED-----------------------------------------------------
dynamic2darray& operator = (const dynamic2darray& rhs)
                                            {
                                            if (this == &rhs) return *this;
                                            else
                                                {
                                                if (data)
                                                   {
                                                   for (unsigned int i=0; i< row; i++) delete[] *data;
                                                   delete[] data;
                                                   }
                                                }
                                            
                                            row = rhs.row;
                                            col = rhs.col;
                                            
                                            data = new mytype * [row];
                                            for (unsigned int i=0; i<row; i++) *(data+i) = new mytype [col];
                                            for (unsigned int i=0; i<row; i++) memcpy(*(data+i),*(rhs.data+i),(sizeof(mytype)*(col)));
                                            return *this;
                                            }

mytype& operator () (unsigned int r , unsigned int c )
                                  {
                                  if (( r <= row)  && (c <= col)) return (*(*(data+r)+c));
                                  else return (**data);
                                  }
//ADVANCE FUNCTIONS-------------------------------------------------------------
dynamic2darray& resize (unsigned int r, unsigned int c)
            {
            if ((r>row) && (c>col))  
	           {
		       if (data)
		          {
			      mytype ** temp_data;
			      temp_data = new mytype * [r]; 
                  for (unsigned int i=0;i<r;i++) *(temp_data+i)= new mytype [c];
			      for (unsigned int i=0;i<r;i++)
			          for (unsigned int j=0; j<c;j++) *(*(temp_data+i)+j) = '\0';
                  for (unsigned int i=0;i<row;i++) memcpy(*(temp_data+i),*(data+i),(sizeof(mytype)*col));
			      for (unsigned int i=0;i<row;i++) delete[] *(data+i);
			      delete[] data;
	              data = temp_data;
			      row = r;
			      col = c;
                  return *this;
		          }
               else return *this; 
               }
            else return *this;
            }
bool copyanyway (const dynamic2darray &rhs)
                                 {
                                 if ((row >= rhs.row) && (col >= rhs.col))
                                    {
                                    for (unsigned int i=0; i< rhs.row; i++)
                                        for (unsigned int j=0; j< rhs.col; j++) *(*(data+i)+j) = *(*(rhs.data+i)+j);
                                    return true;
                                    }
                                 else return false;
                                 }
};
//END OF DYNAMIC2DARRAY---------------------------------------------------------
