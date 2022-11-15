#include "Page.h"

void Page::init()
{
	status = "";
	posts = "";
}

string Page::getPosts() const
{
	return posts;
}

string Page::getStatus() const
{
	return status;
}

void Page::clearPage()
{
	posts = "";
}

void Page::setStatus(string status)
{
	this->status = status;
}

void Page::addLineToPosts(string new_line)
{
	posts += new_line + "\n";
}