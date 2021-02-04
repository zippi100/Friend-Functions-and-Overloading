/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * STUDENT ID   : 790342
 * Assignment #7: Friend Functions and Overloading
 * CLASS        : CS1C
 * SECTION 	    : MW 5:30 - 8:30
 * DUE DATE     : 10/7/13
 * ***********************************************************************/
#include "header.h"
#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;

// Class Object of a Student
class Student {

public:

	friend void FriendObjectId(Student student1, Student student2,
	                    Student student3, Student student4);

	friend int operator==(const Student& student1,const Student& student2);

	Student();                              // default constructor

	// my own constructor
	Student(string GetNames,    // IN - name from user
            string GetPhone,    // IN - phone number from user
            int ids,            // IN - id from user
            int GetAge,         // IN - age from user
            char GetGender,     // IN - gender from user
            string GetRank,     // IN - class standing from user
            double GetGpa);     // IN - gpa from user)

	friend Student operator+(Student& student,int getAge);
	void AddAge(int Age);

	// changes part of the list
	void GetNewName(string Name);           // new name
	void GetNewPhone(string Phone);         // new phone number
	void GetNewId(int Ids);                 // new id
	void GetNewAge(int Age);                // new age
	void GetNewGender(char Gender);         // new gender
	void GetNewRank(string Rank);           // new rank
	void GetNewGpa(float Gpa);              // new gpa

	string GetName()const;                  // return name
	string GetPhone()const;                 // return phone number
	string GetRank()const;                  // return rank
	int    GetAge()const;                   // return age
	int    GetId()const;                    // return id
	char   GetGender()const;                // return gender
	float  GetGpa()const;                   // return gpa

	void Print()const;        // prints object info
	virtual ~Student();                     // destructor

private:

	string name;             // name stored
	string phonenumber;      // phone number stored
	string classRank;        // class standing stored
	int    id;               // id stored
	int    age;              // age stored
	char   gender;           // gender stored
	float  gpa;              // gpa stored
};

#endif /* STUDENT_H_ */
