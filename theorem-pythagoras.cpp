#include <iostream>
#include <math.h>
//theorem pythagoras
using namespace std;

float CO(float h, float a)//declaration data
{
	float operation = sqrt((h*h)-(a*a));
	return operation;
}
float HIP(float h, float o)
{
	float operation = sqrt((h*h)+(o*o));
	return operation;
}
int main() {
	int opc;
	float o, a, h;
	cout<< "theorem pythagoras\n"
		<<"You want to Calculate?\n"
		<<"[1]Cathetus\n[2]Hipotenuse"<<endl;
	cout<<"> ";
	cin>>opc;
	if (opc ==1)
	{
		cout<<"Cathetus Known ?: ";
		cin>>a;
		cout<<"Hipotenuse ?: ";
		cin>>h;
		cout<<"unknown Cathetus worth: "<<CO(h,a)<<endl;
		
	}
	else if (opc ==2)
	{
		cout<<"Cathetus Opposite ?: ";
		cin>>o;
		cout<<"Cathetus Adjacent ?: ";
		cin>>h;
		cout<<"unknown Cathetus worth: "<<HIP(h,o)<<endl;
	}
	else
		{
			cout<<"Bad option"<<endl;
		}
system("pause"); //system(pause) 
return 0 ;
}

