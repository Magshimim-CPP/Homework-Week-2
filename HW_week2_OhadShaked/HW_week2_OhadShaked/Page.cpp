#include "Page.h"

//setting define constant variable for empty string content.
#define EMPTY ""

/*
Initialization function for the page class.
Input: none.
Output: none.
*/
void Page::init()
{
	status = EMPTY;
	posts = EMPTY;
}

/*
Const 'get' function that returns the page's posts.
Input: none.
Output: the page's posts string (string posts).
*/
string Page::getPosts() const
{
	return posts;
}

/*
Const 'get' function that returns the page's status.
Input: none.
Output: the page's status string (string status).
*/
string Page::getStatus() const
{
	return status;
}

/*
Function reset's the page's posts string.
input: none.
Output: none.
*/
void Page::clearPage()
{
	posts = EMPTY;
}

/*
Function sets the page's status to a given string.
Input: string status
Output: none
*/
void Page::setStatus(string status)
{
	this->status = status;
}

/*
Function adds a given string to the page's 'posts' string in a new line.
Input: string new_line
Output: none.
*/
void Page::addLineToPosts(string new_line)
{
	posts += new_line + "\n";
}