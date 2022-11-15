#include <iostream>
#include "Device.h"

// (it's way easier to use the std namespace then writing std::string each time)
using namespace std;

/*
Initialization function for the device class.
Input: unsigned int id, DeviceType type, std::string os
Output: none
*/
void Device::init(unsigned int id, DeviceType type, string os)
{
	this->id = id;
	this->type = type;
	this->os = os;
	this->activeStatus = true;
}

/*
Const 'get' function that returns the device's id.
Input: none
Output: the device's id (unsigned int id).
*/
unsigned int Device::getID() const
{
	return this->id;
}

/*
Const 'get' function that returns the device's type.
Input: none
Output: the device's type (DeviceType type).
*/
DeviceType Device::getType() const
{
	return this->type;
}

/*
Const 'get' function that returns the device's operating System.
Input: none
Output: the device's operating System (string os).
*/
string Device::getOS() const
{
	return this->os;
}

/*
Const function that returns the device's active status(yes/no).
Input: none
Output: the device's active status (true - yes / false - no).
*/
bool Device::isActive() const
{
	return this->activeStatus;
}

/*
Function to set the device's 'activeStatus' field to true (active).
Input: none
Output: none
*/
void Device::activate()
{
	this->activeStatus = true;
}

/*
Function to set the device's 'activeStatus' field to false (not active).
Input: none
Output: none
*/
void Device::deactivate()
{
	this->activeStatus = false;
}