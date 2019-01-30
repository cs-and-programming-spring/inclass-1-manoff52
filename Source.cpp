


/***********************************************
* Name: Robert Manoff
* Email: manoff59@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius,area, circumference, kilometers, miles, circum, meters, centi, milli;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle, changes miles to km, and converts from km to meter" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area and circumference
	cout << " The area is = " << area << "\n\n";

	//compute circumference 
	circum = PI * 2 * radius;

	//display circumference 
	cout << " The circumference is = " << circum << "\n\n";
	
	//cout << "Program has ended"<<endl;
	
	//get user input for miles coversion
	cout << " Please input distance in miles: ";
	cin >> miles;

	//compute miles to kilometers
	kilometers = miles* 1.6;

	// display miles 
	cout << " The distance in kilometers is = " << kilometers << "\n\n";

	

	//compute the distance in meters, centimeters, and millimeters
	meters = kilometers *1000;
	centi = meters *100;
	milli = meters *1000;

	//display values 
	cout << "Kilometers coverted to meters = " << meters << endl;
	cout << "Meters converted to centimeters = " << centi << endl;
	cout << "Meters converted to millimeters = " << milli << "\n\n";

	
    float celsius, fahrenheit;

	//get user input for celsius conversion 
	cout << "Enter the temp in Celsius: ";
	cin >> celsius;

	//compute conversion
	fahrenheit = (9 / 5) * celsius + 32;

	//display value
	cout << "The temp in fahrenheit = " << fahrenheit << "\n\n";

	
	 float days, months, hours, minutes, seconds, years;

	//get user input for age in years 
	cout <<"Enter your age in years";
	cin >> years;

	//compute age in months days hours minutes and seconds 
	days = years* 365.25;
	months = years* 12;
	hours = days* 24;
	minutes = hours* 60;
	seconds = minutes* 60;

	//display output 
	cout << " You are :" << endl;
	cout << "Months :" << months << endl;
	cout << "Days: " << days << endl;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << "\n\n";


	//display first initial 
	//cout << "1 2 3 4 5 6" << endl;
	cout << "* * *" << endl;
	cout << "*   *" << endl;
	cout << "* *" << endl;
	cout << "*    *" << endl;
	cout << "*      *" << endl; 
	cout << "*        *" << "\n\n";

	cout << "This program has ended" << endl;



	

	

	
	system("pause");
	
	return 0;
}