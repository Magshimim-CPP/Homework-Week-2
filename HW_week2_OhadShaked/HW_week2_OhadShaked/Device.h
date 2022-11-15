#pragma once
#include <string>

using namespace std;

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////

//Device class
class Device
{
//setting private class variables.
private:
	unsigned int id; //Device id
	DeviceType type; //Device type
	string os; //Device operating System
	bool activeStatus; //Device active(yes/no) status.

//setting public functions for the device class.
public:
	void init(unsigned int id, DeviceType type, string os); //Initialization function for the device class.
	unsigned int getID() const; //const 'get' function that returns the device's id.
	DeviceType getType() const; //const 'get' function that returns the device's type.
	string getOS() const; //const 'get' function that returns the device's operating System.
	bool isActive() const; //const function that returns the device's active status.
	void activate(); //function to set the device's 'activeStatus' field to true.
	void deactivate(); //function to set the device's 'activeStatus' field to false.
};

