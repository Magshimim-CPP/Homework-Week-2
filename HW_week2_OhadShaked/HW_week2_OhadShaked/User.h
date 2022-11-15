#pragma once
#include <string>
#include "DeviceList.h"

using namespace std;

class User
{
private:
	unsigned int id;
	string name;
	unsigned int age;
	DevicesList* devicesList;

public:
	void init(unsigned int id, string username, unsigned int age);
	void clear();
	unsigned int getID() const;
	string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices() const;
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;
};