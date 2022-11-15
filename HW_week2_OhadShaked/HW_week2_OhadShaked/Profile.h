#pragma once
#include "UserList.h"
#include "Page.h"
#include "User.h"

using namespace std;

class Profile
{
private:
	User user;
	Page* page;
	UserList* friends;

public:
	void init(const User& owner);
	void clear();
	User getOwner() const;
	void setStatus(const string& new_status);
	void addPostToProfilePage(const string& post);
	void addFriend(const User& friend_to_add);
	string getPage() const;
	string getFriends() const;
	string getFriendsWithSameNameLength() const;
};