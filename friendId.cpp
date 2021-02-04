/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * STUDENT ID   : 790342
 * Assignment #7: Friend Functions and Overloading
 * CLASS        : CS1C
 * SECTION 	    : MW 5:30 - 8:30
 * DUE DATE     : 10/7/13
 * ***********************************************************************/
#include "header.h"

/************************************************************************
* FUNCTION FreindObjectId
*_____________________________________________________________________
* This function compares the id number between two students and determines
* whether or not two students have the same id number
* ____________________________________________________________________
* PRE-CONDITIONS
* 	student1     : a student object
* 	student2     : a student object
* 	student3     : a student object
* 	student4     : a student object
* POST-CONDITIONS
* 	RETURNS --> nothing
*************************************************************************/
void FriendObjectId(Student student1, // CALC - compare object
		            Student student2, // CALC - compare object
                    Student student3, // CALC - compare object
                    Student student4) // CALC - compare object
{

	// checks to see if two student id numbers are the same
	if(student1.id == student2.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student1.name << " and " << student2.name
			 << " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";

	}
	if(student1.id == student3.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student1.name << " and " << student3.name
			<< " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";
	}
	if(student1.id == student4.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student1.name << " and " << student4.name
			 << " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";
	}

	if(student2.id == student3.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student2.name << " and " << student3.name
			 << " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";
	}

	if(student2.id == student4.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student2.name << " and " << student4.name
			 << " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";
	}
	if(student3.id == student4.id)
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << student3.name << " and " << student4.name
			 << " have the same id number\n\n";
	}
	else
	{
		cout << student1.name << " id number: " << student1.id << endl;
		cout << student2.name << " id number: " << student2.id << endl;
		cout << endl;
		cout << student1.name << " and " << student2.name
			 << " do NOT have the same id number\n\n";
	}
	if (student1.id != student2.id && student1.id != student3.id &&
		     student1.id != student4.id && student2.id != student3.id &&
		     student2.id != student4.id && student3.id != student4.id)
	{
		cout << "No two students have the same id number\n\n";
	}
}

/************************************************************************
* FUNCTION operator==
*_____________________________________________________________________
* This function compares the id number between two students and determines
* whether or not two students have the same id number using == overloading
* ____________________________________________________________________
* PRE-CONDITIONS
* 	student1     : a student object
* 	student2     : a student object
*
* POST-CONDITIONS
* 	RETURNS --> nothing
*************************************************************************/
int operator==(const Student& student1, // CALC - compare object
		       const Student& student2) // CALC - compare object

{
	return(student1.id == student2.id);
}
