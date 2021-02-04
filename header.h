/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * ***********************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include "Student.h"
using namespace std;

/*************************************************************************
 * GLOBAL CONSTANTS
 * -----------------------------------------------------------------------
 * OUTPUT
 * -----------------------------------------------------------------------
 * ASSIGNMENT_NUM  : Assignment Number (specific to this assignment)
 * ASSIGNMENT_TYPE : Determines if project is a lab or assignment
 * ASSIGNMENT_NAME : Title of the Assignment
 * PROGRAMMER 	   : Programmer's Name(s)
 * ***********************************************************************/
/*const int      ASSIGNMENT_NUM  =  7;
const char     ASSIGNMENT_TYPE = 'a';
const string   ASSIGNMENT_NAME = "Friend Functions and Overloading";
const string   PROGRAMMER      = "Jeffrey Roe";*/

/**************************************************************************
 *PrintHeader
 *	This function receives an assignment name, type, and number the outputs
 *	the appropriate header into an output file
 *-------------------------------------------------------------------------
 * RETURNS -> nothing (outputs class header)
 *
 *************************************************************************/
/*void PrintHeaderConsole(string  programmer,    //OUT   - programmer name
                        string  asName,        //OUT   - assignment name
                        char    asType,        //OUT   - lab or assignment
                        int     asNum);        //OUT   - assignment number*/

/**************************************************************************
 *GetStudentAge
 *	This function receives a few student objects and changes the age
 *	depending on the certain test
 *-------------------------------------------------------------------------
 * RETURNS -> nothing
 *
 *************************************************************************/
void GetStudentAge(Student student1,   //IN & OUT - objects age
		           Student student2,   //IN & OUT - objects age
		           Student student3,   //IN & OUT - objects age
                   Student student4);  //IN & OUT - objects age

#endif /* HEADER_H_ */
