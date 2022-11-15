#include "Profile.h"
#include <iostream>
#include <string>
#include <cstring>

#define ZERO 0
#define ONE 1

void Profile::init(User owner)
{
	this->user = owner;
	page = new Page;
	page->init();
	friends = new UserList;
	friends->init();
}

void Profile::clear()
{
	page->clearPage();
	friends->clear();
	delete page;
	delete friends;
}

User Profile::getOwner() const
{
	return user;
}

void Profile::setStatus(string new_status)
{
	page->setStatus(new_status);
}

void Profile::addPostToProfilePage(string post)
{
	page->addLineToPosts(post);
}

void Profile::addFriend(User friend_to_add)
{
	friends->add(friend_to_add);
}

string Profile::getPage() const
{
	return "Status: " + page->getStatus() + "\n*******************\n*******************\n" + page->getPosts();

}

string Profile::getFriends() const
{
	UserNode* first = friends->get_first();
	string ret = "";
	while (first)
	{
		ret += first->get_data().getUserName() + ",";
		first = first->get_next();
	}
	ret = ret.substr(ZERO, ret.length() - ONE);

	return ret;
}

string Profile::getFriendsWithSameNameLength() const
{
	UserNode* first = friends->get_first();
	string ret = "";
	while (first)
	{
		if (first->get_data().getUserName().length() == this->getOwner().getUserName().length())
		{
			ret += first->get_data().getUserName() + ",";
		}
		first = first->get_next();
	}
	ret = ret.substr(ZERO, ret.length() - ONE);

	return ret;
}
