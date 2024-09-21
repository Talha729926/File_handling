#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{ofstream MyFile("ali.txt");
MyFile<<"Muhammad Talha\n ";
MyFile<<"BS Information Technology\n ";
MyFile<<"session :2023-27\n";
MyFile<<"Reg No:23FR-BGNU-00205\n";
MyFile<<"Roll no:BSITF23M46\n";
MyFile<<" Blood Group: O++";
MyFile.close();

string myText;
int a=0;
ifstream Myreadfile("ali.txt");
if(Myreadfile.is_open())
{
	string line;
	int wordcount=0;
while(getline(Myreadfile,line))
{
	stringstream ss(line);
	string word;
	while(ss>>word)
	{
		wordcount++;
	}
}
Myreadfile.close();
cout<<"Number of words in the said file:"<<wordcount<<endl;
}else
{
	cout<<"Failed to open the file."<<endl;
}
return 0;
}