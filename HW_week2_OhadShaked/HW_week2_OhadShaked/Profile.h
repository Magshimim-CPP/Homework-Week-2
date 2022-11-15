#pragma once
#include "UserList.h"
#include "Page.h"
#include "User.h"

using namespace std;

//Profile class
class Profile
{
//setting private class variables.
private:
	User owner; //the owner of the profile (user class object). 
	Page* page; //the owner's profile page.
	UserList* friends; //a list of the owner's friends (user class objects).

//setting public functions for the Profile class.
public:
	void init(User owner); //Initialization function for the Profile class.
	void clear(); //function to reset and clear all of the Profile's data.
	User getOwner() const; //const 'get' function that returns the Profile's owner user.
	void setStatus(string new_status); //function sets the Profile's page status to a given string.
	void addPostToProfilePage(string post); //function adds a given string to the Profile's page 'posts' string.
	void addFriend(User friend_to_add); //function adds a given new user (friend) object to the Profile's friends list.
	string getPage() const; //const 'get' function that returns a string with the profile's page content (status and posts).
	string getFriends() const; //const 'get' function that returns a string with the user's friends names.
	string getFriendsWithSameNameLength() const; //const 'get' function that returns a string with the user's friends names (only those with the same name length as the user).
};