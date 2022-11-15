#pragma once
#include <string>
#include "DeviceList.h"

using namespace std;

//User class
class User
{
//setting private class variables.
private:
	unsigned int id; //User id.
	string name; //The user's name.
	unsigned int age; //User's age.
	DevicesList* deviceList; //A list of the user's devices.

//setting public functions for the user class.
public:
	void init(unsigned int id, string username, unsigned int age); //Initialization function for the user class.
	void clear(); //function to reset and clear all of the user's data.
	unsigned int getID() const; //const 'get' function that returns the user's id.
	string getUserName() const; //const 'get' function that returns the user's name.
	unsigned int getAge() const; //const 'get' function that returns the user's age.
	DevicesList& getDevices() const; //const 'get' function that returns a reference to the user's device list.
	void addDevice(Device newDevice); //function adds a given new device object to the user's device list.
	bool checkIfDevicesAreOn() const; //const function to return if all the user's devices are on (true - yes / false - no)
};