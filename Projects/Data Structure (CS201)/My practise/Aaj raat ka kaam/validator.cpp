#include<iostream>
#include<string>

using namespace std;
/*setofoperator:
*/
bool validator(char* input)
{
     int len=strlen(input);
//   cout<<len;
     bool validate=true;
     for(int i=0;i<len;i++)
     {
          
        /*if((int(input[i])!=40) && (int(input[i])!=41) /*&& (int(input[i])!=42)
                             && (int(input[i])!=46) && (int(input[i])!=124) && (int(input[i])!=63)
                                                 && (int(input[i])!=91) && (int(input[i])!=93))
        //      (-40 , )-41, .-46, *-42, |-124, ?-63, [-91, ]-93        
        {                validate=false;
                break;
}
     //   else
       //         validate==false;
     }
     */
     if (input[i]!='(' || input[i]==')') {
         return false;
            }
            }
    return true;
}
     
int main()
{
char* input="()))";
//cout<<int('');
cout<<validator("())");
system("pause");
return 0;    
}
