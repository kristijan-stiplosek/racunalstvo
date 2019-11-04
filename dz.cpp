#include <iostream>
using namespace std;
int main()
{
	int i;
	char X[]="ovo je znakovni niz";
	
	
	for(i=0;i<=7;i++)
	{
		cout<<"X["<<i<<"]"<<X[i]<<"  "<<std::endl;
	}
	
	
	for(i=0;'X'<=i;i++)
	{
		cout<<"X["<<i<<"]"<<X[i]<<"  "<<endl;
	}
	
	}
