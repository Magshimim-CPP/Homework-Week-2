#include <iostream>
#include "User.h"

#define ZERO 0

/*
Initialization function for the user class.
Input: unsigned int id, string name, unsigned int age
Output: none.
*/
void User::init(unsigned int id, string name, unsigned int age)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->deviceList = new DevicesList;
	this->deviceList->init();
}

/*
Function to reset and clear all of the user's data.
Input: none.
Output: none.
*/
void User::clear()
{
	deviceList->clear();
	delete(deviceList);
	age = ZERO;
	id = ZERO;
	name = "";
}

/*
Const 'get' function that returns the user's id.
Input: none
Output: the user's id (unsigned int id).
*/
unsigned int User::getID() const
{
	return id;
}

/*
Const 'get' function that returns the user's name.
Input: none
Output: the user's name (string name).
*/
string User::getUserName() const
{
	return name;
}

/*
Const 'get' function that returns the user's age.
Input: none
Output: the user's age (unsigned int age).
*/
unsigned int User::getAge() const
{
	return age;
}

/*
Const 'get' function that returns a reference to the user's device list.
Input: none
Output: a reference to the user's device list (DevicesList& deviceList).
*/
DevicesList& User::getDevices() const
{
	return *deviceList;
}

/*
Function adds a given new device object to the user's device list.
Input: Device newDevice
Output: none.
*/
void User::addDevice(Device newDevice)
{
	deviceList->add(newDevice);
}

/*
Const function to return if all the user's devices are on (true - yes / false - no)
Input: none.
Output: true or false based on the result (true - yes / false - no)
*/
bool User::checkIfDevicesAreOn() const
{
	//creating a temp node for the loop checking proccess.
	DeviceNode* dev = deviceList->get_first();

	//looping as long as a next node exists (not null).
	while (dev)
	{
		//if the currently looped node isn't active, then at least one device is off, returning false.
		if (!(dev->get_data().isActive()))
		{
			return false;
		}
		//moving to the user's next device node.
		dev = dev->get_next();
	}
	//if we looped through all the device nodes and didn't return false, then all of the devices are on, returning true.
	return true;
}
