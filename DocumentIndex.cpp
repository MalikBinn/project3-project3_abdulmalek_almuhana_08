//****************************************************************************************
//
//	INCLUDE FILES
//
//****************************************************************************************
#include	<fstream>
#include	<iostream>
#include	<string>

// #include	<unistd.h>

#include	"DocumentIndex.h"
#include	"GetLine.h"

using namespace std;

//****************************************************************************************
//
//	CONSTANT DEFINITIONS
//
//****************************************************************************************

//****************************************************************************************
//
//	CLASSES, TYPEDEFS AND STRUCTURES
//
//****************************************************************************************
typedef	string::size_type	StringSize;

//****************************************************************************************
//
//	PUBLIC DATA
//
//****************************************************************************************

//****************************************************************************************
//
//	PRIVATE DATA
//
//****************************************************************************************

//****************************************************************************************
//
//	FUNCTION PROTOTYPES
//
//****************************************************************************************

//****************************************************************************************
//
//	DocumentFile::Close
//
//****************************************************************************************
void	DocumentFile::Close()
{
	//************************************************************************************
	//	LOCAL DATA
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS
	file_.close();
	file_.clear();
	
	return;
}

//****************************************************************************************
//
//	DocumentFile::GetPageNumber
//
//****************************************************************************************
int	DocumentFile::GetPageNumber()
{
	//************************************************************************************
	//	LOCAL DATA
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS
	
	return(pageNumber_);
}

//****************************************************************************************
//
//	DocumentFile::GetWord
//
//****************************************************************************************
string	DocumentFile::GetWord()
{
	//************************************************************************************
	//	LOCAL DATA
	string	word;
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS

	return(word);
}

//****************************************************************************************
//
//	DocumentFile::LoadExclusions
//
//****************************************************************************************
bool	DocumentFile::LoadExclusions(const string& name)
{
	//************************************************************************************
	//	LOCAL DATA
	bool	success;
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS
	
	return(success);
}

//****************************************************************************************
//
//	DocumentFile::Open
//
//****************************************************************************************
bool	DocumentFile::Open(const string& name)
{
	//************************************************************************************
	//	LOCAL DATA

	//************************************************************************************
	//	EXECUTABLE STATEMENTS
	file_.open(name, ios::in);
	if (!file_.fail())
	{
		//	You may add any useful initialization here.

		return(true);
	}
	else
	{
		return(false);
	}
}

//****************************************************************************************
//
//	DocumentFile::Read
//
//****************************************************************************************
bool	DocumentFile::Read()
{
	//************************************************************************************
	//	LOCAL DATA
	bool	success;

	//************************************************************************************
	//	EXECUTABLE STATEMENTS

	return(success);
}

//****************************************************************************************
//
//	DocumentIndex::Create
//
//****************************************************************************************
void	DocumentIndex::Create(DocumentFile& documentFile)
{
	//************************************************************************************
	//	LOCAL DATA
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS

	return;
}

//****************************************************************************************
//
//	DocumentIndex::Write
//
//****************************************************************************************
void	DocumentIndex::Write(ostream& indexStream)
{
	//************************************************************************************
	//	LOCAL DATA
	
	//************************************************************************************
	//	EXECUTABLE STATEMENTS
	
	return;
}
