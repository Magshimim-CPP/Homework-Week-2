#pragma once
#include <iostream>
#include <string>

using namespace std;

//Page class
class Page
{
//setting private class variables.
private:
	string status; //the user's page status.
	string posts; //the user's posts at the page.

//setting public functions for the page class.
public:
	void init(); //Initialization function for the page class.
	string getPosts() const; //const 'get' function that returns the page's posts.
	string getStatus() const; //const 'get' function that returns the page's status.
	void clearPage(); //function to reset the page's posts string.
	void setStatus(string status); //function sets the page's status to a given string.
	void addLineToPosts(string new_line); //function adds a given string to the page's 'posts' string in a new line.
};