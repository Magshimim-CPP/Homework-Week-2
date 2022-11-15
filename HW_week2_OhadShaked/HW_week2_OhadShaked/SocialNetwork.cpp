#include "SocialNetwork.h"
#include "Device.h"

//setting define constant variable for 0 and 2.
#define ZERO 0
#define TWO 2
//setting define constant variable for empty string content.
#define EMPTY ""
//setting define constant variable for the seperation in the device string.
#define SEP ", "

/*
Initialization function for the SocialNetwork class.
Input: string networkName, int minAge
Output: none.
*/
void SocialNetwork::init(string networkName, int minAge)
{
	this->networkName = networkName;
	this->minAge = minAge;
	profList = new ProfileList;
	profList->init();
}

/*
Function to reset and delete all of the list's Profiles data.
Input: none.
Output: none.
*/
void SocialNetwork::clear()
{
	profList->clear();
	delete profList;
}

/*
Const 'get' function that returns the Network's name.
Input: none.
Output: the Network's name (string networkName).
*/
string SocialNetwork::getNetworkName() const
{
	return networkName;
}

/*
Const 'get' function that returns the Network's minimum using age.
Input: none.
Output: the Network's minimum using age (int minAge).
*/
int SocialNetwork::getMinAge() const
{
	return minAge;
}

/*
Function adds a given new profile object to the Network's Profile list.
Input: Profile profile_to_add
Output: if the user was old enough to use the network - true.  if not - false.
*/
bool SocialNetwork::addProfile(Profile profile_to_add)
{
	//checking if the profile is old enough to use the network. entering the condition if it is.
	if (profile_to_add.getOwner().getAge() >= minAge)
	{
		//adding the profile to the profile list.
		profList->add(profile_to_add);
		//returning true
		return true;
	}
	//if the age wasn't old enough for the condition, returning false.
	return false;
}

/*
Function creates and returns a string containing all of the windows devices of profiles using the social network (id and os).
Input: none.
Output: a string containing all of the windows devices of profiles using the social network (id and os) (string devList).
*/
string SocialNetwork::getWindowsDevices() const
{
	//setting a profileNode variable to the first profile in the list, and an empty string to contain the results.
	ProfileNode* profNode = profList->get_first();
	string devList = EMPTY;

	//looping as long as a next profile exists (not null).
	while (profNode)
	{
		//creating a 'user' variable for the currently looped profile.
		User currentUser = profNode->get_data().getOwner();
		//setting currentDev to the first device of the currently looped user.
		DeviceNode* currentDev = currentUser.getDevices().get_first();

		//looping as long as a next device exists (not null).
		while (currentDev)
		{
			//setting the os and id variables to the current device's content.
			string os = currentDev->get_data().getOS();
			unsigned int id = currentDev->get_data().getID();

			//checking if the os string contains the string "windows" in it. (https://cplusplus.com/reference/string/string/find/)
			if (os.find(WINDOWS) != string::npos)
			{
				//adding the device to the list.
				devList += "[" + to_string(id) + SEP + os + "], ";
			}
			//moving to the next device.
			currentDev = currentDev->get_next();
		}
		//moving to the next profile.
		profNode = profNode->get_next();
	}

	//removing the last 2 chars (',' and ' ') from the devices string.
	devList = devList.substr(ZERO, devList.length() - TWO);

	//returning the devices string.
	return devList;
}