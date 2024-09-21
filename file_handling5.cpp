#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myfile("ali.txt");
	ofstream outputfile("ali_copy.txt");
	if(myfile.is_open() && outputfile.is_open())
	{
		string line;
		while(getline(myfile,line))
		{
			outputfile<<line<<"\n";
		}
		myfile.close();
		outputfile.close();
		cout<<"file copy successful";
	}
	else
	{
		cout<<"file is not openned";
	}
	return 0;
}