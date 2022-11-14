#include <iostream>
#include "User.h"

#define ZERO 0

void User::init(unsigned int id, string name, unsigned int age)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->devicesList = new DevicesList;
	this->devicesList->init();
}

void User::clear()
{
	devicesList->clear();
	delete(devicesList);
	age = ZERO;
	id = ZERO;
	name = "";
}

unsigned int User::getID() const
{
	return id;
}

string User::getUserName() const
{
	return name;
}

unsigned int User::getAge() const
{
	return age;
}

DevicesList& User::getDevices() const
{
	return *devicesList;
}

void User::addDevice(Device newDevice)
{
	devicesList->add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
	DeviceNode* temp = devicesList->get_first();

	while (temp)
	{
		if (!(temp->get_data().isActive()))
		{
			return false;
		}
		temp = temp->get_next();
	}

	return true;
}
