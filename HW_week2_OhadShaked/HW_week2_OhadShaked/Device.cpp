#include <iostream>
#include "Device.h"

using namespace std;

void Device::init(unsigned int id, DeviceType type, std::string os)
{
	this->id = id;
	this->type = type;
	this->os = os;
	this->activeStatus = true;
}

unsigned int Device::getID() const
{
	return this->id;
}

DeviceType Device::getType() const
{
	return this->type;
}

string Device::getOS() const
{
	return this->os;
}

bool Device::isActive() const
{
	return this->activeStatus;
}

void Device::activate()
{
	this->activeStatus = true;
}

void Device::deactivate()
{
	this->activeStatus = false;
}