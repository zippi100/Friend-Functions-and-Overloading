/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * ***********************************************************************/
#include "header.h"

/************************************************************************
* FUNCTION GetStudentAge
*_____________________________________________________________________
* This function changes the age of each student by passing an integer
* through another function and also by using the + overloading
* ____________________________________________________________________
* PRE-CONDITIONS
* 	student1     : a student object
* 	student2     : a student object
* 	student3     : a student object
* 	student4     : a student object
* POST-CONDITIONS
* 	RETURNS --> nothing
*************************************************************************/
void GetStudentAge(Student student1,  // CALC - student age
		           Student student2,  // CALC - student age
		           Student student3,  // CALC - student age
		           Student student4)  // CALC - student age
{
	int     integer = 10;  // integer used to change age

	// formating
	cout << setfill('*') << setw(75) << ' ' << setfill(' ') <<  endl;
	cout << "Adding an integer that adds 10 years to student ages\n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// changing age passing an integer through member function
	student1.AddAge(integer);
	student2.AddAge(integer);
	student3.AddAge(integer);
	student4.AddAge(integer);

	// OUTPUT - new age of students
	cout << student1.GetName() << " is now " << student1.GetAge()
		 << " years old\n"
		 << student2.GetName() << " is now " << student2.GetAge()
		 << " years old\n"
		 << student3.GetName() << " is now " << student3.GetAge()
		 << " years old\n"
		 << student4.GetName() << " is now " << student4.GetAge()
		 << " years old\n\n\n";


	// Changing age of students using + overloading
	student1 = student1 + 1;
	student2 = student2 + 1;
	student3 = student3 + 1;
	student4 = student4 + 1;

	// formatting
	cout << setfill('*') << setw(75) << ' ' << setfill(' ') <<  endl;
	cout << "Adding a constant of 1 years using overloading + to student ages\n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// OUTPUT - new age of students
	cout << student1.GetName() << " is now " << student1.GetAge()
		 << " years old\n"
		 << student2.GetName() << " is now " << student2.GetAge()
		 << " years old\n"
		 << student3.GetName() << " is now " << student3.GetAge()
		 << " years old\n"
		 << student4.GetName() << " is now " << student4.GetAge()
		 << " years old\n\n\n";

	// formatting
	cout << setfill('*') << setw(75) << ' '
		 << setfill(' ')  << endl;
	cout << " Age difference \n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// OUTPUT - age difference
	cout << student1.GetName() << " is now "
		 << integer + 1	 << " years older\n"
		 << student2.GetName() << " is now "
		 << integer + 1	 << " years older\n"
		 << student3.GetName() << " is now "
		 << integer + 1	<< " years older\n"
		 << student4.GetName() << " is now "
		 << integer + 1	<< " years older\n\n\n";

	// formatting
	cout << setfill('*') << setw(75) << ' '
		 << setfill(' ')  << endl;
	cout << " Printing final results info \n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// OUTPUT - final results of program
	student1.Print();
	cout << endl << endl;
	student2.Print();
	cout << endl << endl;
	student3.Print();
	cout << endl << endl;
	student4.Print();
	cout << endl << endl;
}
