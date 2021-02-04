/*************************************************************************
 * AUTHOR'S     : Jeffrey Roe
 * ***********************************************************************/
#include "Header.h"

/************************************************************************
* FUNCTION PrintHeaderConsole
*_____________________________________________________________________
* This function outputs the class header
* ____________________________________________________________________
* PRE-CONDITIONS
* 	oFile     : output file being used
* 	programmer  : name of programmer
* 	asName      : name of assignment or lab
* 	asType      : determines if project is an assignment or name
* 	asNum       : the number of assignment or lab
* POST-CONDITIONS
* 	RETURNS --> nothing(outputs class header)
*************************************************************************/
void PrintHeaderConsole(string  programmer,    //OUT   - programmer name
                        string  asName,        //OUT   - assignment name
                        char    asType,        //OUT   - lab or assignment
                        int     asNum)        //OUT   - assignment number
{
	// Header used for all personal projects or school projects
	/*const char CLASS[5]    =  "CS1C";
	const char SECTION[25] = "MW: 5:30p - 8:30p";

	cout <<  left;
	cout << setfill('*') << setw(75) << '*' << setfill(' ');
	cout << "\n*  PROGRAMMED BY : " << programmer;
	cout << "\n*  " << setw(14) << "CLASS"  << ": " << CLASS;
	cout << "\n*  " << setw(14) << "SECTION"  << ": " << SECTION;
	cout << "\n*  ";

	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(8);
	}
	else
	{
		cout << "ASSIGMENT #" << setw(2);
	}

	cout << asNum << " : " << asName << endl;
	cout << setfill('*') << setw(75) << '*' << setfill(' ');
	cout << endl << endl;
    cout << right;
}*
