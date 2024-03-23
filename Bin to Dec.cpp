/* MUHAMMAD HAYYAN
23I-2041_______CY-A
Assignment#05______Q4A */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//Program to convert binary to decimal number
	
	int b, d=0, i, e=0;					//b for binary num, d for dec, i for storing individual digits, e for exponent
	
	cout<<"\n Enter a positive binary number: ";		//taking input
	cin>>b;
	cout<<endl;
	
	
	for (; b>0 ; e++)
	{
		i = b % 10;				//separating individual digits
		b = b/10;			
		
		d = d + (i * pow(2,e) );		//main formula to convert
	}
	
	cout<<"\n\n The entered binary number is written as "<<d<<" in decimal \n";
	
	return 0;
}
