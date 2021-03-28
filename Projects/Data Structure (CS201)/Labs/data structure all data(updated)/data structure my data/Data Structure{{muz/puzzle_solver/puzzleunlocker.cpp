#include<iostream>
#include<string>
#include<list>
#include<fstream>
#include"except.cpp"
using namespace std;

class ij
{
      private :
              int x;
              int y;
              
      public :
             ij() : x(0), y(0)
             { }
             
             ij(int valx, int valy) : x(valx), y(valy)
             { }
             
             void setX(int val)
             {    this->x = val;   }
             
             void setY(int val)
             {    this->y = val;   }
             
             int getX()
             {   return this->x; }
             
             int getY()
             {   return this->y; }
             
             bool operator == (ij Obj)
             {
                  return (Obj.getX() == this->x && Obj.getY() == this->y) ? true : false;
             }
             
             bool operator < (ij Obj)
             {
                  if (this->getX() < Obj.getX())
                     return true;
                  else if (this->getX() == Obj.getX() && this->getY() < Obj.getY())
                     return true;
                  else
                     return false;
             }
};

class PuzzleSolver : public Exception
{
      private:
              char **puzarr;
              char **solvedarr;
              int rows;
              int cols;
              int num_words;
              list<ij> *initialsarr;
              list<string> *find_words;
              ifstream infile;
              ofstream outfile;
              
              int findWord(string word, int curpos, int curdir, int max_x, int max_y, int cur_r, int cur_c)
              {
                  if (curpos < word.length())
                  {
                  if (cur_r >= 0 && cur_r < max_x && cur_c >= 0 && cur_c < max_y)
                  {
                     if (word.at(curpos) == this->puzarr[cur_r][cur_c])
                     {
                        if (curdir == 0)
                        {
                           int result = 0;
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           result += findWord(word, curpos + 1, 1, max_x, max_y, cur_r - 1, cur_c);
                           result += findWord(word, curpos + 1, 2, max_x, max_y, cur_r - 1, cur_c + 1);
                           result += findWord(word, curpos + 1, 3, max_x, max_y, cur_r, cur_c + 1);
                           result += findWord(word, curpos + 1, 4, max_x, max_y, cur_r + 1, cur_c + 1);
                           result += findWord(word, curpos + 1, 5, max_x, max_y, cur_r + 1, cur_c);
                           result += findWord(word, curpos + 1, 6, max_x, max_y, cur_r + 1, cur_c - 1);
                           result += findWord(word, curpos + 1, 7, max_x, max_y, cur_r, cur_c - 1);
                           result += findWord(word, curpos + 1, 8, max_x, max_y, cur_r - 1, cur_c - 1);
                           
                           if (!(result == 7))
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 1)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 1, max_x, max_y, cur_r - 1, cur_c) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 2)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 2, max_x, max_y, cur_r - 1, cur_c + 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 3)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 3, max_x, max_y, cur_r, cur_c + 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 4)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 4, max_x, max_y, cur_r + 1, cur_c + 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 5)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 5, max_x, max_y, cur_r + 1, cur_c) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 6)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 6, max_x, max_y, cur_r + 1, cur_c - 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 7)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 7, max_x, max_y, cur_r, cur_c - 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                        else if (curdir == 8)
                        {
                           char prev = this->solvedarr[cur_r][cur_c];
                           this->solvedarr[cur_r][cur_c] = '*';
                           int result = findWord(word, curpos + 1, 8, max_x, max_y, cur_r - 1, cur_c - 1) + 0;
                           if (result != 0)
                              this->solvedarr[cur_r][cur_c] = prev;
                           return result;
                        }
                     }
                     else
                         return 1;
                  }
                  else
                      return 1;
                  }
                  else
                      return 0;
              }
              
              bool compare (ij first, ij second)
              {
                  if (first.getX() < second.getX())
                     return true;
                  else if (first.getX() == second.getX() && first.getY() < second.getY())
                     return true;
                  else
                     return false;
              }            
              
      public :
             PuzzleSolver(char* filename) : find_words(0), puzarr(0), rows(0), cols(0), num_words(0)
             {
                  this->infile.open(filename);
                  if (!infile.is_open())
                     throw new Exception(1, "Cannot Read The File");
                  else
                  {
                      this->infile >> this->rows;
                      this->infile >> this->cols;
                      this->puzarr = new char * [this->rows];
                      this->solvedarr = new char * [this->rows];
                      for (int i = 0 ; i < this->rows ; i++)
                      {
                          *(this->puzarr + i) = new char [this->cols];
                          *(this->solvedarr + i) = new char [this->cols];
                          for (int j = 0 ; j < this->cols ; j++)
                          {
                              this->infile >> this->puzarr[i][j];
                              this->solvedarr[i][j] = 'N';
                              this->infile.get();
                          }
                      }
                      this->infile.get();
                      this->find_words = new list<string>();
                      this->infile >> this->num_words;
                      this->initialsarr = new list<ij>;
                      string word;
                      for (int i = 0 ; i < this->num_words ; i++)
                      {
                          this->infile >> word;
                          this->find_words->push_front(word);
                      }   
                      this->infile.close();
                  }
             }
             
             void printPuzzleMatrix(bool solved = false)
             {
                  if (this->puzarr && !solved)
                  {
                       for (int i = 0; i < this->rows ; i++)
                       {
                           for (int j = 0 ; j < this->cols ; j++)
                               cout << this->puzarr[i][j] << " ";
                           cout << endl;
                       }
                  }
                  else if (solved && this->solvedarr)
                  {
                       for (int i = 0; i < this->rows ; i++)
                       {
                           for (int j = 0 ; j < this->cols ; j++)
                               cout << this->solvedarr[i][j] << " ";
                           cout << endl;
                       }
                  }
                  else
                      throw new Exception(2, "Sorry You Haven't Loaded Any Puzzle Yet");
             }
             
             void printPuzzleWords()
             {
                  if (this->find_words)
                  {
                       list<string>::iterator i;
                       for(i = this->find_words->begin(); i != this->find_words->end(); ++i)
                           cout << *i << endl;
                  }
                  else
                      throw new Exception(3, "There Are No Words To Show You");
             }
             
             void printPuzzleInitials()
             {
                  if (this->initialsarr)
                  {
                       list<ij>::iterator m;
                       for(m = this->initialsarr->begin(); m != this->initialsarr->end(); ++m)
                           cout << (*m).getX() << " , " << (*m).getY() << endl;
                  }
                  else
                      throw new Exception(5, "There Are No Words To Show You");
             }
             
             void solvePuzzle()
             {
                  string word;
                  ij temp;
                  list<string>::iterator i;
                  for(i = this->find_words->begin(); i != this->find_words->end(); ++i)
                  {
                    word = *i;
                    for (int j = 0 ; j < this->rows ; j++)
                      for (int k = 0 ; k < this->cols ; k++)
                        if (this->findWord(word, 0, 0, this->rows, this->cols, j, k) == 7)
                        {
                           this->initialsarr->push_front(ij(j,k));
                           break;
                        }
                  }
                  this->initialsarr->sort();
             }
             
             void makeHTML(char *filename)
             {
                  outfile.open(filename);
                  if (!outfile.is_open())
                     throw new Exception(4, "Cannot Create Or Read The File");
                  else
                  {
                      ij temp;
                      outfile << "<html>" << endl << "<title>Solved Puzzle</title>" << endl;
                      outfile << "<body text=\"#000033\">" << endl;
                      outfile << "<div align=\"center\">" << endl << "<table border=\"1\">";
                      outfile << endl;
                      
                      for (int i = 0 ; i < this->rows ; i++)
                      {
                          temp.setX(i);
                          outfile << "<tr>" << endl;
                          for (int j = 0 ; j < this->cols ; j++)
                          {
                              temp.setY(j);
                              if (this->solvedarr[i][j] == '*' && temp == this->initialsarr->front())
                              {
                                 outfile << "<td bgcolor=\"#ffb90f\" width=\"" << (100/this->cols) << "%\">" << this->puzarr[i][j] << "</td>" << endl;
                                 this->initialsarr->pop_front();
                              }
                              else if (this->solvedarr[i][j] == '*')
                                 outfile << "<td bgcolor=\"#ffdab9\" width=\"" << (100/this->cols) << "%\">" << this->puzarr[i][j] << "</td>" << endl;
                              else
                                 outfile << "<td  width=\"" << (100/this->cols) << "%\">" << this->puzarr[i][j] << "</td>" << endl;
                              while ((this->initialsarr->front()).getX() == temp.getX() && (this->initialsarr->front()).getY() == temp.getY())
                                 this->initialsarr->pop_front();
                          }
                          outfile << "</tr>" << endl;
                      }
                      outfile << "</table>" << endl << "</div>" << endl;
                      outfile << "</body>" << endl;
                      outfile << "</html>" << endl;
                      outfile.close();
                  }
             }
};

int main(int argno, char** args)
{
    try
    {
       if (argno == 3)
       {
          PuzzleSolver pz(args[1]);
          pz.solvePuzzle();
          pz.printPuzzleInitials();
          pz.printPuzzleMatrix(true);
          pz.makeHTML(args[2]);
       }
       else
           cout << "Please use proper command line that is : " << endl << "program.exe unsolved.txt solve.html" << endl;
    }
    catch(Exception e)
    {
       cout << e.exnum() << " " << e.what() << endl;
    }
    system("pause");
}
