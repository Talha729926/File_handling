#include<iostream>
#include<fstream>
using namespace std;
int main()

{
	ofstream obj("file.txt");
	obj<<"my name is talha";
	cout<<"written"<<endl;
	obj.close();
}