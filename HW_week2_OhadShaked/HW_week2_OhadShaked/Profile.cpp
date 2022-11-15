#include "Profile.h"
#include <iostream>
#include <string>

//setting define constant variable for 0 and 1.
#define ZERO 0
#define ONE 1
//setting define constant variable for empty string content.
#define EMPTY ""

/*
Initialization function for the Profile class.
Input: User owner
Output: none.
*/
void Profile::init(User owner)
{
	this->owner = owner;
	page = new Page;
	page->init();
	friends = new UserList;
	friends->init();
}

/*
function to reset and clear all of the Profile's data.
Input: none.
Output: none.
*/
void Profile::clear()
{
	page->clearPage();
	friends->clear();
	delete page;
	delete friends;
}

/*
Const 'get' function that returns the Profile's owner user.
Input: none.
Output: the Profile's owner user (User owner).
*/
User Profile::getOwner() const
{
	return owner;
}

/*
Function sets the Profile's page status to a given string.
Input: string new_status
Output: none.
*/
void Profile::setStatus(string new_status)
{
	page->setStatus(new_status);
}

/*
Function adds a given string to the Profile's page 'posts' string.
Input: string post
Output: none.
*/
void Profile::addPostToProfilePage(string post)
{
	page->addLineToPosts(post);
}

/*
Function adds a given new user object (friend) to the Profile's friends list.
Input: User friend_to_add
Output: none.
*/
void Profile::addFriend(User friend_to_add)
{
	friends->add(friend_to_add);
}

/*
Const 'get' function that returns a string with the profile's page content (status and posts).
Input: none.
Output: a string with the profile's page content (status and posts).
*/
string Profile::getPage() const
{
	//returning the owner's page content in the requested format.
	return "Status: " + page->getStatus() + "\n*******************\n*******************\n" + page->getPosts();
}

/*
Const 'get' function that returns a string with the user's friends names.
Input: none.
Output: a string with the user's friends names (string friendsStr).
*/
string Profile::getFriends() const
{
	//setting a user node to the owner's first friend and an empty string for the friends list.
	UserNode* friendNode = friends->get_first();
	string friendsStr = EMPTY;

	//looping as long as a next friend node exists (not null).
	while (friendNode)
	{
		//adding the current friend's name to the string.
		friendsStr += friendNode->get_data().getUserName() + ",";
		//moving to the next friend node.
		friendNode = friendNode->get_next();
	}

	//removing the last ',' from the friends string.
	friendsStr = friendsStr.substr(ZERO, friendsStr.length() - ONE);

	//returning the friends string.
	return friendsStr;
}

/*
Const 'get' function that returns a string with the user's friends names (only those with the same name length as the user).
Input: none.
Output: a string with the user's friends names (only those with the same name length as the user), (string friendsStr).
*/
string Profile::getFriendsWithSameNameLength() const
{
	//setting a user node to the owner's first friend and an empty string for the friends list.
	UserNode* friendNode = friends->get_first();
	string friendsStr = EMPTY;

	//looping as long as a next friend node exists (not null).
	while (friendNode)
	{
		//checking if the current friend's name length is equal to the owner's name length. if it is, entering the condition and adding the current friend to the string.
		if (friendNode->get_data().getUserName().length() == this->getOwner().getUserName().length())
		{
			//adding the current friend's name to the string.
			friendsStr += friendNode->get_data().getUserName() + ",";
		}
		//moving to the next friend node.
		friendNode = friendNode->get_next();
	}

	//removing the last ',' from the friends string.
	friendsStr = friendsStr.substr(ZERO, friendsStr.length() - ONE);

	//returning the friends string.
	return friendsStr;
}
