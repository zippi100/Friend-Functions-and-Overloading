/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * ***********************************************************************/
#include "header.h"


/**************************************************************************
 *Student
 *	This function initializes class variables
 *-------------------------------------------------------------------------
 * RETURNS -> information variables to class
 *
 *************************************************************************/
Student::Student(): name(" "),phonenumber(" "),classRank(" "), id(0),
                    age(0),gender(' '), gpa(0) {

	// TODO Auto-generated constructor stub

}

/**************************************************************************
 *Student
 *	This function initializes class variables
 *-------------------------------------------------------------------------
 * RETURNS -> information variables to class
 *
 *************************************************************************/
Student::Student(string GetNames,   // IN - name from user
            string GetPhone,    	// IN - phone number from user
            int ids,            	// IN - id from user
            int GetAge,        		// IN - age from user
            char GetGender,   		// IN - gender from user
            string GetRank,    	 	// IN - class standing from user
            double GetGpa)         	// IN - gpa from user
{
	name        = GetNames;
	id          = ids;
	phonenumber = GetPhone;
	age         = GetAge;
	gender      = GetGender;
	classRank   = GetRank;
	gpa         = GetGpa;
}

/**************************************************************************
 *operator+
 *	This Method overloads the + operator and lets object arithmetic
 *	happen
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
Student operator+(Student& student,int getAge)
{
	student.age = student.age + getAge;

	return student;
}

/**************************************************************************
 * AddAge
 *	This Method adds an age to an object
 *-------------------------------------------------------------------------
 * RETURNS -> nothing
 *
 *************************************************************************/
 void Student::AddAge(int Age)
{
	age = age + Age;
}

/**************************************************************************
 *GetNewName
 *	This Method holds the name of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewName(string Name)
{
	name = Name;
}

/**************************************************************************
 *GetNewPhone
 *	This Method holds the phone number of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewPhone(string Phone)
{
	phonenumber = Phone;
}

/**************************************************************************
 *GetNewId
 *	This Method holds the id of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewId(int Ids)
{
	id = Ids;
}

/**************************************************************************
 *GetNewAge
 *	This Method holds the age of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewAge(int Age)
{
	age = Age;
}

/**************************************************************************
 *GetNewGender
 *	This Method holds the gender of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewGender(char Gender)
{
	gender = Gender;
}

/**************************************************************************
 *GetNewRank
 *	This Method holds the class standing of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewRank(string Rank)
{
	classRank = Rank;
}

/**************************************************************************
 *GetNewGpa
 *	This Method holds the gpa of a student
 *-------------------------------------------------------------------------
 * RETURNS -> information of a student
 *
 *************************************************************************/
void Student::GetNewGpa(float Gpa)
{
	gpa = Gpa;
}

/**************************************************************************
 *GetName
 *	This function returns a name from student list
 *-------------------------------------------------------------------------
 * RETURNS -> name
 *
 *************************************************************************/
string Student::GetName()const
{
	return name;
}

/**************************************************************************
 *GetPhone
 *	This function returns a phone number from student list
 *-------------------------------------------------------------------------
 * RETURNS -> phonenumber
 *
 *************************************************************************/
string Student::GetPhone()const
{
	return phonenumber;
}

/**************************************************************************
 *GetRank
 *	This function returns rank a from student list
 *-------------------------------------------------------------------------
 * RETURNS -> classRank
 *
 *************************************************************************/
string Student::GetRank()const
{
	return classRank;
}

/**************************************************************************
 *GetAge
 *	This function returns an age from student list
 *-------------------------------------------------------------------------
 * RETURNS -> age
 *
 *************************************************************************/
int Student::GetAge()const
{
	return age;
}

/**************************************************************************
 *GetId
 *	This function returns an id from student list
 *-------------------------------------------------------------------------
 * RETURNS -> id
 *
 *************************************************************************/
int Student::GetId()const
{
	return id;
}

/**************************************************************************
 *GetGender
 *	This function returns a gender from student list
 *-------------------------------------------------------------------------
 * RETURNS -> gender
 *
 *************************************************************************/
char Student::GetGender()const
{
	return gender;
}

/**************************************************************************
 *GetGpa
 *	This function returns a gpa from student list
 *-------------------------------------------------------------------------
 * RETURNS -> gpa
 *
 *************************************************************************/
float Student::GetGpa()const
{
	return gpa;
}

/**************************************************************************
 *PrintObject
 *	This function prints output to console
 *-------------------------------------------------------------------------
 * RETURNS ->nothing
 *
 *************************************************************************/
void Student::Print()const
{
	cout << setprecision(2) << fixed
		 << "Name: " << name << endl
	     << "Phone Number: " << phonenumber << endl
		 << "Id: " << id << endl
		 << "Age: " << age << endl
		 << "Gender: " << gender << endl
		 << "Class Rank: " << classRank << endl
		 << "Gpa: " << gpa << endl;
}

Student::~Student()  {
	// TODO Auto-generated destructor stub

}
