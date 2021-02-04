/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * ***********************************************************************/
#include "header.h"

/*************************************************************************
* Using Friend Functions and Overloading
*_________________________________________________________________________
* this program test to see if two student objects have the same id numbers
* or not, by using friend functions. One the test without overloading ==
* and one friend function that overloads ==. Then this program test to
* out a member function to add an integer to the age of student, then a
* test to add a constant to student ages with the + overloading
*_________________________________________________________________________
* INPUT
*   N/A
**************************************************************************/
int main()
{
	Student student1;      // IN & OUT - student information
	Student student2;      // IN & OUT - student information
	Student student3;      // IN & OUT - student information
	Student student4;      // IN & OUT - student information

	// Initializing all student info
	student1 = Student("Joe", "949-000-0000", 78909, 22, 'M', "Freshman",
			            4.0);
	student2 = Student("Kelly", "790-000-0000", 78909, 20, 'F', "Sophomore",
			            3.1);
	student3 = Student("Bob", "949-555-5555", 11111, 56, 'M', "Junior",
			            2.3);
	student4 = Student("Jenny", "949-111-0000", 11111, 33, 'F', "Senior",
			            2.2);

	 // OUTPUT - Prints generic header to output
	//PrintHeaderConsole(PROGRAMMER,ASSIGNMENT_NAME, ASSIGNMENT_TYPE,
	//	 			   ASSIGNMENT_NUM);

	// formatting
	cout << setfill('*') << setw(75) << ' '	<< setfill(' ')  << endl;
	cout << " Printing beginning info \n";
    cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

    // OUTPUT - all student info
	student1.Print();
	cout << endl << endl;
	student2.Print();
	cout << endl << endl;
	student3.Print();
	cout << endl << endl;
	student4.Print();
	cout << endl << endl;

	// formatting
	cout << setfill('*') << setw(75) << ' '
			<< setfill(' ')  << endl;
	cout << "Using the friend function without overloading operators!!\n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// function checks to see if any two students have the same id number
	FriendObjectId(student1, student2, student3, student4);

	// formatting
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 <<  endl;
	cout << "Using the friend function with overloading == Operator!\n";
	cout << setfill('*') << setw(75) << ' ' << setfill(' ')
		 << endl << endl;

	// checks to see if any two students have the same id using == overloading
	if (student1 == student2)
	{
		cout << student1.GetName() << " and " << student2.GetName()
			 << " have the same id number\n\n\n";
	}
	if(student1 == student3)
	{
		cout << student1.GetName() << " and " << student3.GetName()
  	 		 << " have the same id number\n\n\n";
	}
	if(student1 == student4)
	{
		cout << student1.GetName() << " and " << student4.GetName()
			 << " have the same id number\n\n\n";
	}

	if(student2 == student3)
	{
		cout << student2.GetName() << " and " << student3.GetName()
			 << " have the same id number\n\n\n";
	}
	if(student2 == student4)
	{
		cout << student2.GetName() << " and " << student4.GetName()
			 << " have the same id number\n\n\n";
	}
	if(student3 == student4)
	{
		cout << student3.GetName() << " and " << student4.GetName()
			 << " have the same id number\n\n\n";
	}
	else if (student1.GetId() != student2.GetId() &&
			 student1.GetId() != student3.GetId() &&
		     student1.GetId() != student4.GetId() &&
		     student2.GetId() != student3.GetId() &&
		     student2.GetId() != student4.GetId() &&
		     student3.GetId() != student4.GetId())
	{
		cout << "No two students have the same id number\n\n\n";
	}

	// function that changes the ages using another function and also
	// using the + overlaoding
    GetStudentAge(student1, student2, student3, student4);

	return 0;
}
