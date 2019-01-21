// Tanmishia Ayala
//Exercise #2: A friendly greeting program that will prompt user for tid bits of info
//Date: 01/17/2019
#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <math.h>

using namespace std;
//function to convert human years to dog years 
int DogToHuman(int a)
{

	int dY;
	int b = 7;
	dY = (a * b);
	return dY;
}
//function to get output output values if percentage is less than 51 or greater than 50
double ConfidencePercent(double a)
{
	
	double cp = a;
	if (cp <=50)
	{
		cout <<"I agree, programmers can't be trusted.\n"<<endl;
	}
	else
	{
		cout << "writing good code takes hard work.\n"<<endl;
	}
	
return cp;
}

int main()
{
	//Prompt user to enter their first name
	cout<<"Hello, please enter your first name: ";
	string strFname;
	cin>> strFname;
	cout<<"\n ";
	//Prompt user to enter their last name
	cout<<"Please enter your last name: ";
	string strLname;
	cin>> strLname;
	cout<<"\n ";
	int iAge;
	//Prompt user to enter their age
	cout<<"Please enter your age: ";
	cin>> iAge;
	cout<<"\n";
	//Prompt user to enter confidence in programmers
	cout<<"Enter your confidence in programmers in percentage: ";
	double strScale;
	cin>> strScale;
	int dogYears = DogToHuman(iAge);
	cout<<"\n";
	//Output users ft and last name plus a geeting
	cout<<"Hello "+ strFname + " " + strLname+" nice to meet you \n";
	cout<<"\nYou might be "<< iAge << + " in human years, but in dog years you are "<<DogToHuman(iAge) <<"\n"<<endl;
	//call ConfidencePercent function
	cout << ConfidencePercent(strScale) << "\n" << endl;
	system("pause");// Prevent console from closing immediately, press enter key to close console

	

}






		
		



