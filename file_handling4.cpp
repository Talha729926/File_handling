#include <iostream>     
#include <fstream>    
#include <string>       
#include <sstream>    
using namespace std;
int main() 
{
  ifstream herry("ali.txt");

  if (herry.is_open())
   {  
    string line;         
    int wCount = 0;    

    while (getline(herry, line))
	 {  
     stringstream ss(line);  
      string word;  
      while (ss >> word)
	   {  
        wCount++; 
      }
    }

    herry.close();

    cout << "Number of words in the said file: " << wCount << endl;  
  } else {
    cout << "Failed to open the file." << endl;
  }

  return 0;  
}