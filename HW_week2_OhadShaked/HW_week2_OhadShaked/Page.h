#pragma once
#include <iostream>
#include <string>

using namespace std;

class Page
{
private:
	string status;
	string posts;

public:
	void init();
	string getPosts() const;
	string getStatus() const;
	void clearPage();
	void setStatus(string status);
	void addLineToPosts(string new_line);
};